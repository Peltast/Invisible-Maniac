package actors;
import actors.Actor;
import actors.Enemy;
import areaobjects.Collidable;
import areaobjects.SubwaySandwich;
import areas.Goal;
import areas.LevelManager;
import areas.Room;
import areaobjects.Tile;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.events.KeyboardEvent;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.media.Sound;
import openfl.ui.Keyboard;
import sound.SoundManager;

/**
 * ...
 * @author Peltast
 */
class Player extends actors.Actor
{

	private var obstacleSound:String;
	private var soundCount:Int;
	private var tileSoundFreq:Int;
	private var lastSoundLocation:Point;
	private var lastSoundTime:Int;
	
	private var hasSubwaySandwich:Bool;
	private var sandwich:areaobjects.SubwaySandwich;
	
	public function new() 
	{
		super(new Bitmap(Assets.getBitmapData("assets/Player.png")));
		
		bounds = new Rectangle(2, 20, 12, 12);
		Main.getSingleton().stage.addEventListener(KeyboardEvent.KEY_DOWN, keyDown);
		Main.getSingleton().stage.addEventListener(KeyboardEvent.KEY_UP, keyUp);
		
		hasSubwaySandwich = false;
		obstacleSound = "Grunt.mp3";
		soundCount = 0;
		tileSoundFreq = 12;
		lastSoundLocation = new Point();
		lastSoundTime = 0;
		
		//this.objectBitmap.alpha = 0;
		
		maxSpeed = 2;
	}
	
	override public function updateActor():Void 
	{
		//checkPlayerInteractions();
		if (objectBitmap.alpha > 0 && fadeout) {
			objectBitmap.alpha = objectBitmap.alpha - .01;
		}
		
		if (soundCount > 0)
			soundCount -= 1;
		if (lastSoundTime > 0)
			lastSoundTime -= 1;
		
		super.updateActor();
		
		if (sandwich != null) {
			if (this.contains(sandwich))
				sandwich.updateSandwich();
		}
		
		centerScreen();
	}
	
	private function centerScreen():Void {
		
			var screenWidth:Float = Main.getSingleton().stage.stageWidth;
			var screenHeight:Float = Main.getSingleton().stage.stageHeight;
			var scale:Float = Main.getSingleton().scaleX;
			//screenHeight = screenHeight / scale;
			//screenWidth = screenWidth / scale;
			
			
			var mapWidth:Int = currentRoom.getRoomWidth();
			var mapHeight:Int = currentRoom.getRoomHeight();
			mapWidth = Math.round(mapWidth * scale);
			mapHeight = Math.round(mapHeight * scale);
			
			// If the map is narrower than the screen, just center X-axis around the map.
			if (mapWidth < screenWidth)
				currentRoom.x = (screenWidth / 2 - (mapWidth) / 2) / scale;
			
			else {
				// Otherwise, center it around the player.
				currentRoom.x = (screenWidth / (2 * scale)) - (this.x + this.actorWidth / 2);
				
				if (currentRoom.x > 0)	// Don't go beyond the map's left border.
					currentRoom.x = 0;
				else if (this.x + screenWidth / 2 > mapWidth)  // And don't go beyond the map's right border.
					currentRoom.x = screenWidth - mapWidth;
			}
			
			// If the map is shorter than the screen, just center Y-axis around the map.
			if (mapHeight < screenHeight)
				currentRoom.y = ((screenHeight ) / 2 - mapHeight / 2) / scale;
			
			else {
				// Otherwise, center it around the player.
				currentRoom.y = (screenHeight / (2 * scale)) - (this.y + this.actorHeight / 2);
				
				if (currentRoom.y > 0)	// Don't go beyond the map's top border.
					currentRoom.y = 0;
				else if (this.y + screenHeight / 2 > mapHeight)	// And don't go beyond the map's lower border.
					currentRoom.y = screenHeight - mapHeight;
				
			}
		
	}
	
	
	override public function setRoom(homeRoom:areas.Room):Void 
	{
		super.setRoom(homeRoom);
		objectBitmap.alpha = 1;
	}
	
	private override function moveX():Void {
		this.x += Math.round(xVel);
		
		var collisions:Array<areaobjects.Collidable> = currentRoom.getActorCollisions(this);
		var largestDistance:Int = getCollisionLargestDistance(collisions, true);
		
		if (largestDistance != 0) {
			playObstacleSound();
			this.x -= largestDistance;
		}
	}
	private override function moveY():Void {
		this.y += Math.round(yVel);
		
		var collisions:Array<areaobjects.Collidable> = currentRoom.getActorCollisions(this);
		var largestDistance:Int = getCollisionLargestDistance(collisions, false);
		
		if (largestDistance != 0) {
			playObstacleSound();
			this.y -= largestDistance;
		}
		playTileSound();
		checkPlayerInteractions(collisions);
	}
	
