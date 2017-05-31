package areaobjects;
import areaobjects.Collidable;
import flash.display.Bitmap;
import flash.display.Sprite;
import openfl.Assets;
import openfl.geom.Rectangle;
import openfl.media.Sound;
import sound.SoundManager;

/**
 * ...
 * @author Peltast
 */
class Tile extends areaobjects.Collidable
{
	
	private var tileType:Int;
	private var tileSound:String;
	
	public function new(tileBmp:Bitmap, tileType:Int) 
	{
		super(tileType > 0, tileBmp);
		this.bounds = new Rectangle(0, 0, tileBmp.width, tileBmp.height);
		
		
		switch(tileType) {
			case 1:
				tileSound = "Footstep.mp3";
			case 2:
				tileSound = "Water.mp3";
			case 3:
				tileSound = "Gravel.mp3";
			case 4:
				tileSound = "Metal.mp3";
		}
		
		this.tileType = tileType;
	}
	
	public function getType():Int { return tileType; }
	public function getSound():String { return tileSound; }
	
}