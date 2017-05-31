package areaobjects;
import openfl.errors.Error;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class Animation
{
	
	private var animationName:String;
	private var animationFrames:Array<Rectangle>;
	private var animationWidth:Int;
	private var animationHeight:Int;
	private var animationSpeed:Int;
	private var currentFrame:Rectangle;
	private var loop:Bool;
	
	private var tickCount:Int;
	
	public function new(name:String, startPoint:Point, frames:Array<Point>, width:Int, height:Int, speed:Int, loop:Bool ) 
	{
		animationName = name;
		animationWidth = width;
		animationHeight = height;
		animationSpeed = speed;
		this.loop = loop;
		
		animationFrames = new Array<Rectangle>();
		for (i in 0...frames.length) {
			
			animationFrames.push(
				new Rectangle(startPoint.x + (frames[i].x * animationWidth), startPoint.y + (frames[i].y * animationHeight),
				animationWidth, animationHeight));
		}
		
		tickCount = 0;
	}
	
	public function updateAnimation():Rectangle {
		if (currentFrame == null) {
			currentFrame = animationFrames[0];
			return currentFrame;
		}
		if (animationSpeed < 0) return currentFrame;
		
		tickCount++;
		if (tickCount > animationSpeed) {
			tickCount = 0;
			for (i in 0...animationFrames.length) {
				if (currentFrame == animationFrames[i]) {
					// If this is the last frame in the array, go back to the beginning.
					if (animationFrames.length - 1 == i) {
						
						if (loop)
							currentFrame = animationFrames[0];
						
					}
					// Otherwise, move to the next.
					else currentFrame = animationFrames[i + 1];
					return currentFrame;
				}
			}
			
			throw new Error("Somehow, the animation's current frame isn't contained in its array of frames.");
		}
		
		return currentFrame;
	}
	
	public function getFrame():Rectangle { return currentFrame; }
	public function getName():String { return animationName; }
	
	public function getAnimWidth():Int { return animationWidth; }
	public function getAnimHeight():Int { return animationHeight; }
	
}