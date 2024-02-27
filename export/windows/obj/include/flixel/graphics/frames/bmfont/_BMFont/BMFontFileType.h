#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFont_BMFontFileType
#define INCLUDED_flixel_graphics_frames_bmfont__BMFont_BMFontFileType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(flixel,graphics,frames,bmfont,_BMFont,BMFontFileType)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{
namespace _BMFont{


class BMFontFileType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef BMFontFileType_obj OBJ_;

	public:
		BMFontFileType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.graphics.frames.bmfont._BMFont.BMFontFileType",a2,13,dd,40); }
		::String __ToString() const { return HX_("BMFontFileType.",7e,73,ba,cb) + _hx_tag; }

		static ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BINARY( ::haxe::io::Bytes bytes);
		static ::Dynamic BINARY_dyn();
		static ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType TEXT(::String text);
		static ::Dynamic TEXT_dyn();
		static ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType XML( ::Xml xml);
		static ::Dynamic XML_dyn();
};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
} // end namespace _BMFont

#endif /* INCLUDED_flixel_graphics_frames_bmfont__BMFont_BMFontFileType */ 