package areas;
import areaobjects.Collidable;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class Goal extends areaobjects.Collidable
{

	public function new() 
	{
		super(true, new Bitmap(Assets.getBitmapData("assets/Marker.png")));
		
	}
	
}