package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		path.set ("assets/Banana.png", "assets/Banana.png");
		type.set ("assets/Banana.png", AssetType.IMAGE);
		path.set ("assets/Bottle.png", "assets/Bottle.png");
		type.set ("assets/Bottle.png", AssetType.IMAGE);
		path.set ("assets/Brush.mp3", "assets/Brush.mp3");
		type.set ("assets/Brush.mp3", AssetType.MUSIC);
		path.set ("assets/Enemy.png", "assets/Enemy.png");
		type.set ("assets/Enemy.png", AssetType.IMAGE);
		path.set ("assets/Fail.mp3", "assets/Fail.mp3");
		type.set ("assets/Fail.mp3", AssetType.MUSIC);
		path.set ("assets/Footstep.mp3", "assets/Footstep.mp3");
		type.set ("assets/Footstep.mp3", AssetType.MUSIC);
		path.set ("assets/GlassBreak.mp3", "assets/GlassBreak.mp3");
		type.set ("assets/GlassBreak.mp3", AssetType.MUSIC);
		path.set ("assets/Grass.png", "assets/Grass.png");
		type.set ("assets/Grass.png", AssetType.IMAGE);
		path.set ("assets/Gravel.mp3", "assets/Gravel.mp3");
		type.set ("assets/Gravel.mp3", AssetType.MUSIC);
		path.set ("assets/Grunt.mp3", "assets/Grunt.mp3");
		type.set ("assets/Grunt.mp3", AssetType.MUSIC);
		path.set ("assets/Marker.png", "assets/Marker.png");
		type.set ("assets/Marker.png", AssetType.IMAGE);
		path.set ("assets/Metal.mp3", "assets/Metal.mp3");
		type.set ("assets/Metal.mp3", AssetType.MUSIC);
		path.set ("assets/ObjSet.png", "assets/ObjSet.png");
		type.set ("assets/ObjSet.png", AssetType.IMAGE);
		path.set ("assets/Pfft.mp3", "assets/Pfft.mp3");
		type.set ("assets/Pfft.mp3", AssetType.MUSIC);
		path.set ("assets/Player.png", "assets/Player.png");
		type.set ("assets/Player.png", AssetType.IMAGE);
		path.set ("assets/Poo.png", "assets/Poo.png");
		type.set ("assets/Poo.png", AssetType.IMAGE);
		path.set ("assets/Room1.tmx", "assets/Room1.tmx");
		type.set ("assets/Room1.tmx", AssetType.TEXT);
		path.set ("assets/Room2.tmx", "assets/Room2.tmx");
		type.set ("assets/Room2.tmx", AssetType.TEXT);
		path.set ("assets/Room3.tmx", "assets/Room3.tmx");
		type.set ("assets/Room3.tmx", AssetType.TEXT);
		path.set ("assets/Room4.tmx", "assets/Room4.tmx");
		type.set ("assets/Room4.tmx", AssetType.TEXT);
		path.set ("assets/Room4B.tmx", "assets/Room4B.tmx");
		type.set ("assets/Room4B.tmx", AssetType.TEXT);
		path.set ("assets/Room5.tmx", "assets/Room5.tmx");
		type.set ("assets/Room5.tmx", AssetType.TEXT);
		path.set ("assets/Room6.tmx", "assets/Room6.tmx");
		type.set ("assets/Room6.tmx", AssetType.TEXT);
		path.set ("assets/Room7.tmx", "assets/Room7.tmx");
		type.set ("assets/Room7.tmx", AssetType.TEXT);
		path.set ("assets/Room8.tmx", "assets/Room8.tmx");
		type.set ("assets/Room8.tmx", AssetType.TEXT);
		path.set ("assets/Room9.tmx", "assets/Room9.tmx");
		type.set ("assets/Room9.tmx", AssetType.TEXT);
		path.set ("assets/Scream.mp3", "assets/Scream.mp3");
		type.set ("assets/Scream.mp3", AssetType.MUSIC);
		path.set ("assets/Smush.mp3", "assets/Smush.mp3");
		type.set ("assets/Smush.mp3", AssetType.MUSIC);
		path.set ("assets/Subway.png", "assets/Subway.png");
		type.set ("assets/Subway.png", AssetType.IMAGE);
		path.set ("assets/Test.tmx", "assets/Test.tmx");
		type.set ("assets/Test.tmx", AssetType.TEXT);
		path.set ("assets/Tileset.png", "assets/Tileset.png");
		type.set ("assets/Tileset.png", AssetType.IMAGE);
		path.set ("assets/Water.mp3", "assets/Water.mp3");
		type.set ("assets/Water.mp3", AssetType.MUSIC);
		
		
		#elseif html5
		
		var id;
		id = "assets/Banana.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Bottle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Brush.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/Enemy.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Fail.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/Footstep.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/GlassBreak.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/Grass.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Gravel.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/Grunt.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/Marker.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Metal.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/ObjSet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Pfft.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/Player.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Poo.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Room1.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Room2.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Room3.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Room4.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Room4B.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Room5.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Room6.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Room7.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Room8.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Room9.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Scream.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/Smush.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/Subway.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Test.tmx";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/Tileset.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/Water.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<ByteArray> {
		
		var promise = new Promise<ByteArray> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, e) {
				
				promise.error (e);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<ByteArray> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id);
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, msg) promise.error (msg));
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.readUTFBytes (bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash



































#elseif html5



































#else



#if (windows || mac || linux || cpp)





#end
#end

#if (openfl && !flash)

#end

#end