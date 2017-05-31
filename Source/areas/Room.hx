package areas;
import actors.Actor;
import actors.Enemy;
import actors.EnemyAI;
import actors.Player;
import areaobjects.ClueObject;
import areaobjects.PaintArea;
import areaobjects.SoundSource;
import areaobjects.SwitchObject;
import areaobjects.Tile;
import areaobjects.Collidable;
import areaobjects.SubwaySandwich;
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Sprite;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.utils.ByteArray;
import openfl.Assets;

/**
 * ...
 * @author Peltast
 */
class Room extends Sprite
{
	
	private var tileArray:Array<Array<areaobjects.Tile>>;
	private var actorArray:Array<actors.Actor>;
	private var objectArray:Array<areaobjects.Collidable>;
	private var sandwiches:Array<areaobjects.SubwaySandwich>;
	private var roomStart:Point;
	private var roomGoal:Goal;
	
	private var tileSet:Bitmap;
	private var tileTypes:Array<Array<Int>>;
	private var tileSize:Int;
	private var roomHeight:Int;
	private var roomWidth:Int;
	
	private var tileContainer:Sprite;
	private var objectContainer:Sprite;
	private var actorContainer:Sprite;
	
	public function new(roomFile:ByteArray, tileSet:Bitmap, tileTypes:Array<Array<Int>>, tileSize:Int = 16) 
	{
		super();
		
		this.tileSet = tileSet;
		this.tileTypes = tileTypes;
		this.tileSize = tileSize;
		
		initializeRoom();
		var parsedFile:Array<String> = roomFile.toString().split('\n');
		parseRoom(parsedFile);
		readDynamicObjects(parsedFile);
	}
	
	private function initializeRoom():Void {
		tileContainer = new Sprite();
		objectContainer = new Sprite();
		actorContainer = new Sprite();
		this.addChild(tileContainer);
		this.addChild(objectContainer);
		this.addChild(actorContainer);
		actorArray = new Array<actors.Actor>();
		objectArray = new Array<areaobjects.Collidable>();
		sandwiches = new Array<areaobjects.SubwaySandwich>();
	}
	
	public function updateRoom():Void {
		
		for (i in 0...actorArray.length)
			actorArray[i].updateActor();
	}
	
	public function getActorCollisions(actor:actors.Actor):Array<areaobjects.Collidable> {
		var actorX:Int = Math.round(actor.x / tileSize);
		var actorY:Int = Math.round(actor.y / tileSize);
		var collisions:Array<areaobjects.Collidable> = new Array<areaobjects.Collidable>();
		
		for (y in (actorY - 1)...(actorY + 2)) {
			if (y < 0 || y > tileArray.length - 1) continue;
			
			for (x in (actorX - 1)...(actorX + 2)) {
				if (x < 0 || x > tileArray[y].length - 1) continue;
				
				var tempTile:areaobjects.Tile = tileArray[y][x];
				if (!tempTile.isPassable() && actor.isColliding(tempTile))
					collisions.push(tempTile);
			}
		}
		for (i in 0...actorArray.length) {
			if (actorArray[i] == actor) continue;
			if (actor.isColliding(actorArray[i]))
				collisions.push(actorArray[i]);
		}
		for (i in 0...objectArray.length) {
			if (actor.isColliding(objectArray[i]))
				collisions.push(objectArray[i]);
		}
		
		return collisions;
	}
	public function getActorTiles(actor:actors.Actor):Array<areaobjects.Tile> {
		var actorX:Int = Math.round(actor.x / tileSize);
		var actorY:Int = Math.round(actor.y / tileSize);
		var collisions:Array<areaobjects.Tile> = new Array<areaobjects.Tile>();
		
		for (y in (actorY - 1)...(actorY + 2)) {
			if (y < 0 || y > tileArray.length - 1) continue;
			
			for (x in (actorX - 1)...(actorX + 2)) {
				if (x < 0 || x > tileArray[y].length - 1) continue;
				
				var tempTile:areaobjects.Tile = tileArray[y][x];
				if (actor.isColliding(tempTile))
					collisions.push(tempTile);
			}
		}
		return collisions;
	}
	
	public function updateObjects(player:actors.Player):Void {
		for (i in 0...objectArray.length) {
			if (Std.is(objectArray[i], areaobjects.ClueObject)) {
				var clue:areaobjects.ClueObject = cast(objectArray[i]);
				clue.updateClue(player.isColliding(clue));
			}
			if (Std.is(objectArray[i], areaobjects.SubwaySandwich)) {
				var sandwich:areaobjects.SubwaySandwich = cast(objectArray[i]);
				sandwich.updateSandwich();
			}
			if (Std.is(objectArray[i], PaintArea)) {
				var paintArea:PaintArea = cast(objectArray[i]);
				paintArea.paintCollider(player);
			}
			if (Std.is(objectArray[i], SoundSource)) {
				var soundSource:SoundSource = cast(objectArray[i]);
				soundSource.updateSound(player);
			}
		}
	}
	
