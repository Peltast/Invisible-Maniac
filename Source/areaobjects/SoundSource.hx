package areaobjects;
import actors.Player;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import sound.*;

/**
 * ...
 * @author Peltast
 */
class SoundSource extends Collidable
{
	
	private var sound:String;
	private var bitmap:Bitmap;
	private var soundInst:SoundInstance;
	private var stereo:Bool;
	private var positional:Bool;
	private var baseVolume:Float;
	private var radius:Int;
	
	public function new(sound:String, bitmap:Bitmap, stereo:Bool = true, positional:Bool = true, baseVolume:Float = 1, radius:Int = -1) 
	{
		super(true, bitmap);
		
		this.sound = sound;
		this.stereo = stereo;
		this.positional = positional;
		this.baseVolume = baseVolume;
		this.radius = radius;
		
		soundInst = new SoundInstance
			(sound, Assets.getSound("assets/" + sound), SoundManager.getSingleton().findFinalVolume(sound, baseVolume), true);
	}
	
	public function updateSound(player:Player):Void {
		
		if (positional)
			updatePlayerVolume(player);
		if (stereo)
			updatePlayerPanning(player);
		
	}
	
	private function updatePlayerVolume(player:Player):Void {
		
		var manhattanDist:Int = Math.round(Math.abs(player.x - this.x) + Math.abs(player.y - this.y));
		
		if (manhattanDist == 0 || radius < 0) {
			soundInst.changeVolume(baseVolume);
		}
		else if (manhattanDist >= radius) {
			soundInst.changeVolume(0);
		}
		else {
			var volumePercent:Float = (1 - manhattanDist / radius);
			volumePercent = Math.round(volumePercent * 100) / 100; 
			
			if (volumePercent > baseVolume)
				volumePercent = baseVolume;
			
			//trace(manhattanDist + " , " + volumePercent);
			soundInst.changeVolume(volumePercent);
		}
		
	}
	
	private function updatePlayerPanning(player:Player):Void {
		
		var horizontalDist:Int = Math.round(player.x - this.x);
		var newPan:Float;
		
		if (radius <= 0)
			newPan = -horizontalDist / 100;
		else
			newPan = -(1.5 * horizontalDist) / radius;
		if (newPan < -1)
			newPan = -1;
		else if (newPan > 1)
			newPan = 1;
		
		soundInst.changePanning(newPan);
		
	}
	
}