package actors;
import areaobjects.Animation;
import areaobjects.Collidable;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.media.Sound;

/**
 * ...
 * @author Peltast
 */
class Enemy extends actors.Actor
{
	
	private var enemyAI:EnemyAI;
	private var isDead:Bool;
	private var startLocation:Point;
	
	public function new(ai:EnemyAI) 
	{
		super(new Bitmap(Assets.getBitmapData("assets/Enemy.png")));
		bounds = new Rectangle(2, 20, 12, 12);
		
		actorWidth = 16;
		actorHeight = 32;
		
		addAnimation(new areaobjects.Animation
			("Left", new Point(), [new Point(), new Point(1), new Point(2), new Point(3)], actorWidth, actorHeight, 1, true));
		addAnimation(new areaobjects.Animation
			("Right", new Point(0, actorHeight), [new Point(), new Point(1), new Point(2), new Point(3)], actorWidth, actorHeight, 1, true));
		addAnimation(new areaobjects.Animation
			("Down", new Point(0, actorHeight * 2), [new Point(), new Point(1), new Point(2), new Point(3)], actorWidth, actorHeight, 1, true));
		addAnimation(new areaobjects.Animation
			("Up", new Point(0, actorHeight * 3), [new Point(), new Point(1), new Point(2), new Point(3)], actorWidth, actorHeight, 1, true));
		addAnimation(new areaobjects.Animation
			("Death", new Point(0, actorHeight * 4), [new Point(), new Point(1)], 32, 16, 1, true));
		
		changeAnimation("Down");
		
		this.enemyAI = ai;
		maxSpeed = 1;
	}
	
	override public function updateActor():Void 
	{
		super.updateActor();
		
		if (startLocation == null)
			startLocation = new Point(this.x, this.y);
		if (isDead) return;
		
		enemyAI.updateAI(this);
	}
	
	private override function moveX():Void {
		this.x += Math.round(xVel);
		
		var collisions:Array<areaobjects.Collidable> = currentRoom.getActorCollisions(this);
		var largestDistance:Int = getCollisionLargestDistance(collisions, true);
		
		if (largestDistance != 0) {	
			this.x -= largestDistance;
			enemyAI.handleCollision(this);
			
			checkPlayerContact(collisions);
		}
	}
	private override function moveY():Void {
		this.y += Math.round(yVel);
		
		var collisions:Array<areaobjects.Collidable> = currentRoom.getActorCollisions(this);
		var largestDistance:Int = getCollisionLargestDistance(collisions, false);
		
		if (largestDistance != 0) {
			this.y -= largestDistance;
			enemyAI.handleCollision(this);
			
			checkPlayerContact(collisions);
		}
	}
	
	private function checkPlayerContact(collisions:Array<areaobjects.Collidable>):Void {
		if (isDead) return;
		for (i in 0...collisions.length) {
			if (Std.is(collisions[i], Player)) {
				var player:Player = cast(collisions[i]);
				player.lose(this);
			}
		}
	}
	
	override public function goLeft():Void 
	{
		super.goLeft();
		changeAnimation("Left");
	}
	override public function goRight():Void 
	{
		super.goRight();
		changeAnimation("Right");
	}
	override public function goUp():Void 
	{
		super.goUp();
		changeAnimation("Up");
	}
	override public function goDown():Void 
	{
		super.goDown();
		changeAnimation("Down");
	}
	
	public function killEnemy():Void {
		var scream:Sound = Assets.getSound("assets/Scream.mp3");
		scream.play();
		
		changeAnimation("Death");
		isDead = true;
		stopAll();
		freeze();
	}
	public function isEnemyDead():Bool {
		return isDead;
	}
	
	override public function resetActor():Void 
	{
		super.resetActor();
		isDead = false;
		changeAnimation("Down");
		this.freeze();
		this.x = startLocation.x;
		this.y = startLocation.y;
		enemyAI.updateAI(this);
	}
}