	private function playTileSound():Void {
		var collisions:Array<areaobjects.Tile> = currentRoom.getActorTiles(this);
		for (i in 0...collisions.length) {
			if (collisions[i].getSound() != null && (getDistanceFromLastTileSound() > tileSoundFreq || (lastSoundTime == 0 && isMoving()))) {
				
				SoundManager.getSingleton().playSound(collisions[i].getSound());
				lastSoundLocation = new Point(this.x, this.y);
				lastSoundTime = 30;
				return;
			}
		}
	}
	private function getDistanceFromLastTileSound():Int {
		var yDiff:Float = Math.abs(this.y - lastSoundLocation.y);
		var xDiff:Float = Math.abs(this.x - lastSoundLocation.x);
		return Math.round(yDiff + xDiff);
	}
	
	private function playObstacleSound():Void {
		if (soundCount <= 0) {
			soundCount = 20;
			SoundManager.getSingleton().playSound(obstacleSound);
		}
	}
	
	
	private function checkPlayerInteractions(collisions:Array<areaobjects.Collidable>):Void {
	//	var collisions:Array<Collidable> = currentRoom.getActorCollisions(this);
		
		for (i in 0...collisions.length) {
			if (Std.is(collisions[i], actors.Enemy)) {
				lose(cast(collisions[i]));
			}
			else if (Std.is(collisions[i], areas.Goal)) {
				areas.LevelManager.getSingleton().goToNextLevel(currentRoom, this);
				dropSandwich();
			}
			else if (Std.is(collisions[i], areaobjects.SubwaySandwich)) {
				if (hasSubwaySandwich) return;
				pickUpSandwich(cast(collisions[i]));
			}
		}
		
		currentRoom.updateObjects(this);
	}
	
	public function keyDown(key:KeyboardEvent):Void {
		
		if (key.keyCode == Keyboard.W || key.keyCode == Keyboard.UP)
			goUp();
		if (key.keyCode == Keyboard.A || key.keyCode == Keyboard.LEFT)
			goLeft();
		if (key.keyCode == Keyboard.S || key.keyCode == Keyboard.DOWN)
			goDown();
		if (key.keyCode == Keyboard.D || key.keyCode == Keyboard.RIGHT)
			goRight();
	}
	public function keyUp(key:KeyboardEvent):Void {
		
		if (key.keyCode == Keyboard.W || key.keyCode == Keyboard.UP)
			stopUp();
		if (key.keyCode == Keyboard.S || key.keyCode == Keyboard.DOWN)
			stopDown();
		if (key.keyCode == Keyboard.A || key.keyCode == Keyboard.LEFT)
			stopLeft();
		if (key.keyCode == Keyboard.D || key.keyCode == Keyboard.RIGHT)
			stopRight();
	}
	
	public function pickUpSandwich(sandwich:areaobjects.SubwaySandwich):Void {
		sandwich.x = 0;
		sandwich.y = 0;
		this.addChild(sandwich);
		hasSubwaySandwich = true;
		this.sandwich = sandwich;
	}
	public function dropSandwich():Void {
		if (sandwich == null) return;
		
		if (this.contains(sandwich))
			this.removeChild(sandwich);
		sandwich = null;
		hasSubwaySandwich = false;
	}
	
	private var fadeout:Bool = true;
	public function lose(enemy:actors.Enemy):Void {
		if (enemy.isEnemyDead())
			return;
		else if (hasSubwaySandwich) {
			enemy.killEnemy();
			dropSandwich();
		}
		else {	
			this.objectBitmap.alpha = 1;
			fadeout = false;
			stopAll();
			SoundManager.getSingleton().playSound("Fail.mp3");
			Main.getSingleton().stage.removeEventListener(KeyboardEvent.KEY_DOWN, keyDown);
			Main.getSingleton().stage.removeEventListener(KeyboardEvent.KEY_UP, keyUp);
			Main.getSingleton().stage.addEventListener(KeyboardEvent.KEY_DOWN, reset);
		}
	}
	
	public function reset(key:KeyboardEvent):Void {
		if (key.keyCode == Keyboard.SPACE || key.keyCode == Keyboard.R) {
			fadeout = true;
			areas.LevelManager.getSingleton().resetLevel(this);
			Main.getSingleton().stage.addEventListener(KeyboardEvent.KEY_DOWN, keyDown);
			Main.getSingleton().stage.addEventListener(KeyboardEvent.KEY_UP, keyUp);
			Main.getSingleton().stage.removeEventListener(KeyboardEvent.KEY_DOWN, reset);
		}
	}
}