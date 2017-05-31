#if !macro


@:access(lime.app.Application)
@:access(lime.Assets)
@:access(openfl.display.Stage)


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	
	public static function create ():Void {
		
		var app = new openfl.display.Application ();
		app.create (config);
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		app.setPreloader (preloader);
		preloader.onComplete.add (init);
		preloader.create (config);
		
		#if (js && html5)
		var urls = [];
		var types = [];
		
		
		urls.push ("assets/Banana.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Bottle.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Brush.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/Enemy.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Fail.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/Footstep.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/GlassBreak.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/Grass.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Gravel.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/Grunt.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/Marker.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Metal.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/ObjSet.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Pfft.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/Player.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Poo.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Room1.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Room2.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Room3.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Room4.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Room4B.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Room5.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Room6.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Room7.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Room8.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Room9.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Scream.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/Smush.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		urls.push ("assets/Subway.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Test.tmx");
		types.push (lime.Assets.AssetType.TEXT);
		
		
		urls.push ("assets/Tileset.png");
		types.push (lime.Assets.AssetType.IMAGE);
		
		
		urls.push ("assets/Water.mp3");
		types.push (lime.Assets.AssetType.MUSIC);
		
		
		
		if (config.assetsPrefix != null) {
			
			for (i in 0...urls.length) {
				
				if (types[i] != lime.Assets.AssetType.FONT) {
					
					urls[i] = config.assetsPrefix + urls[i];
					
				}
				
			}
			
		}
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if (sys && !nodejs && !emscripten)
		Sys.exit (result);
		#end
		
	}
	
	
	public static function init ():Void {
		
		var loaded = 0;
		var total = 0;
		var library_onLoad = function (__) {
			
			loaded++;
			
			if (loaded == total) {
				
				start ();
				
			}
			
		}
		
		preloader = null;
		
		
		
		if (total == 0) {
			
			start ();
			
		}
		
	}
	
	
	public static function main () {
		
		config = {
			
			build: "363",
			company: "Company Name",
			file: "InvisibleManiac",
			fps: 60,
			name: "InvisibleManiac",
			orientation: "",
			packageName: "com.sample.invisiblemaniac",
			version: "1.0.0",
			windows: [
				
				{
					antialiasing: 0,
					background: 16777215,
					borderless: false,
					depthBuffer: false,
					display: 0,
					fullscreen: false,
					hardware: true,
					height: 0,
					parameters: "{}",
					resizable: true,
					stencilBuffer: true,
					title: "InvisibleManiac",
					vsync: false,
					width: 0,
					x: null,
					y: null
				},
			]
			
		};
		
		#if hxtelemetry
		var telemetry = new hxtelemetry.HxTelemetry.Config ();
		telemetry.allocations = true;
		telemetry.host = "localhost";
		telemetry.app_name = config.name;
		Reflect.setField (config, "telemetry", telemetry);
		#end
		
		#if (js && html5)
		#if (munit || utest)
		openfl.Lib.embed (null, 0, 0, "FFFFFF");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		var hasMain = false;
		var entryPoint = Type.resolveClass ("Main");
		
		for (methodName in Type.getClassFields (entryPoint)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		lime.Assets.initialize ();
		
		if (hasMain) {
			
			Reflect.callMethod (entryPoint, Reflect.field (entryPoint, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			/*if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}*/
			
		}
		
		#if !flash
		if (openfl.Lib.current.stage.window.fullscreen) {
			
			openfl.Lib.current.stage.dispatchEvent (new openfl.events.FullScreenEvent (openfl.events.FullScreenEvent.FULL_SCREEN, false, false, true, true));
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		#end
		
	}
	
	
	#if neko
	@:noCompletion @:dox(hide) public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					openfl.Lib.current.addChild (this);
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end