	public function createEnemy(horizontal:Bool, distance:Int, xCoord:Int, yCoord:Int):Void {
		
		var enemyAI:actors.EnemyAI = new actors.EnemyAI(horizontal, distance, new Point(xCoord * tileSize, yCoord * tileSize));
		addActor(new actors.Enemy(enemyAI), xCoord, yCoord);
	}
	public function addObject(collidable:areaobjects.Collidable, xCoord:Int, yCoord:Int):Void {
		objectArray.push(collidable);
		collidable.x = xCoord * tileSize;
		collidable.y = yCoord * tileSize;
		objectContainer.addChild(collidable);
	}
	
	public function resetLevel(player:actors.Player):Void {
		
		for (i in 0...objectArray.length) {
			objectArray[i].resetObject();
		}
		for (i in 0...actorArray.length) {
			actorArray[i].resetActor();
		}
		for (i in 0...sandwiches.length) {
			addObject(sandwiches[i], Math.round(sandwiches[i].originalLocation().x), Math.round(sandwiches[i].originalLocation().y));
		}
		player.x = roomStart.x * tileSize;
		player.y = roomStart.y * tileSize;
	}
	public function setLevel(player:actors.Player):Void {
		addActor(player, Math.round(roomStart.x), Math.round(roomStart.y));
	}
	
	public function getRoomWidth():Int { return roomWidth * tileSize; }
	public function getRoomHeight():Int { return roomHeight * tileSize; }
	
	private function addActor(newActor:actors.Actor, xCoord:Int, yCoord:Int )
	{
		newActor.x = xCoord * tileSize;
		newActor.y = yCoord * tileSize;
		actorArray.push(newActor);
		actorContainer.addChild(newActor);
		
		newActor.setRoom(this);
	}
	private function setGoal(goal:Goal, xCoord:Int, yCoord:Int):Void {
		roomGoal = goal;
		roomGoal.x = xCoord * tileSize;
		roomGoal.y = yCoord * tileSize;
		objectArray.push(roomGoal);
		objectContainer.addChild(roomGoal);
	}
	
	private function parseRoom(roomFile:Array<String>):Void {
		
		var xCoord:Int = 0;
		var yCoord:Int = 0;
		
		for (i in 0...roomFile.length) {
			
			if (roomFile[i].indexOf("layer name") >= 0)
				parseRoomDimension(roomFile[i].split(' '));
			else if (roomFile[i].indexOf("tile gid") >= 0) {
				
				parseTile(Std.parseInt(roomFile[i].split('"')[1]), xCoord, yCoord);
				xCoord += 1;
				if (xCoord > roomWidth - 1) {
					xCoord = 0;
					yCoord += 1;
				}
			}
		}
	}
	private function parseRoomDimension(parsedString:Array<String>):Void {
		
		for (k in 0...parsedString.length) {
			if (parsedString[k].indexOf("width=") >= 0)
				roomWidth = Std.parseInt(parsedString[k].split('"')[1]);
			if (parsedString[k].indexOf("height") >= 0)
				roomHeight = Std.parseInt(parsedString[k].split('"')[1]);
		}
		initializeTileArray(roomWidth, roomHeight);
	}
	private function initializeTileArray(width:Int, height:Int):Void {
		tileArray = new Array<Array<areaobjects.Tile>>();
		for (y in 0...height) {
			var row:Array<areaobjects.Tile> = [];
			for (x in 0...width) {
				row.push(null);
			}
			tileArray.push(row);
		}
	}
	
	private function parseTile(tileID:Int, xCoord:Int, yCoord:Int):Void {
		
		var temp:Int = (tileID-1) * tileSize;
		var y:Int = Math.floor( temp / tileSet.width);
		var x:Int = Math.floor((( temp % tileSet.width) / tileSize) );
		
		var frame:Rectangle = new Rectangle(x * tileSize, y * tileSize, tileSize, tileSize);
		var tileBmp:Bitmap = new Bitmap(new BitmapData(tileSize, tileSize));
		tileBmp.bitmapData.copyPixels(tileSet.bitmapData, frame, new Point());
		
		var newTile:areaobjects.Tile = new areaobjects.Tile(tileBmp, tileTypes[y][x]);
		addTile(newTile, xCoord, yCoord);
	}
	
