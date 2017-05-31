package areaobjects;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.media.Sound;
import sound.SoundManager;

/**
 * ...
 * @author Peltast
 */
class SwitchObject extends areaobjects.ClueObject
{
	
	public function new(bitmap:Bitmap, size:Int) 
	{
		super(bitmap, size, null);
		triggerSound = "Brush.mp3";
	}
	
	
	public override function updateClue(colliding:Bool):Void {
		if (colliding && !triggered) 
			triggerClue();
		else if (!colliding && triggered)
			triggerClue();
	}
	
	override public function triggerClue():Void 
	{
		triggered = !triggered;
		if (currentAnimation.getName() == "Triggered") {
			SoundManager.getSingleton().playSound(triggerSound);
			changeAnimation("Idle");
		}
		else if (currentAnimation.getName() == "Idle") {
			SoundManager.getSingleton().playSound(triggerSound);
			changeAnimation("Triggered");
		}
	}
	
}