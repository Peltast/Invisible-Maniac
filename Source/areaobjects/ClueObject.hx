package areaobjects;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.geom.Point;
import openfl.geom.Rectangle;
import openfl.media.Sound;
import sound.SoundManager;

/**
 * ...
 * @author Peltast
 */
class ClueObject extends AnimatedCollidable
{
	private var triggered:Bool;
	private var triggerSound:String;
	
	public function new(bitmap:Bitmap, size:Int, sound:String = "") 
	{
		super(true, bitmap);
		bounds = new Rectangle(6, 6, size - 12, size - 12);
		
		if (sound != "")
			triggerSound = sound;
		addAnimation(new Animation("Idle", new Point(), [new Point()], size, size, -1, false));
		addAnimation(new Animation("Triggered", new Point(size), [new Point()], size, size, -1, false));
		
		changeAnimation("Idle");
		triggered = false;
	}
	
	public function updateClue(colliding:Bool):Void {
		if (colliding) 
			triggerClue();
	}
	
	public function triggerClue():Void {
		if (triggered) return;
		triggered = true;
		
		changeAnimation("Triggered");
		SoundManager.getSingleton().playSound(triggerSound);
	}
	
	override public function resetObject():Void 
	{
		changeAnimation("Idle");
		triggered = false;
	}
}