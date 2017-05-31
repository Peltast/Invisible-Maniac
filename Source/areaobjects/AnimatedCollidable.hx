package areaobjects;
import areaobjects.Collidable;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class AnimatedCollidable extends areaobjects.Collidable
{
	private var animationLibrary:Map<String, Animation>;
	private var currentAnimation:Animation;
	private var spriteSheet:Bitmap;
	
	public function new(passable:Bool, animBitmap:Bitmap)
	{
		super(passable, animBitmap);
		spriteSheet = animBitmap;
		
		animationLibrary = new Map<String, Animation>();
	}
	
	private function addAnimation(newAnimation:Animation):Void {
		animationLibrary[newAnimation.getName()] = newAnimation;
	}
	
	private function updateAnimation():Void {
		if (currentAnimation == null) return;
		
		currentAnimation.updateAnimation();
		removeBmp();
		addAnimationBmp(currentAnimation);	
	}
	private function setAnimation(animation:Animation):Void {
		currentAnimation = animation;
		updateAnimation();
	}
	
	public function changeAnimation(animationName:String):Void {
		if (animationLibrary[animationName] == null) return;
		
		setAnimation(animationLibrary[animationName]);
	}
	
	private function removeBmp():Void {
		if (this.contains(objectBitmap))
			removeChild(objectBitmap);
	}
	private function addAnimationBmp(animation:Animation):Void {
		
		objectBitmap = getAnimationBmp(currentAnimation, spriteSheet);
		this.addChild(objectBitmap);
	}
	private function getAnimationBmp(animation:Animation, bitmap:Bitmap):Bitmap {
		var frame:Rectangle = animation.getFrame();
		var animationBmp:Bitmap = new Bitmap(new BitmapData(animation.getAnimWidth(), animation.getAnimHeight()));
		animationBmp.bitmapData.copyPixels(bitmap.bitmapData, frame, new Point());	
		return animationBmp;
	}
	
}