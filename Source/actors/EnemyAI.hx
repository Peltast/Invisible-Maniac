package actors;
import actors.Actor;
import openfl.geom.Point;

/**
 * ...
 * @author Peltast
 */
class EnemyAI
{
	private var horizontal:Bool;
	private var distance:Int;
	private var startPoint:Point;
	
	public function new(horizontal:Bool, distance:Int, startPoint:Point) 
	{
		this.horizontal = horizontal;
		this.distance = distance;
		this.startPoint = startPoint;
	}
	
	public function updateAI(host:actors.Actor):Void {
		
		var distanceTraveled:Float;
		
		if (horizontal)
			distanceTraveled = Math.abs(host.x - startPoint.x);
		else
			distanceTraveled = Math.abs(host.y - startPoint.y);
		
		if (distanceTraveled >= distance) {
			switchDirections(host);
			startPoint = new Point(host.x, host.y);
		}
		
		if (horizontal && host.getXVel() == 0)
			switchDirections(host);
		else if (!horizontal && host.getYVel() == 0)
			switchDirections(host);
	}
	
	public function handleCollision(host:actors.Actor):Void {
		
		switchDirections(host);
	}
	
	private function switchDirections(host:actors.Actor):Void {
		
		if (horizontal) {
			if (host.getXVel() < 0) {
				host.stopLeft();
				host.goRight();
			}
			else {
				host.stopRight();
				host.goLeft();
			}
		}
		else {
			if (host.getYVel() < 0) {
				host.stopUp();
				host.goDown();
			}
			else {
				host.stopDown();
				host.goUp();
			}
		}
		
	}
	
}