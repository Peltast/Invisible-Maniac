package sound;
import openfl.events.Event;
import openfl.media.Sound;
import openfl.media.SoundChannel;
import openfl.media.SoundTransform;

/**
 * ...
 * @author Peltast
 */
class SoundInstance
{

	private var soundName:String;
	private var soundFile:Sound;
	
	private var channel:SoundChannel;
	private var transform:SoundTransform;
	private var position:Int;
	private var playing:Bool;
	private var paused:Bool;
	
	private var currentVolume:Float;
	private var endVolume:Float;
	private var volumeDelta:Float;
	
	public function new(soundName:String, sound:Sound, volume:Float, loop:Bool)
	{
		this.soundName = soundName;
		this.soundFile = sound;
		this.channel = sound.play();
		this.transform = new SoundTransform(volume);
		
		this.currentVolume = volume;
		this.endVolume = -1;
		this.position = -1;
		this.playing = true;
		this.paused = false;
		
		if (this.channel == null) return;
		
		this.channel.soundTransform = transform;
		if (loop)
			channel.addEventListener(Event.SOUND_COMPLETE, playAgain);
		else
			channel.addEventListener(Event.SOUND_COMPLETE, endTrack);
	}
	
	public function getVolume():Float { return currentVolume; }
	public function getSoundName():String { return soundName; }
	public function isFadingOut():Bool { return (endVolume == 0); }
	public function isPlaying():Bool { 
		
		if (position >= Math.floor(soundFile.length))
			playing = false;
		return playing; 
	}
	
	public function changeVolume(newVolume:Float):Void {
		setVolume(newVolume);
	}
	public function changePanning(newPan:Float):Void {
		setPan(newPan); 
	}
	
	public function stopSound():Void {
		if (this.channel == null) return;
		
		channel.stop();
		playing = false;
		if (channel.hasEventListener(Event.SOUND_COMPLETE))
			channel.removeEventListener(Event.SOUND_COMPLETE, playAgain);
		if (endVolume >= 0)
			Main.getSingleton().removeEventListener(Event.ENTER_FRAME, changeTrackVolume);
	}
	public function pauseSound():Void {
		if (this.channel == null) return;
		
		paused = true;
		position = Math.round(channel.position);
		channel.stop();
	}
	public function resumeSound():Void {
		if (this.channel == null) return;
		if(!paused) return;
		
		paused = false;
		channel = soundFile.play(position, 0);
		channel.soundTransform = transform;
	}
	
	public function fadeSound(endVolume:Float, delta:Float):Void {
		if (this.channel == null) return;
		
		if (this.endVolume >= 0) {
			Main.getSingleton().removeEventListener(Event.ENTER_FRAME, changeTrackVolume);
			channel.stop();
		}
		this.endVolume = SoundManager.getSingleton().findFinalVolume(soundName, endVolume);
		this.volumeDelta = delta;
		Main.getSingleton().addEventListener(Event.ENTER_FRAME, changeTrackVolume);
	}
	
	private function playAgain(soundEvent:Event):Void {
		if (this.channel == null) return;
		
		channel.removeEventListener(Event.SOUND_COMPLETE, playAgain);
		channel = soundFile.play();
		channel.addEventListener(Event.SOUND_COMPLETE, playAgain);
		
		channel.soundTransform = transform;
	}
	
	private function changeTrackVolume(event:Event):Void {
		
		if ( (transform.volume < endVolume && volumeDelta > 0) || (transform.volume > 0 && volumeDelta < 0)) {
			var changedVolume:Float = currentVolume + volumeDelta;
			var finalVolume:Float = SoundManager.getSingleton().findFinalVolume(soundName, changedVolume);
			setVolume(finalVolume);
			currentVolume = changedVolume;
		}
		else {
			Main.getSingleton().removeEventListener(Event.ENTER_FRAME, changeTrackVolume);
			endVolume = -1;
			
			if (volumeDelta < 0) {
				stopSound();
				playing = false;
			}
		}
	}
	
	private function setVolume(newVolume:Float):Void {
		if (this.channel == null) return;
		
		transform = new SoundTransform(newVolume);
		channel.soundTransform = transform;
	}
	private function setPan(newPan:Float):Void {
		if (this.channel == null) return;
		
		transform = new SoundTransform(channel.soundTransform.volume, newPan);
		channel.soundTransform = transform;
	}
	
	private function endTrack(soundEvent:Event):Void {
		
		stopSound();
		playing = false;
	}
	
}