	private function addTile(newTile:areaobjects.Tile, xCoord:Int, yCoord:Int):Void {
		tileArray[yCoord][xCoord] = newTile;
		newTile.x = xCoord * tileSize;
		newTile.y = yCoord * tileSize;
		tileContainer.addChild(newTile);
	}
	
	
	private function readDynamicObjects(fileArray:Array<String>):Void {
		
		for (i in 0...fileArray.length) {
			if (fileArray[i].indexOf("object id") >= 0)
				parseDynamicObject(fileArray, i);
		}
		
	}
	private function parseDynamicObject(fileArray:Array<String>, startIndex:Int):Void {
		
		var objectProperties:Map<String, String> = new Map<String,String>();
		var objectID:Int = parseObjectID(fileArray[startIndex]);
		var objectDimensions:Rectangle = parseObjectDimensions(fileArray[startIndex]);
		
		for (j in startIndex...fileArray.length) {
			if (fileArray[j].indexOf("/properties") >= 0) break;
			
			if (fileArray[j].indexOf("property name") >= 0)
				objectProperties = addObjectProperty(fileArray[j], objectProperties);
		}
		
		if (objectProperties["type"] == "Enemy")
			createEnemy(
				objectProperties["horizontal"] == "true", Std.parseInt(objectProperties["distance"]),
					Math.floor(objectDimensions.x / tileSize), Math.floor(objectDimensions.y / tileSize));
					
		else if (objectProperties["type"] == "Clue")
			addObject(
				new areaobjects.ClueObject(new Bitmap(Assets.getBitmapData("assets/" + objectProperties["sprite"])),
					Std.parseInt(objectProperties["size"]), objectProperties["sound"]),
					Math.floor(objectDimensions.x / tileSize), Math.floor(objectDimensions.y / tileSize));
					
		else if (objectProperties["type"] == "Switch")
			addObject(
				new areaobjects.SwitchObject(new Bitmap(Assets.getBitmapData("assets/" + objectProperties["sprite"])),
					Std.parseInt(objectProperties["size"])), Math.floor(objectDimensions.x / tileSize), Math.floor(objectDimensions.y / tileSize));
					
		else if (objectProperties["type"] == "Goal")
			setGoal(new Goal(), Math.round(objectDimensions.x / tileSize), Math.round(objectDimensions.y / tileSize));
			
		else if (objectProperties["type"] == "Start")
			roomStart = new Point(Math.round(objectDimensions.x / tileSize), Math.round(objectDimensions.y / tileSize));
			
		else if (objectProperties["type"] == "Sandwich") {
			var sandwich:areaobjects.SubwaySandwich = new areaobjects.SubwaySandwich(new Bitmap(Assets.getBitmapData
				("assets/Subway.png")), new Point(Math.round(objectDimensions.x / tileSize), Math.round(objectDimensions.y / tileSize)));
			addObject(sandwich, Math.round(objectDimensions.x / tileSize), Math.round(objectDimensions.y / tileSize));
			sandwiches.push(sandwich);
		}
		
		else if (objectProperties["type"] == "PaintArea") {
			var paintArea:PaintArea = new PaintArea(Math.round(objectDimensions.width), Math.round(objectDimensions.height),
													Std.parseInt(objectProperties["areaColor"]), Std.parseInt(objectProperties["paintColor"]));
			addObject(paintArea, Math.round(objectDimensions.x / tileSize), Math.round(objectDimensions.y / tileSize));	
		}
		
		else if (objectProperties["type"] == "SoundSource") {
			var stereo:Bool = false, positional:Bool = false;
			if (objectProperties["stereo"] == "True")
				stereo = true;
			if (objectProperties["positional"] == "True")
				positional = true;
			
			var soundSource:SoundSource = new SoundSource
				(objectProperties["sound"], new Bitmap(Assets.getBitmapData("assets/" + objectProperties["bitmap"])), 
				stereo, positional, Std.parseFloat(objectProperties["volume"]), Std.parseInt(objectProperties["radius"]));
			
			addObject(soundSource, Math.round(objectDimensions.x / tileSize), Math.round(objectDimensions.y / tileSize));
		}
	}
	private function parseObjectID(idLine:String):Int {
		var parsedLine:Array<String> = idLine.split(" ");
		var objectID:Int = 0;
		for (i in 0...parsedLine.length) {
			if (parsedLine[i].indexOf("gid") >= 0)
				objectID = Std.parseInt(parsedLine[i].split('"')[1]);
		}
		return objectID;
	}
	private function parseObjectDimensions(idLine:String):Rectangle {
		var parsedLine:Array<String> = idLine.split(" ");
		var objectX:Int = 0, objectY:Int = 0, objectWidth:Int = 0, objectHeight:Int = 0;
		
		for (i in 0...parsedLine.length) {
			if (parsedLine[i].indexOf("x") >= 0)
				objectX = Std.parseInt(parsedLine[i].split('"')[1]);
			if (parsedLine[i].indexOf("y") >= 0)
				objectY = Std.parseInt(parsedLine[i].split('"')[1]);
			if (parsedLine[i].indexOf("width") >= 0)
				objectWidth = Std.parseInt(parsedLine[i].split('"')[1]);
			if (parsedLine[i].indexOf("height") >= 0)
				objectHeight = Std.parseInt(parsedLine[i].split('"')[1]);
		}
		return new Rectangle(objectX, objectY - 1, objectWidth, objectHeight);
	}
	private function addObjectProperty(propertyLine:String, propertyMap:Map<String, String>):Map<String, String> {
		var parsedLine:Array<String> = propertyLine.split("=");
		var name:String = "";
		var value:String = "";
		for (i in 0...parsedLine.length) {
			if (parsedLine[i].indexOf("name") >= 0)
				name = parsedLine[i + 1].split('"')[1];
			
			if (parsedLine[i].indexOf("value") >= 0)
				value = parsedLine[i + 1].split('"')[1];
			else if (parsedLine[i].indexOf("</property>") >= 0)
				value = parsedLine[i].split('>')[1].split('<')[0];
		}
		propertyMap[name] = value;
		return propertyMap;
	}
	
}