package actors;
import areaobjects.AnimatedCollidable;
import areaobjects.Collidable;
import areas.Room;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class Actor extends areaobjects.AnimatedCollidable
{
	
	private var yVel:Float;
	private var xVel:Float;
	private var maxSpeed:Int;
	private var acc:Float;
	private var targetXVel:Int;
	private var targetYVel:Int;
	
	private var actorBmp:Bitmap;
	private var actorWidth:Int;
	private var actorHeight:Int;
	
	private var currentRoom:areas.Room;
	
	public function new(actorBmp:Bitmap) 
	{
		super(false, actorBmp);
		
		actorWidth = 16;
		actorHeight = 16;
		
		bounds = new Rectangle(2, 2, actorWidth - 4, actorHeight - 4);
		
		yVel = 0;
		xVel = 0;
		targetXVel = 0;
		targetYVel = 0;
		maxSpeed = 3;
		acc = .5;
		
	}
	
	public function updateActor():Void {
		
		updateSpeed();
		updatePosition();
		updateAnimation();
	}
	
	public function setRoom(homeRoom:areas.Room):Void {
		currentRoom = homeRoom;
	}
	public function getCurrentRoom():areas.Room { return currentRoom; }
	
	private function updateSpeed():Void {
		
		xVel = targetXVel * acc + (1 - acc) * xVel;
		if (xVel > maxSpeed)
			xVel = maxSpeed;
		else if (xVel < -maxSpeed)
			xVel = -maxSpeed;
		
		yVel = targetYVel * acc + (1 - acc) * yVel;
		if (yVel > maxSpeed)
			yVel = maxSpeed;
		else if (yVel < -maxSpeed)
			yVel = -maxSpeed;
		
	}
	
	private function updatePosition():Void {
		if (currentRoom == null) return;
		moveX();
		moveY();		
	}
	private function moveX():Void {
		this.x += Math.round(xVel);
		
		var collisions:Array<areaobjects.Collidable> = currentRoom.getActorCollisions(this);
		var largestDistance:Int = getCollisionLargestDistance(collisions, true);
		
		if (largestDistance != 0)
			this.x -= largestDistance;
	}
	private function moveY():Void {
		this.y += Math.round(yVel);
		
		var collisions:Array<areaobjects.Collidable> = currentRoom.getActorCollisions(this);
		var largestDistance:Int = getCollisionLargestDistance(collisions, false);
		
		if (largestDistance != 0)
			this.y -= largestDistance;
	}
	private function getCollisionLargestDistance(collisionList:Array<areaobjects.Collidable>, xAxis:Bool):Int {
		var largestDistance:Int = 0;
		var largestIndex:Int = -1;
		var tempDistance:Int;
		
		for (i in 0...collisionList.length) {
			if (collisionList[i].isPassable()) continue;
			
			tempDistance = getCollisionDistance(collisionList[i], xAxis);
			if (Math.abs(tempDistance) > Math.abs(largestDistance)) {
				largestDistance = tempDistance;
				largestIndex = i;
			}
		}
		
		return largestDistance;
	}
	
	public function getXVel():Float { return xVel; }
	public function getYVel():Float { return yVel; }
	
	public function goUp():Void {
		targetYVel = -maxSpeed;
	}
	public function goDown():Void {
		targetYVel = maxSpeed;
	}
	public function goLeft():Void {
		targetXVel = -maxSpeed;
	}
	public function goRight():Void {
		targetXVel = maxSpeed;
	}
	
	public function stopUp():Void {
		if (targetYVel < 0)
			targetYVel = 0;
	}
	public function stopDown():Void {
		if (targetYVel > 0)
			targetYVel = 0;
	}
	public function stopLeft():Void {
		if (targetXVel < 0)
			targetXVel = 0;
	}
	public function stopRight():Void {
		if (targetXVel > 0)
			targetXVel = 0;
	}
	
	public function stopAll():Void {
		targetXVel = 0;
		targetYVel = 0;
	}
	public function freeze():Void {
		xVel = 0;
		yVel = 0;
	}
	public function isMoving():Bool {
		if (Math.abs(xVel) > 0.01 || Math.abs(yVel) > 0.01) return true;
		return false;
	}
	
	public function resetActor():Void { }
	
}