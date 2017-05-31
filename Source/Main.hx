package;


import actors.Player;
import areas.LevelManager;
import areas.Room;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.display.StageDisplayState;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;


class Main extends Sprite {
	
	private var testRoom:areas.Room;
	
	public static var singleton:Main;
	
	public var rootURL:String;
	private var player:actors.Player;
	private var levelManager:areas.LevelManager;
	
	public function new () {
		super ();
		singleton = this;
		
		rootURL = "../";
		
		this.scaleX = 2;
		this.scaleY = 2;
		this.stage.displayState = StageDisplayState.FULL_SCREEN_INTERACTIVE;
		
		var bg:Shape = new Shape();
		bg.graphics.beginFill(0x888888);
		bg.graphics.drawRect(0, 0, stage.stageWidth, stage.stageHeight);
		bg.graphics.endFill();
		this.addChild(bg);
		
		var tileTypes:Array < Array<Int>> = 
			[[1, 1, 1, -1, -1, -1, -1, -1],
			[1, 1, 1, 1, -1, -1, -1, -1],
			[2, 2, 2, 4, 4, 4, 1, -1],
			[2, 2, 2, 4, 4, 4, 1, -1],
			[2, 2, 2, 4, 4, 4, 1, -1],
			[3, 3, 3, 1, 1, 1, 1, -1],
			[3, 3, 3, 1, 1, 1, 1, -1],
			[3, 3, 3, 1, 1, 1, 1, -1]];
		
		player = new actors.Player();
		levelManager = areas.LevelManager.getSingleton();
		//levelManager.addLevel(new Room(Assets.getBytes("assets/Test.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room1.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room2.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room3.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room4.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room4B.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room5.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room6.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room7.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room8.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.addLevel(new areas.Room(Assets.getBytes("assets/Room9.tmx"), new Bitmap(Assets.getBitmapData("assets/Tileset.png")), tileTypes));
		levelManager.setLevel(0, player);
		
		this.addChild(levelManager);
		this.addEventListener(Event.ENTER_FRAME, updateGame);
	}
	
	public static function getSingleton():Main { return singleton; }
	
	public function updateGame(event:Event):Void {
		areas.LevelManager.getSingleton().getCurrentLevel().updateRoom();
	}
	
	
}