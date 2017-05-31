package areaobjects;
import actors.Player;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Shape;
import openfl.geom.Point;
import openfl.geom.Rectangle;

/**
 * ...
 * @author Peltast
 */
class PaintArea extends Collidable
{

	private var areaColor:UInt;
	private var areaAlpha:Float;
	private var paintColor:UInt;
	private var paintAlpha:Float;
	private var palette:BitmapData;
	
	public function new(width:Int, height:Int, areaColor:UInt, paintColor:UInt, areaAlpha:Float = 1, paintAlpha:Float = 1) 
	{
		this.areaColor = areaColor;
		this.areaAlpha = areaAlpha;
		this.paintColor = paintColor;
		this.paintAlpha = paintAlpha;
		var areaBitmap:Bitmap = createArea(width, height);
		palette = createPalette(width, height);
		
		super(true, areaBitmap);
	}
	
	private function createArea(width:Int, height:Int):Bitmap {
		
		var area:Shape = new Shape();
		area.graphics.beginFill(areaColor, areaAlpha);
		area.graphics.drawRect(0, 0, width, height);
		area.graphics.endFill();
		
		var areaBmpData:BitmapData = new BitmapData(width, height);
		areaBmpData.draw(area);
		
		return new Bitmap(areaBmpData);
	}
	
	private function createPalette(width:Int, height:Int):BitmapData {
		
		var paletteShape:Shape = new Shape();
		paletteShape.graphics.beginFill(paintColor, paintAlpha);
		paletteShape.graphics.drawRect(0, 0, width, height);
		paletteShape.graphics.endFill();
		
		var paletteBmpData:BitmapData = new BitmapData(width, height);
		paletteBmpData.draw(paletteShape);
		
		return paletteBmpData;
	}
	
	public function paintCollider(player:Player):Void {
		
		if (!objectBitmap.hitTestObject(player)) return;
		
		objectBitmap.bitmapData.copyPixels
			(palette, new Rectangle(0, 0, player.bounds.width, player.bounds.height), 
			new Point((player.bounds.x + player.x) - this.x, (player.bounds.y + player.y) - this.y));
		
	}
	
}