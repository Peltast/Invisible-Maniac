#ifndef INCLUDED_openfl__internal_renderer_DrawCommandType
#define INCLUDED_openfl__internal_renderer_DrawCommandType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandType)
namespace openfl{
namespace _internal{
namespace renderer{


class DrawCommandType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef DrawCommandType_obj OBJ_;

	public:
		DrawCommandType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.renderer.DrawCommandType","\xe6","\x40","\xe3","\x94"); }
		::String __ToString() const { return HX_HCSTRING("DrawCommandType.","\x2d","\x29","\x07","\x6b") + tag; }

		static ::openfl::_internal::renderer::DrawCommandType BEGIN_BITMAP_FILL;
		static inline ::openfl::_internal::renderer::DrawCommandType BEGIN_BITMAP_FILL_dyn() { return BEGIN_BITMAP_FILL; }
		static ::openfl::_internal::renderer::DrawCommandType BEGIN_FILL;
		static inline ::openfl::_internal::renderer::DrawCommandType BEGIN_FILL_dyn() { return BEGIN_FILL; }
		static ::openfl::_internal::renderer::DrawCommandType BEGIN_GRADIENT_FILL;
		static inline ::openfl::_internal::renderer::DrawCommandType BEGIN_GRADIENT_FILL_dyn() { return BEGIN_GRADIENT_FILL; }
		static ::openfl::_internal::renderer::DrawCommandType CUBIC_CURVE_TO;
		static inline ::openfl::_internal::renderer::DrawCommandType CUBIC_CURVE_TO_dyn() { return CUBIC_CURVE_TO; }
		static ::openfl::_internal::renderer::DrawCommandType CURVE_TO;
		static inline ::openfl::_internal::renderer::DrawCommandType CURVE_TO_dyn() { return CURVE_TO; }
		static ::openfl::_internal::renderer::DrawCommandType DRAW_CIRCLE;
		static inline ::openfl::_internal::renderer::DrawCommandType DRAW_CIRCLE_dyn() { return DRAW_CIRCLE; }
		static ::openfl::_internal::renderer::DrawCommandType DRAW_ELLIPSE;
		static inline ::openfl::_internal::renderer::DrawCommandType DRAW_ELLIPSE_dyn() { return DRAW_ELLIPSE; }
		static ::openfl::_internal::renderer::DrawCommandType DRAW_PATH;
		static inline ::openfl::_internal::renderer::DrawCommandType DRAW_PATH_dyn() { return DRAW_PATH; }
		static ::openfl::_internal::renderer::DrawCommandType DRAW_RECT;
		static inline ::openfl::_internal::renderer::DrawCommandType DRAW_RECT_dyn() { return DRAW_RECT; }
		static ::openfl::_internal::renderer::DrawCommandType DRAW_ROUND_RECT;
		static inline ::openfl::_internal::renderer::DrawCommandType DRAW_ROUND_RECT_dyn() { return DRAW_ROUND_RECT; }
		static ::openfl::_internal::renderer::DrawCommandType DRAW_TILES;
		static inline ::openfl::_internal::renderer::DrawCommandType DRAW_TILES_dyn() { return DRAW_TILES; }
		static ::openfl::_internal::renderer::DrawCommandType DRAW_TRIANGLES;
		static inline ::openfl::_internal::renderer::DrawCommandType DRAW_TRIANGLES_dyn() { return DRAW_TRIANGLES; }
		static ::openfl::_internal::renderer::DrawCommandType END_FILL;
		static inline ::openfl::_internal::renderer::DrawCommandType END_FILL_dyn() { return END_FILL; }
		static ::openfl::_internal::renderer::DrawCommandType LINE_BITMAP_STYLE;
		static inline ::openfl::_internal::renderer::DrawCommandType LINE_BITMAP_STYLE_dyn() { return LINE_BITMAP_STYLE; }
		static ::openfl::_internal::renderer::DrawCommandType LINE_GRADIENT_STYLE;
		static inline ::openfl::_internal::renderer::DrawCommandType LINE_GRADIENT_STYLE_dyn() { return LINE_GRADIENT_STYLE; }
		static ::openfl::_internal::renderer::DrawCommandType LINE_STYLE;
		static inline ::openfl::_internal::renderer::DrawCommandType LINE_STYLE_dyn() { return LINE_STYLE; }
		static ::openfl::_internal::renderer::DrawCommandType LINE_TO;
		static inline ::openfl::_internal::renderer::DrawCommandType LINE_TO_dyn() { return LINE_TO; }
		static ::openfl::_internal::renderer::DrawCommandType MOVE_TO;
		static inline ::openfl::_internal::renderer::DrawCommandType MOVE_TO_dyn() { return MOVE_TO; }
		static ::openfl::_internal::renderer::DrawCommandType OVERRIDE_MATRIX;
		static inline ::openfl::_internal::renderer::DrawCommandType OVERRIDE_MATRIX_dyn() { return OVERRIDE_MATRIX; }
		static ::openfl::_internal::renderer::DrawCommandType UNKNOWN;
		static inline ::openfl::_internal::renderer::DrawCommandType UNKNOWN_dyn() { return UNKNOWN; }
};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer

#endif /* INCLUDED_openfl__internal_renderer_DrawCommandType */ 
