package sound;
import openfl.Assets;
import openfl.media.Sound;
import openfl.net.URLRequest;

/**
 * ...
 * @author Peltast
 */
class SoundManager
{

	private static var singleton:SoundManager;
	
	private var muted:Bool;
	
	private var soundDictionary:Map<String, Sound>;
	private var musicDictionary:Map<String, Sound>;
	// Dictionary of all existing sounds.  Keys are sound names (string), values are Sound instances.
	
	private var soundInstances:Array<SoundInstance>;
	
	private var masterVolume:Float;
	private var masterPreMute:Float;
	private var baseSoundVolume:Float;
	private var baseMusicVolume:Float;
	
	private var fadeInTrack:Tuple;
	private var fadeOutTrack:Tuple;
	
	public static function getSingleton():SoundManager {
		if (singleton == null)
			singleton = new SoundManager();
		return singleton;
	}
	
	public function new() 
	{	// Do NOT call directly!
		
		soundDictionary = new Map<String, Sound>();
		musicDictionary = new Map<String, Sound>();
		
		soundInstances = new Array<SoundInstance>();
		initiateVolumes();
		
	 /*	var gameConfig:SaveFile = SaveManager.getSingleton().getGameConfig();
		if (gameConfig.loadData("soundInit") == null)
			initiateVolumes();
		else
			loadVolumes();
		*/	
		initiateEmbeddedSoundFiles();
		loadAllSoundFiles();
		
		muted = false;
		var root:String = Main.getSingleton().rootURL;
	}
	
	private function initiateEmbeddedSoundFiles():Void {
		
		initEmbeddedSound("Brush.mp3");
		initEmbeddedSound("Gravel.mp3");
		initEmbeddedSound("Metal.mp3");
		initEmbeddedSound("Water.mp3");
		initEmbeddedSound("Footstep.mp3");
		
		initEmbeddedSound("GlassBreak.mp3");
		initEmbeddedSound("Pfft.mp3");
		initEmbeddedSound("Smush.mp3");
		
		initEmbeddedSound("Fail.mp3");
		initEmbeddedSound("Scream.mp3");
		initEmbeddedSound("Grunt.mp3");
		
		initEmbeddedSound("Beat.mp3");
	}
	private function initEmbeddedSound(name:String):Void {
		soundDictionary[name] = Assets.getSound("assets/" + name);
	}
	
	private function loadAllSoundFiles():Void {
		//loadSound("Intro Boom", "/Sounds/Boom Edit.mp3", soundDictionary);
		
	}
	
	private function initiateVolumes():Void {
		
		masterVolume = 1;
		masterPreMute = 1;
		baseMusicVolume = 1;
		baseSoundVolume = 1;
	}
	/*private function loadVolumes():void {
		
		var gameConfig:SaveFile = SaveManager.getSingleton().getGameConfig();
		
		mainMenuTheme = gameConfig.loadData("MainTheme") + "";
		masterVolume = parseFloat(gameConfig.loadData("MasterVolume") + "");
		masterPreMute = masterVolume;
		baseMusicVolume = parseFloat(gameConfig.loadData("BaseMusicVolume") + "");
		baseSoundVolume = parseFloat(gameConfig.loadData("BaseSoundVolume") + "");
	}
	public function saveVolumes(configFile:SaveFile):void 
	{	
		configFile.saveData("MainTheme", mainMenuTheme);
		configFile.saveData("MasterVolume", masterVolume);
		configFile.saveData("BaseMusicVolume", baseMusicVolume);
		configFile.saveData("BaseSoundVolume", baseSoundVolume);
		configFile.saveData("soundInit", 1);
	}*/
	
	private function loadSound(soundTitle:String, soundURL:String, dictionary:Map<String, Sound>):Void {			
		var newSound:Sound = new Sound();
		var soundURLRequest:URLRequest = new URLRequest(soundURL);
		newSound.load(soundURLRequest);
		dictionary[soundTitle] = newSound;
	}
	
	public function getMasterVolume():Float { return masterVolume; }
	public function getMusicVolume():Float { return baseMusicVolume; }
	public function getSoundVolume():Float { return baseSoundVolume; }
	
	public function changeMasterVolume(delta:Float):Void {
		delta = (Math.round(delta * 100)) / 100;
		masterVolume += delta;
		if (masterVolume > 1) masterVolume = 1;
		if (masterVolume < 0) masterVolume = 0;
		
		masterPreMute = masterVolume;
		updateAllChannelVolumes();
	}
	public function changeMusicVolume(delta:Float):Void {
		delta = (Math.round(delta * 100)) / 100;
		baseMusicVolume += delta;
		if (baseMusicVolume > 1) baseMusicVolume = 1;
		if (baseMusicVolume < 0) baseMusicVolume = 0;
		
		updateAllChannelVolumes();
	}
	public function changeSoundVolume(delta:Float):Void {
		delta = (Math.round(delta * 100)) / 100;
		baseSoundVolume += delta;
		if (baseSoundVolume > 1) baseSoundVolume = 1;
		if (baseSoundVolume < 0) baseSoundVolume = 0;
		
		updateAllChannelVolumes();
	}
	
