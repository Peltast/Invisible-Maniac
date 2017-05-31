package areaobjects;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class Collidable extends Sprite
{
	private var objectBitmap:Bitmap;
	private var passable:Bool;
	private var bounds:Rectangle;
	
	private var tempObjectBounds:Rectangle;
	private var tempCollideBounds:Rectangle;
	private var thisCenter:Point;
	private var otherCenter:Point;
	
	public function new(passable:Bool, objBitmap:Bitmap) 
	{
		super();
		bounds = new Rectangle(0, 0, objBitmap.width, objBitmap.height);
		this.objectBitmap = objBitmap;
		this.passable = passable;
		
		if (objBitmap != null)
			this.addChild(objectBitmap);
	}
	
	public function getCollideBounds():Rectangle { 
		return new Rectangle(this.x + bounds.x, this.y + bounds.y, bounds.width, bounds.height); 
	}
	public function isPassable():Bool { return passable; }
	
	
	public function isColliding(otherObject:Collidable):Bool {
		
		tempObjectBounds = getCollideBounds();
		tempCollideBounds = otherObject.getCollideBounds();
		
		if (tempObjectBounds.intersects(tempCollideBounds))
			return true;
		else
			return false;
	}
	
	public function getCollisionDistance(otherCollidable:Collidable, xAxis:Bool):Int {
		
		tempObjectBounds = getCollideBounds();
		tempCollideBounds = otherCollidable.getCollideBounds();
		
		thisCenter = new Point(tempObjectBounds.x + tempObjectBounds.width / 2, tempObjectBounds.y + tempObjectBounds.height / 2);
		otherCenter = new Point(tempCollideBounds.x + tempCollideBounds.width / 2, tempCollideBounds.y + tempCollideBounds.height / 2);
		
		var distance:Float = 0;
		
		if (xAxis) {
			if (thisCenter.x - otherCenter.x >= 0)		// Find distance from left edge
				distance = tempObjectBounds.x - (tempCollideBounds.x + tempCollideBounds.width); 
			else if (thisCenter.x - otherCenter.x < 0)	// Find distance from right edge
				distance = (tempObjectBounds.x + tempObjectBounds.width) - tempCollideBounds.x;
		}
		else {
			if (thisCenter.y - otherCenter.y >= 0)		// Find distance from top edge
				distance = tempObjectBounds.y - (tempCollideBounds.y + tempCollideBounds.height); 
			else if (thisCenter.y - otherCenter.y < 0)	// Find distance from bottom edge
				distance = (tempObjectBounds.y + tempObjectBounds.height) - tempCollideBounds.y;
		}
		
		return Math.round(distance);
	}
	
	public function resetObject():Void { }
	
}