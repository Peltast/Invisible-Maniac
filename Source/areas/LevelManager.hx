package areas;
import actors.Player;
import areas.Room;
import openfl.display.Sprite;

/**
 * ...
 * @author Peltast
 */
class LevelManager extends Sprite
{
	private static var singleton:LevelManager;
	
	private var currentLevel:areas.Room;
	private var levelList:Array<areas.Room>;
	
	public static function getSingleton():LevelManager {
		if (singleton == null)
			singleton = new LevelManager();
		return singleton;
	}
	
	public function new() 
	{
		super();
		levelList = new Array<areas.Room>();
	}
	
	public function getCurrentLevel():areas.Room { return currentLevel; }
	
	public function addLevel(newRoom:areas.Room):Void {
		levelList.push(newRoom);
	}
	
	public function resetLevel(player:actors.Player):Void {
		currentLevel.resetLevel(player);
	}
	
	public function setLevel(startRoom:Int, player:actors.Player):Void {
		if (startRoom < 0 || startRoom > levelList.length - 1) return;
		
		currentLevel = levelList[startRoom];
		currentLevel.setLevel(player);
		player.setRoom(currentLevel);
		this.addChild(currentLevel);
	}
	public function goToNextLevel(oldRoom:areas.Room, player:actors.Player):Void {
		var nextRoom:areas.Room = getNextLevel(oldRoom);
		
		if (nextRoom != null) {
			this.removeChild(oldRoom);
			nextRoom.setLevel(player);
			player.setRoom(nextRoom);
			this.addChild(nextRoom);
			currentLevel = nextRoom;
		}
	}
	public function getNextLevel(oldRoom:areas.Room):areas.Room {
		var oldIndex:Int = levelList.indexOf(oldRoom);
		if (oldIndex < levelList.length - 1)
			return levelList[oldIndex + 1];
		return null;
	}
}