	private function checkFinishedSounds():Void {
		// TODO: Change how sound instances are stored so they can be removed or manipulated more efficiently.
		// Almost certainly need to store them using a Map.
		
		var removeSounds:Array<SoundInstance> = [];
		
		for (i in 0...soundInstances.length) {
			if (!soundInstances[i].isPlaying()) {
				soundInstances[i].stopSound();
				removeSounds.push(soundInstances[i]);
			}
		}
		// This is very inefficient.  It would take a lot of sounds running at the same time to impact performance,
		// but it's still very very poor form.  Will have to rework.
		for (j in 0...removeSounds.length) {
			for (k in 0...soundInstances.length) {
				if (removeSounds[j] == soundInstances[k]) {
					soundInstances.splice(k, 1);
					break;
				}
			}
		}
	}
	public function isPlayingSound(soundName:String):Bool {
		checkFinishedSounds();
		
		for (i in 0...soundInstances.length) {
			if (soundInstances[i].getSoundName() == soundName) return true;
		}
		return false;
	}
	public function isPlayingSoundConstant(soundName:String):Bool {
		checkFinishedSounds();
		
		for (i in 0...soundInstances.length) {
			if (soundInstances[i].getSoundName() == soundName) {
				return !soundInstances[i].isFadingOut();
			}
		}
		return false;
	}
	
	public function muteSound():Void {
		muted = true;
		masterPreMute = masterVolume;
		masterVolume = 0;
		
		for (i in 0...soundInstances.length) {
			soundInstances[i].changeVolume(0);
		}
	}
	public function unMuteSound(channelChange:Bool = true):Void {
		muted = false;
		masterVolume = masterPreMute;
		
		if (channelChange)
			changeAllChannelVolumes(1);
	}
	
	
	
	private function updateAllChannelVolumes():Void {
		for (i in 0...soundInstances.length) {
			var originalVolume:Float = soundInstances[i].getVolume();
			var finalVolume:Float = findFinalVolume(soundInstances[i].getSoundName(), originalVolume);
			soundInstances[i].changeVolume(finalVolume);
		}
		//SaveManager.getSingleton().saveGameConfig();
	}
	private function changeAllChannelVolumes(newVolume:Float):Void {
		for (i in 0...soundInstances.length) {
			var finalVolume:Float = findFinalVolume(soundInstances[i].getSoundName(), newVolume);
			soundInstances[i].changeVolume(finalVolume);
		}
		//SaveManager.getSingleton().saveGameConfig();
	}
	public function findFinalVolume(soundName:String, endVolume:Float):Float {
		var finalVolume:Float;
		var scaledMasterVol:Float = (Math.round(Math.pow(masterVolume, 2) * 1000)) / 1000;
		var scaledSoundVol:Float = (Math.round(Math.pow(baseSoundVolume, 1.1) * 1000)) / 1000;
		var scaledMusicVol:Float = (Math.round(Math.pow(baseMusicVolume, 1.1) * 1000)) / 1000;
		
		if (soundDictionary[soundName] != null) finalVolume = endVolume * scaledSoundVol;
		else if (musicDictionary[soundName] != null) finalVolume = endVolume * scaledMusicVol;
		else finalVolume = endVolume;
		
		finalVolume = (Math.round(finalVolume * scaledMasterVol * 1000)) / 1000;
		
		return finalVolume;
	}
	
	private function findSound(soundName:String):Sound {
		if (soundDictionary[soundName] != null) return soundDictionary[soundName];
		else if (musicDictionary[soundName] != null) return musicDictionary[soundName];
		return null;
	}
	
	public function playSound(soundName:String, volume:Float = 1, loop:Bool = false):Void {
		if (findSound(soundName) == null) return;
		checkFinishedSounds();
		
		//if (isPlayingSound(soundName) && loop) return;
		
		if (volume > 1) volume = 1;
		var finalVolume:Float = findFinalVolume(soundName, volume);
		
		var soundInstance:SoundInstance = new SoundInstance(soundName, findSound(soundName), finalVolume, loop);
		soundInstances.push(soundInstance);
	}
	public function fadeInSound(soundName:String, startVolume:Float, endVolume:Float, delta:Float, loop:Bool):Void {
		if (findSound(soundName) == null) return;
		checkFinishedSounds();
		
		//if (isPlayingSound(soundName) && loop) return;
		if (endVolume > 1) endVolume = 1;
		var finalVolume:Float = findFinalVolume(soundName, startVolume);
		
		var sound:SoundInstance = new SoundInstance(soundName, findSound(soundName), startVolume, loop);
		soundInstances.push(sound);
		sound.fadeSound(endVolume, delta);
	}
	public function fadeOutSound(soundName:String, delta:Float):Void {
		if (findSound(soundName) == null) return;
		
		for (i in 0...soundInstances.length) {
			if (soundInstances[i].getSoundName() == soundName)
				soundInstances[i].fadeSound(0, -delta);
		}
	}
	public function fadeOutAllSounds(delta:Float):Void {
		
		for (i in 0...soundInstances.length)
			soundInstances[i].fadeSound(0, -delta);
	}
	
	public function stopAllSounds():Void {
		
		for (i in 0...soundInstances.length)
			soundInstances[i].stopSound();
	}
	public function stopSound(soundName:String):Void {
		if (findSound(soundName) == null) return;
		
		for (i in 0...soundInstances.length) {
			if (soundInstances[i].getSoundName() == soundName)
				soundInstances[i].stopSound();
		}
	}
	public function clearAllSounds():Void {
		
		stopAllSounds();
		soundInstances = new Array<SoundInstance>();
	}
	
	public function pauseAllSounds():Void {
		
		for (i in 0...soundInstances.length)
			soundInstances[i].pauseSound();
	}
	public function resumeAllSounds():Void {
		
		for (i in 0...soundInstances.length)
			soundInstances[i].resumeSound();
	}
	public function pauseSound(soundName:String):Void {
		if (findSound(soundName) == null) return;
		
		for (i in 0...soundInstances.length) {
			if (soundInstances[i].getSoundName() == soundName)
				soundInstances[i].pauseSound();
		}
	}
	public function resumeSound(soundName:String):Void {
		if (findSound(soundName) == null) return;
		
		for (i in 0...soundInstances.length) {
			if (soundInstances[i].getSoundName() == soundName)
				soundInstances[i].resumeSound();
		}
	}
	
}