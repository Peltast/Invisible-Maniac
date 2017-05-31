package areaobjects;
import areaobjects.AnimatedCollidable;
import openfl.display.Bitmap;
import openfl.geom.Point;

/**
 * ...
 * @author Peltast
 */
class SubwaySandwich extends areaobjects.AnimatedCollidable
{

	private var origin:Point;
	
	public function new(bitmap:Bitmap, origin:Point) 
	{
		super(true, bitmap);
		this.origin = origin;
		addAnimation(new areaobjects.Animation("Idle", new Point(), [new Point(), new Point(0, 1)], 32, 16, 10, true));
		changeAnimation("Idle");
	}
	
	public function updateSandwich():Void {
		updateAnimation();
	}
	
	public function originalLocation():Point {
		return origin;
	}
}