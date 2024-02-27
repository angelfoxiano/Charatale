#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED__UnicodeString_UnicodeString_Impl_
#include <_UnicodeString/UnicodeString_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxAtlas
#include <flixel/graphics/atlas/FlxAtlas.h>
#endif
#ifndef INCLUDED_flixel_graphics_atlas_FlxNode
#include <flixel/graphics/atlas/FlxNode.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextFormatMarkerPair
#include <flixel/text/FlxTextFormatMarkerPair.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7d9cf70d988be490_45_new,"flixel.text.FlxText","new",0x8fca03a2,"flixel.text.FlxText.new","flixel/text/FlxText.hx",45,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_251_destroy,"flixel.text.FlxText","destroy",0x1704293c,"flixel.text.FlxText.destroy","flixel/text/FlxText.hx",251,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_261_drawFrame,"flixel.text.FlxText","drawFrame",0xd9b5be4b,"flixel.text.FlxText.drawFrame","flixel/text/FlxText.hx",261,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_275_stampOnAtlas,"flixel.text.FlxText","stampOnAtlas",0x66244e67,"flixel.text.FlxText.stampOnAtlas","flixel/text/FlxText.hx",275,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_314_applyMarkup,"flixel.text.FlxText","applyMarkup",0x660988f8,"flixel.text.FlxText.applyMarkup","flixel/text/FlxText.hx",314,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_428_addFormat,"flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",428,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_423_addFormat,"flixel.text.FlxText","addFormat",0xc0d9d4fa,"flixel.text.FlxText.addFormat","flixel/text/FlxText.hx",423,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_440_removeFormat,"flixel.text.FlxText","removeFormat",0xa79a7f19,"flixel.text.FlxText.removeFormat","flixel/text/FlxText.hx",440,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_486_clearFormats,"flixel.text.FlxText","clearFormats",0xf58bc7cd,"flixel.text.FlxText.clearFormats","flixel/text/FlxText.hx",486,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_507_setFormat,"flixel.text.FlxText","setFormat",0x685d153b,"flixel.text.FlxText.setFormat","flixel/text/FlxText.hx",507,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_539_setBorderStyle,"flixel.text.FlxText","setBorderStyle",0x26cf9c21,"flixel.text.FlxText.setBorderStyle","flixel/text/FlxText.hx",539,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_549_updateHitbox,"flixel.text.FlxText","updateHitbox",0x91c9e8ff,"flixel.text.FlxText.updateHitbox","flixel/text/FlxText.hx",549,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_555_getScreenBounds,"flixel.text.FlxText","getScreenBounds",0xa33cf2f9,"flixel.text.FlxText.getScreenBounds","flixel/text/FlxText.hx",555,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_561_set_fieldWidth,"flixel.text.FlxText","set_fieldWidth",0x9c758fa7,"flixel.text.FlxText.set_fieldWidth","flixel/text/FlxText.hx",561,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_585_get_fieldWidth,"flixel.text.FlxText","get_fieldWidth",0x7c55a733,"flixel.text.FlxText.get_fieldWidth","flixel/text/FlxText.hx",585,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_590_get_fieldHeight,"flixel.text.FlxText","get_fieldHeight",0x04ec1e1a,"flixel.text.FlxText.get_fieldHeight","flixel/text/FlxText.hx",590,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_594_set_fieldHeight,"flixel.text.FlxText","set_fieldHeight",0x00b79b26,"flixel.text.FlxText.set_fieldHeight","flixel/text/FlxText.hx",594,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_612_set_autoSize,"flixel.text.FlxText","set_autoSize",0x346abbcb,"flixel.text.FlxText.set_autoSize","flixel/text/FlxText.hx",612,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_624_get_autoSize,"flixel.text.FlxText","get_autoSize",0x1f719857,"flixel.text.FlxText.get_autoSize","flixel/text/FlxText.hx",624,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_628_set_text,"flixel.text.FlxText","set_text",0xb6d09f28,"flixel.text.FlxText.set_text","flixel/text/FlxText.hx",628,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_641_get_size,"flixel.text.FlxText","get_size",0x07cd19c8,"flixel.text.FlxText.get_size","flixel/text/FlxText.hx",641,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_645_set_size,"flixel.text.FlxText","set_size",0xb62a733c,"flixel.text.FlxText.set_size","flixel/text/FlxText.hx",645,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_653_get_letterSpacing,"flixel.text.FlxText","get_letterSpacing",0xf71c6556,"flixel.text.FlxText.get_letterSpacing","flixel/text/FlxText.hx",653,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_657_set_letterSpacing,"flixel.text.FlxText","set_letterSpacing",0x1a8a3d62,"flixel.text.FlxText.set_letterSpacing","flixel/text/FlxText.hx",657,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_664_set_color,"flixel.text.FlxText","set_color",0x7c7dca88,"flixel.text.FlxText.set_color","flixel/text/FlxText.hx",664,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_677_get_font,"flixel.text.FlxText","get_font",0xff39d6d6,"flixel.text.FlxText.get_font","flixel/text/FlxText.hx",677,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_681_set_font,"flixel.text.FlxText","set_font",0xad97304a,"flixel.text.FlxText.set_font","flixel/text/FlxText.hx",681,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_705_get_embedded,"flixel.text.FlxText","get_embedded",0xce5a2211,"flixel.text.FlxText.get_embedded","flixel/text/FlxText.hx",705,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_710_get_systemFont,"flixel.text.FlxText","get_systemFont",0xd6b43ca5,"flixel.text.FlxText.get_systemFont","flixel/text/FlxText.hx",710,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_714_set_systemFont,"flixel.text.FlxText","set_systemFont",0xf6d42519,"flixel.text.FlxText.set_systemFont","flixel/text/FlxText.hx",714,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_723_get_bold,"flixel.text.FlxText","get_bold",0xfc94fa8c,"flixel.text.FlxText.get_bold","flixel/text/FlxText.hx",723,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_727_set_bold,"flixel.text.FlxText","set_bold",0xaaf25400,"flixel.text.FlxText.set_bold","flixel/text/FlxText.hx",727,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_738_get_italic,"flixel.text.FlxText","get_italic",0xadf337b7,"flixel.text.FlxText.get_italic","flixel/text/FlxText.hx",738,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_742_set_italic,"flixel.text.FlxText","set_italic",0xb170d62b,"flixel.text.FlxText.set_italic","flixel/text/FlxText.hx",742,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_753_get_underline,"flixel.text.FlxText","get_underline",0x90e082a5,"flixel.text.FlxText.get_underline","flixel/text/FlxText.hx",753,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_757_set_underline,"flixel.text.FlxText","set_underline",0xd5e664b1,"flixel.text.FlxText.set_underline","flixel/text/FlxText.hx",757,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_768_get_wordWrap,"flixel.text.FlxText","get_wordWrap",0xf0d31d3b,"flixel.text.FlxText.get_wordWrap","flixel/text/FlxText.hx",768,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_772_set_wordWrap,"flixel.text.FlxText","set_wordWrap",0x05cc40af,"flixel.text.FlxText.set_wordWrap","flixel/text/FlxText.hx",772,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_783_get_alignment,"flixel.text.FlxText","get_alignment",0xf34d507c,"flixel.text.FlxText.get_alignment","flixel/text/FlxText.hx",783,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_787_set_alignment,"flixel.text.FlxText","set_alignment",0x38533288,"flixel.text.FlxText.set_alignment","flixel/text/FlxText.hx",787,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_794_set_borderStyle,"flixel.text.FlxText","set_borderStyle",0x0a5ab38a,"flixel.text.FlxText.set_borderStyle","flixel/text/FlxText.hx",794,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_802_set_borderColor,"flixel.text.FlxText","set_borderColor",0xd0997fbc,"flixel.text.FlxText.set_borderColor","flixel/text/FlxText.hx",802,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_810_set_borderSize,"flixel.text.FlxText","set_borderSize",0x0b7e6088,"flixel.text.FlxText.set_borderSize","flixel/text/FlxText.hx",810,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_818_set_borderQuality,"flixel.text.FlxText","set_borderQuality",0x9eac1b58,"flixel.text.FlxText.set_borderQuality","flixel/text/FlxText.hx",818,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_827_set_graphic,"flixel.text.FlxText","set_graphic",0x740d070d,"flixel.text.FlxText.set_graphic","flixel/text/FlxText.hx",827,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_835_get_width,"flixel.text.FlxText","get_width",0x1933231f,"flixel.text.FlxText.get_width","flixel/text/FlxText.hx",835,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_841_get_height,"flixel.text.FlxText","get_height",0xa9db10ae,"flixel.text.FlxText.get_height","flixel/text/FlxText.hx",841,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_847_updateColorTransform,"flixel.text.FlxText","updateColorTransform",0x81f611f0,"flixel.text.FlxText.updateColorTransform","flixel/text/FlxText.hx",847,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_866_regenGraphic,"flixel.text.FlxText","regenGraphic",0xc617a9e9,"flixel.text.FlxText.regenGraphic","flixel/text/FlxText.hx",866,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_942_drawTextFieldTo,"flixel.text.FlxText","drawTextFieldTo",0xda5cac46,"flixel.text.FlxText.drawTextFieldTo","flixel/text/FlxText.hx",942,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_998_draw,"flixel.text.FlxText","draw",0x3a66d282,"flixel.text.FlxText.draw","flixel/text/FlxText.hx",998,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1009_calcFrame,"flixel.text.FlxText","calcFrame",0x04b3a41a,"flixel.text.FlxText.calcFrame","flixel/text/FlxText.hx",1009,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1021_applyBorderStyle,"flixel.text.FlxText","applyBorderStyle",0x7fb82955,"flixel.text.FlxText.applyBorderStyle","flixel/text/FlxText.hx",1021,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1087_applyBorderTransparency,"flixel.text.FlxText","applyBorderTransparency",0x59c1b674,"flixel.text.FlxText.applyBorderTransparency","flixel/text/FlxText.hx",1087,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1103_copyTextWithOffset,"flixel.text.FlxText","copyTextWithOffset",0x8b535ed9,"flixel.text.FlxText.copyTextWithOffset","flixel/text/FlxText.hx",1103,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1110_applyFormats,"flixel.text.FlxText","applyFormats",0x597a620c,"flixel.text.FlxText.applyFormats","flixel/text/FlxText.hx",1110,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1136_copyTextFormat,"flixel.text.FlxText","copyTextFormat",0xce0953d7,"flixel.text.FlxText.copyTextFormat","flixel/text/FlxText.hx",1136,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1154_dtfCopy,"flixel.text.FlxText","dtfCopy",0x79c34ded,"flixel.text.FlxText.dtfCopy","flixel/text/FlxText.hx",1154,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1160_updateDefaultFormat,"flixel.text.FlxText","updateDefaultFormat",0x3cb6b251,"flixel.text.FlxText.updateDefaultFormat","flixel/text/FlxText.hx",1160,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_1167_set_frames,"flixel.text.FlxText","set_frames",0x579256e1,"flixel.text.FlxText.set_frames","flixel/text/FlxText.hx",1167,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_7d9cf70d988be490_50_boot,"flixel.text.FlxText","boot",0x39122ab0,"flixel.text.FlxText.boot","flixel/text/FlxText.hx",50,0xdf165a6e)
namespace flixel{
namespace text{

void FlxText_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float FieldWidth = __o_FieldWidth.Default(0);
            		int Size = __o_Size.Default(8);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_45_new)
HXLINE( 188)		this->_hasBorderAlpha = false;
HXLINE( 179)		this->_regen = true;
HXLINE( 173)		this->_formatRanges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 163)		this->_autoHeight = true;
HXLINE( 132)		this->borderQuality = ((Float)1);
HXLINE( 125)		this->borderSize = ((Float)1);
HXLINE( 120)		this->borderColor = 0;
HXLINE( 115)		this->borderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
HXLINE(  55)		this->text = HX_("",00,00,00,00);
HXLINE( 210)		super::__construct(X,Y,null());
HXLINE( 212)		bool _hx_tmp;
HXDLIN( 212)		if (::hx::IsNotNull( Text )) {
HXLINE( 212)			_hx_tmp = (Text == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 212)			_hx_tmp = true;
            		}
HXDLIN( 212)		if (_hx_tmp) {
HXLINE( 216)			this->set_text(HX_("",00,00,00,00));
HXLINE( 217)			Text = HX_(" ",20,00,00,00);
            		}
            		else {
HXLINE( 221)			this->set_text(Text);
            		}
HXLINE( 224)		this->textField =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXLINE( 225)		this->textField->set_selectable(false);
HXLINE( 226)		this->textField->set_multiline(true);
HXLINE( 227)		this->textField->set_wordWrap(true);
HXLINE( 228)		this->_defaultFormat =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),Size,16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 229)		this->set_letterSpacing(( (Float)(0) ));
HXLINE( 230)		this->set_font(::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT);
HXLINE( 231)		this->_formatAdjusted =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
HXLINE( 232)		this->textField->set_defaultTextFormat(this->_defaultFormat);
HXLINE( 233)		this->textField->set_text(Text);
HXLINE( 234)		this->set_fieldWidth(FieldWidth);
HXLINE( 235)		this->textField->set_embedFonts(EmbeddedFont);
HXLINE( 236)		this->textField->set_sharpness(( (Float)(100) ));
HXLINE( 237)		Float _hx_tmp1;
HXDLIN( 237)		if ((Text.length <= 0)) {
HXLINE( 237)			_hx_tmp1 = ( (Float)(1) );
            		}
            		else {
HXLINE( 237)			_hx_tmp1 = ( (Float)(10) );
            		}
HXDLIN( 237)		this->textField->set_height(_hx_tmp1);
HXLINE( 239)		this->set_allowCollisions(0);
HXLINE( 240)		this->set_moves(false);
HXLINE( 242)		this->drawFrame(null());
HXLINE( 244)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(1,1);
HXDLIN( 244)		point->_inPool = false;
HXDLIN( 244)		this->shadowOffset = point;
            	}

Dynamic FlxText_obj::__CreateEmpty() { return new FlxText_obj; }

void *FlxText_obj::_hx_vtable = 0;

Dynamic FlxText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxText_obj > _hx_result = new FlxText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxText_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_251_destroy)
HXLINE( 252)		this->textField = null();
HXLINE( 253)		this->_font = null();
HXLINE( 254)		this->_defaultFormat = null();
HXLINE( 255)		this->_formatAdjusted = null();
HXLINE( 256)		this->shadowOffset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->shadowOffset)) );
HXLINE( 257)		this->super::destroy();
            	}


void FlxText_obj::drawFrame(::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_261_drawFrame)
HXLINE( 262)		bool _hx_tmp;
HXDLIN( 262)		if (!(this->_regen)) {
HXLINE( 262)			_hx_tmp = Force;
            		}
            		else {
HXLINE( 262)			_hx_tmp = true;
            		}
HXDLIN( 262)		this->_regen = _hx_tmp;
HXLINE( 263)		this->super::drawFrame(this->_regen);
            	}


bool FlxText_obj::stampOnAtlas( ::flixel::graphics::atlas::FlxAtlas atlas){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_275_stampOnAtlas)
HXLINE( 276)		this->regenGraphic();
HXLINE( 278)		 ::flixel::graphics::atlas::FlxNode node = atlas->addNode(this->graphic->bitmap,this->graphic->key);
HXLINE( 279)		bool result = ::hx::IsNotNull( node );
HXLINE( 281)		if (::hx::IsNotNull( node )) {
HXLINE( 283)			this->set_frames(node->getImageFrame());
            		}
HXLINE( 286)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,stampOnAtlas,return )

 ::flixel::text::FlxText FlxText_obj::applyMarkup(::String input,::Array< ::Dynamic> rules){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_314_applyMarkup)
HXLINE( 315)		bool _hx_tmp;
HXDLIN( 315)		if (::hx::IsNotNull( rules )) {
HXLINE( 315)			_hx_tmp = (rules->length == 0);
            		}
            		else {
HXLINE( 315)			_hx_tmp = true;
            		}
HXDLIN( 315)		if (_hx_tmp) {
HXLINE( 316)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 318)		this->clearFormats();
HXLINE( 320)		::Array< int > rangeStarts = ::Array_obj< int >::__new(0);
HXLINE( 321)		::Array< int > rangeEnds = ::Array_obj< int >::__new(0);
HXLINE( 322)		::Array< ::Dynamic> rulesToApply = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 324)		int i = 0;
HXLINE( 325)		{
HXLINE( 325)			int _g = 0;
HXDLIN( 325)			while((_g < rules->length)){
HXLINE( 325)				 ::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >();
HXDLIN( 325)				_g = (_g + 1);
HXLINE( 327)				bool _hx_tmp;
HXDLIN( 327)				if (::hx::IsNotNull( rule->marker )) {
HXLINE( 327)					_hx_tmp = ::hx::IsNull( rule->format );
            				}
            				else {
HXLINE( 327)					_hx_tmp = true;
            				}
HXDLIN( 327)				if (_hx_tmp) {
HXLINE( 328)					continue;
            				}
HXLINE( 330)				bool start = false;
HXLINE( 331)				int markerLength = ::_UnicodeString::UnicodeString_Impl__obj::get_length(rule->marker);
HXLINE( 333)				if ((input.indexOf(rule->marker,null()) == -1)) {
HXLINE( 334)					continue;
            				}
HXLINE( 337)				{
HXLINE( 337)					int _g1 = 0;
HXDLIN( 337)					int _g2 = ::_UnicodeString::UnicodeString_Impl__obj::get_length(input);
HXDLIN( 337)					while((_g1 < _g2)){
HXLINE( 337)						_g1 = (_g1 + 1);
HXDLIN( 337)						int charIndex = (_g1 - 1);
HXLINE( 339)						::String a = ::_UnicodeString::UnicodeString_Impl__obj::substr(input,charIndex,markerLength);
HXDLIN( 339)						if ((a != rule->marker)) {
HXLINE( 340)							continue;
            						}
HXLINE( 342)						if (start) {
HXLINE( 344)							start = false;
HXLINE( 345)							rangeEnds->push(charIndex);
            						}
            						else {
HXLINE( 349)							start = true;
HXLINE( 350)							rangeStarts->push(charIndex);
HXLINE( 351)							rulesToApply->push(rule);
            						}
            					}
            				}
HXLINE( 355)				if (start) {
HXLINE( 358)					rangeEnds->push(-1);
            				}
HXLINE( 361)				i = (i + 1);
            			}
            		}
HXLINE( 365)		{
HXLINE( 365)			int _g1 = 0;
HXDLIN( 365)			while((_g1 < rules->length)){
HXLINE( 365)				 ::flixel::text::FlxTextFormatMarkerPair rule = rules->__get(_g1).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >();
HXDLIN( 365)				_g1 = (_g1 + 1);
HXLINE( 366)				input = ::StringTools_obj::replace(input,rule->marker,HX_("",00,00,00,00));
            			}
            		}
HXLINE( 369)		{
HXLINE( 369)			int _g2 = 0;
HXDLIN( 369)			int _g3 = rangeStarts->length;
HXDLIN( 369)			while((_g2 < _g3)){
HXLINE( 369)				_g2 = (_g2 + 1);
HXDLIN( 369)				int i = (_g2 - 1);
HXLINE( 372)				int delIndex = rangeStarts->__get(i);
HXLINE( 373)				int markerLength = ::_UnicodeString::UnicodeString_Impl__obj::get_length(rulesToApply->__get(i).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >()->marker);
HXLINE( 376)				{
HXLINE( 376)					int _g = 0;
HXDLIN( 376)					int _g1 = rangeStarts->length;
HXDLIN( 376)					while((_g < _g1)){
HXLINE( 376)						_g = (_g + 1);
HXDLIN( 376)						int j = (_g - 1);
HXLINE( 378)						if ((rangeStarts->__get(j) > delIndex)) {
HXLINE( 380)							::Array< int > rangeStarts1 = rangeStarts;
HXDLIN( 380)							int j1 = j;
HXDLIN( 380)							rangeStarts1[j1] = (rangeStarts1->__get(j1) - markerLength);
            						}
HXLINE( 382)						if ((rangeEnds->__get(j) > delIndex)) {
HXLINE( 384)							::Array< int > rangeEnds1 = rangeEnds;
HXDLIN( 384)							int j1 = j;
HXDLIN( 384)							rangeEnds1[j1] = (rangeEnds1->__get(j1) - markerLength);
            						}
            					}
            				}
HXLINE( 389)				delIndex = rangeEnds->__get(i);
HXLINE( 392)				{
HXLINE( 392)					int _g3 = 0;
HXDLIN( 392)					int _g4 = rangeStarts->length;
HXDLIN( 392)					while((_g3 < _g4)){
HXLINE( 392)						_g3 = (_g3 + 1);
HXDLIN( 392)						int j = (_g3 - 1);
HXLINE( 394)						if ((rangeStarts->__get(j) > delIndex)) {
HXLINE( 396)							::Array< int > rangeStarts1 = rangeStarts;
HXDLIN( 396)							int j1 = j;
HXDLIN( 396)							rangeStarts1[j1] = (rangeStarts1->__get(j1) - markerLength);
            						}
HXLINE( 398)						if ((rangeEnds->__get(j) > delIndex)) {
HXLINE( 400)							::Array< int > rangeEnds1 = rangeEnds;
HXDLIN( 400)							int j1 = j;
HXDLIN( 400)							rangeEnds1[j1] = (rangeEnds1->__get(j1) - markerLength);
            						}
            					}
            				}
            			}
            		}
HXLINE( 406)		this->set_text(input);
HXLINE( 409)		{
HXLINE( 409)			int _g4 = 0;
HXDLIN( 409)			int _g5 = rangeStarts->length;
HXDLIN( 409)			while((_g4 < _g5)){
HXLINE( 409)				_g4 = (_g4 + 1);
HXDLIN( 409)				int i = (_g4 - 1);
HXLINE( 410)				this->addFormat(rulesToApply->__get(i).StaticCast<  ::flixel::text::FlxTextFormatMarkerPair >()->format,rangeStarts->__get(i),rangeEnds->__get(i));
            			}
            		}
HXLINE( 412)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyMarkup,return )

 ::flixel::text::FlxText FlxText_obj::addFormat( ::flixel::text::FlxTextFormat Format,::hx::Null< int >  __o_Start,::hx::Null< int >  __o_End){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run( ::flixel::text::_FlxText::FlxTextFormatRange left, ::flixel::text::_FlxText::FlxTextFormatRange right){
            			HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_428_addFormat)
HXLINE( 428)			if (::hx::IsLess( left->range->start,right->range->start )) {
HXLINE( 428)				return -1;
            			}
            			else {
HXLINE( 428)				return 1;
            			}
HXDLIN( 428)			return 0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int Start = __o_Start.Default(-1);
            		int End = __o_End.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_423_addFormat)
HXLINE( 424)		::Array< ::Dynamic> _hx_tmp = this->_formatRanges;
HXDLIN( 424)		_hx_tmp->push( ::flixel::text::_FlxText::FlxTextFormatRange_obj::__alloc( HX_CTX ,Format,Start,End));
HXLINE( 426)		this->_formatRanges->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 430)		this->_regen = true;
HXLINE( 432)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,addFormat,return )

 ::flixel::text::FlxText FlxText_obj::removeFormat( ::flixel::text::FlxTextFormat Format, ::Dynamic Start, ::Dynamic End){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_440_removeFormat)
HXLINE( 441)		int i = this->_formatRanges->length;
HXLINE( 442)		while(true){
HXLINE( 442)			i = (i - 1);
HXDLIN( 442)			if (!(((i + 1) > 0))) {
HXLINE( 442)				goto _hx_goto_14;
            			}
HXLINE( 444)			 ::flixel::text::_FlxText::FlxTextFormatRange formatRange = this->_formatRanges->__get(i).StaticCast<  ::flixel::text::_FlxText::FlxTextFormatRange >();
HXLINE( 445)			if (::hx::IsInstanceNotEq( formatRange->format,Format )) {
HXLINE( 446)				continue;
            			}
HXLINE( 448)			bool _hx_tmp;
HXDLIN( 448)			if (::hx::IsNotNull( Start )) {
HXLINE( 448)				_hx_tmp = ::hx::IsNotNull( End );
            			}
            			else {
HXLINE( 448)				_hx_tmp = false;
            			}
HXDLIN( 448)			if (_hx_tmp) {
HXLINE( 450)				 ::flixel::util::helpers::FlxRange range = formatRange->range;
HXLINE( 451)				bool _hx_tmp;
HXDLIN( 451)				if (::hx::IsLess( Start,range->end )) {
HXLINE( 451)					_hx_tmp = ::hx::IsLessEq( End,range->start );
            				}
            				else {
HXLINE( 451)					_hx_tmp = true;
            				}
HXDLIN( 451)				if (_hx_tmp) {
HXLINE( 452)					continue;
            				}
HXLINE( 454)				bool _hx_tmp1;
HXDLIN( 454)				if (::hx::IsGreater( Start,range->start )) {
HXLINE( 454)					_hx_tmp1 = ::hx::IsLess( End,range->end );
            				}
            				else {
HXLINE( 454)					_hx_tmp1 = false;
            				}
HXDLIN( 454)				if (_hx_tmp1) {
HXLINE( 456)					this->addFormat(formatRange->format,(End + 1),range->end);
HXLINE( 457)					range->end = Start;
HXLINE( 458)					continue;
            				}
HXLINE( 461)				bool _hx_tmp2;
HXDLIN( 461)				if (::hx::IsLessEq( Start,range->start )) {
HXLINE( 461)					_hx_tmp2 = ::hx::IsLess( End,range->end );
            				}
            				else {
HXLINE( 461)					_hx_tmp2 = false;
            				}
HXDLIN( 461)				if (_hx_tmp2) {
HXLINE( 463)					range->start = End;
HXLINE( 464)					continue;
            				}
HXLINE( 467)				bool _hx_tmp3;
HXDLIN( 467)				if (::hx::IsGreater( Start,range->start )) {
HXLINE( 467)					_hx_tmp3 = ::hx::IsGreaterEq( End,range->end );
            				}
            				else {
HXLINE( 467)					_hx_tmp3 = false;
            				}
HXDLIN( 467)				if (_hx_tmp3) {
HXLINE( 469)					range->end = Start;
HXLINE( 470)					continue;
            				}
            			}
HXLINE( 474)			this->_formatRanges->remove(formatRange);
            		}
            		_hx_goto_14:;
HXLINE( 477)		this->_regen = true;
HXLINE( 479)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,removeFormat,return )

 ::flixel::text::FlxText FlxText_obj::clearFormats(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_486_clearFormats)
HXLINE( 487)		this->_formatRanges = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 488)		{
HXLINE( 488)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 488)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 488)			this->_regen = true;
            		}
HXLINE( 490)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,clearFormats,return )

 ::flixel::text::FlxText FlxText_obj::setFormat(::String Font,::hx::Null< int >  __o_Size,::hx::Null< int >  __o_Color,::String Alignment, ::flixel::text::FlxTextBorderStyle BorderStyle,::hx::Null< int >  __o_BorderColor,::hx::Null< bool >  __o_EmbeddedFont){
            		int Size = __o_Size.Default(8);
            		int Color = __o_Color.Default(-1);
            		int BorderColor = __o_BorderColor.Default(0);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_507_setFormat)
HXLINE( 508)		if (::hx::IsNull( BorderStyle )) {
HXLINE( 508)			BorderStyle = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
            		}
HXLINE( 510)		if (EmbeddedFont) {
HXLINE( 512)			this->set_font(Font);
            		}
            		else {
HXLINE( 514)			if (::hx::IsNotNull( Font )) {
HXLINE( 516)				this->set_systemFont(Font);
            			}
            		}
HXLINE( 519)		this->set_size(Size);
HXLINE( 520)		this->set_color(Color);
HXLINE( 521)		if (::hx::IsNotNull( Alignment )) {
HXLINE( 522)			this->set_alignment(Alignment);
            		}
HXLINE( 523)		{
HXLINE( 523)			this->set_borderStyle(BorderStyle);
HXDLIN( 523)			this->set_borderColor(BorderColor);
HXDLIN( 523)			this->set_borderSize(( (Float)(1) ));
HXDLIN( 523)			this->set_borderQuality(( (Float)(1) ));
            		}
HXLINE( 525)		{
HXLINE( 525)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 525)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 525)			this->_regen = true;
            		}
HXLINE( 527)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxText_obj,setFormat,return )

 ::flixel::text::FlxText FlxText_obj::setBorderStyle( ::flixel::text::FlxTextBorderStyle Style,::hx::Null< int >  __o_Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality){
            		int Color = __o_Color.Default(0);
            		Float Size = __o_Size.Default(1);
            		Float Quality = __o_Quality.Default(1);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_539_setBorderStyle)
HXLINE( 540)		this->set_borderStyle(Style);
HXLINE( 541)		this->set_borderColor(Color);
HXLINE( 542)		this->set_borderSize(Size);
HXLINE( 543)		this->set_borderQuality(Quality);
HXLINE( 545)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxText_obj,setBorderStyle,return )

void FlxText_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_549_updateHitbox)
HXLINE( 550)		this->regenGraphic();
HXLINE( 551)		this->super::updateHitbox();
            	}


 ::flixel::math::FlxRect FlxText_obj::getScreenBounds( ::flixel::math::FlxRect newRect, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_555_getScreenBounds)
HXLINE( 556)		this->regenGraphic();
HXLINE( 557)		return this->super::getScreenBounds(newRect,camera);
            	}


Float FlxText_obj::set_fieldWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_561_set_fieldWidth)
HXLINE( 562)		if (::hx::IsNull( this->textField )) {
HXLINE( 563)			return value;
            		}
HXLINE( 565)		if ((value <= 0)) {
HXLINE( 567)			this->set_wordWrap(false);
HXLINE( 568)			this->set_autoSize(true);
HXLINE( 570)			this->_autoHeight = true;
            		}
            		else {
HXLINE( 574)			this->set_autoSize(false);
HXLINE( 575)			this->set_wordWrap(true);
HXLINE( 576)			this->textField->set_width(value);
            		}
HXLINE( 579)		this->_regen = true;
HXLINE( 580)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldWidth,return )

Float FlxText_obj::get_fieldWidth(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_585_get_fieldWidth)
HXDLIN( 585)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 585)			return this->textField->get_width();
            		}
            		else {
HXDLIN( 585)			return ( (Float)(0) );
            		}
HXDLIN( 585)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldWidth,return )

Float FlxText_obj::get_fieldHeight(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_590_get_fieldHeight)
HXDLIN( 590)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 590)			return this->textField->get_height();
            		}
            		else {
HXDLIN( 590)			return ( (Float)(0) );
            		}
HXDLIN( 590)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_fieldHeight,return )

Float FlxText_obj::set_fieldHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_594_set_fieldHeight)
HXLINE( 595)		if (::hx::IsNull( this->textField )) {
HXLINE( 596)			return value;
            		}
HXLINE( 598)		if ((value <= 0)) {
HXLINE( 600)			this->_autoHeight = true;
            		}
            		else {
HXLINE( 604)			this->_autoHeight = false;
HXLINE( 605)			this->textField->set_height(value);
            		}
HXLINE( 607)		this->_regen = true;
HXLINE( 608)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_fieldHeight,return )

bool FlxText_obj::set_autoSize(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_612_set_autoSize)
HXLINE( 613)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 615)			 ::Dynamic _hx_tmp;
HXDLIN( 615)			if (value) {
HXLINE( 615)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 615)				_hx_tmp = 2;
            			}
HXDLIN( 615)			this->textField->set_autoSize(_hx_tmp);
HXLINE( 616)			this->_regen = true;
            		}
HXLINE( 619)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_autoSize,return )

bool FlxText_obj::get_autoSize(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_624_get_autoSize)
HXDLIN( 624)		if (::hx::IsNotNull( this->textField )) {
HXDLIN( 624)			return ::hx::IsNotEq( this->textField->get_autoSize(),2 );
            		}
            		else {
HXDLIN( 624)			return false;
            		}
HXDLIN( 624)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_autoSize,return )

::String FlxText_obj::set_text(::String Text){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_628_set_text)
HXLINE( 629)		this->text = Text;
HXLINE( 630)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 632)			::String ot = this->textField->get_text();
HXLINE( 633)			this->textField->set_text(Text);
HXLINE( 634)			bool _hx_tmp;
HXDLIN( 634)			if ((this->textField->get_text() == ot)) {
HXLINE( 634)				_hx_tmp = this->_regen;
            			}
            			else {
HXLINE( 634)				_hx_tmp = true;
            			}
HXDLIN( 634)			this->_regen = _hx_tmp;
            		}
HXLINE( 636)		return Text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_text,return )

int FlxText_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_641_get_size)
HXDLIN( 641)		return ::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_size,return )

int FlxText_obj::set_size(int Size){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_645_set_size)
HXLINE( 646)		this->_defaultFormat->size = Size;
HXLINE( 647)		{
HXLINE( 647)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 647)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 647)			this->_regen = true;
            		}
HXLINE( 648)		return Size;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_size,return )

Float FlxText_obj::get_letterSpacing(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_653_get_letterSpacing)
HXDLIN( 653)		return ( (Float)(this->_defaultFormat->letterSpacing) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_letterSpacing,return )

Float FlxText_obj::set_letterSpacing(Float LetterSpacing){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_657_set_letterSpacing)
HXLINE( 658)		this->_defaultFormat->letterSpacing = LetterSpacing;
HXLINE( 659)		{
HXLINE( 659)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 659)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 659)			this->_regen = true;
            		}
HXLINE( 660)		return LetterSpacing;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_letterSpacing,return )

int FlxText_obj::set_color(int Color){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_664_set_color)
HXLINE( 665)		if (::hx::IsEq( this->_defaultFormat->color,(Color & 16777215) )) {
HXLINE( 667)			return Color;
            		}
HXLINE( 669)		this->_defaultFormat->color = (Color & 16777215);
HXLINE( 670)		this->color = Color;
HXLINE( 671)		{
HXLINE( 671)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 671)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 671)			this->_regen = true;
            		}
HXLINE( 672)		return Color;
            	}


::String FlxText_obj::get_font(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_677_get_font)
HXDLIN( 677)		return this->_font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_font,return )

::String FlxText_obj::set_font(::String Font){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_681_set_font)
HXLINE( 682)		this->textField->set_embedFonts(true);
HXLINE( 684)		if (::hx::IsNotNull( Font )) {
HXLINE( 686)			::String newFontName = Font;
HXLINE( 687)			if (::openfl::utils::Assets_obj::exists(Font,HX_("FONT",cf,25,81,2e))) {
HXLINE( 689)				newFontName = ::openfl::utils::Assets_obj::getFont(Font,null())->name;
            			}
HXLINE( 692)			this->_defaultFormat->font = newFontName;
            		}
            		else {
HXLINE( 696)			this->_defaultFormat->font = ::flixel::_hx_system::FlxAssets_obj::FONT_DEFAULT;
            		}
HXLINE( 699)		{
HXLINE( 699)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 699)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 699)			this->_regen = true;
            		}
HXLINE( 700)		return (this->_font = this->_defaultFormat->font);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_font,return )

bool FlxText_obj::get_embedded(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_705_get_embedded)
HXDLIN( 705)		return this->textField->get_embedFonts();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_embedded,return )

::String FlxText_obj::get_systemFont(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_710_get_systemFont)
HXDLIN( 710)		return this->_defaultFormat->font;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_systemFont,return )

::String FlxText_obj::set_systemFont(::String Font){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_714_set_systemFont)
HXLINE( 715)		this->textField->set_embedFonts(false);
HXLINE( 716)		this->_defaultFormat->font = Font;
HXLINE( 717)		{
HXLINE( 717)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 717)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 717)			this->_regen = true;
            		}
HXLINE( 718)		return Font;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_systemFont,return )

bool FlxText_obj::get_bold(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_723_get_bold)
HXDLIN( 723)		return ( (bool)(this->_defaultFormat->bold) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_bold,return )

bool FlxText_obj::set_bold(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_727_set_bold)
HXLINE( 728)		if (::hx::IsNotEq( this->_defaultFormat->bold,value )) {
HXLINE( 730)			this->_defaultFormat->bold = value;
HXLINE( 731)			{
HXLINE( 731)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 731)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 731)				this->_regen = true;
            			}
            		}
HXLINE( 733)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_bold,return )

bool FlxText_obj::get_italic(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_738_get_italic)
HXDLIN( 738)		return ( (bool)(this->_defaultFormat->italic) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_italic,return )

bool FlxText_obj::set_italic(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_742_set_italic)
HXLINE( 743)		if (::hx::IsNotEq( this->_defaultFormat->italic,value )) {
HXLINE( 745)			this->_defaultFormat->italic = value;
HXLINE( 746)			{
HXLINE( 746)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 746)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 746)				this->_regen = true;
            			}
            		}
HXLINE( 748)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_italic,return )

bool FlxText_obj::get_underline(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_753_get_underline)
HXDLIN( 753)		return ( (bool)(this->_defaultFormat->underline) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_underline,return )

bool FlxText_obj::set_underline(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_757_set_underline)
HXLINE( 758)		if (::hx::IsNotEq( this->_defaultFormat->underline,value )) {
HXLINE( 760)			this->_defaultFormat->underline = value;
HXLINE( 761)			{
HXLINE( 761)				this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 761)				this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 761)				this->_regen = true;
            			}
            		}
HXLINE( 763)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_underline,return )

bool FlxText_obj::get_wordWrap(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_768_get_wordWrap)
HXDLIN( 768)		return this->textField->get_wordWrap();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_wordWrap,return )

bool FlxText_obj::set_wordWrap(bool value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_772_set_wordWrap)
HXLINE( 773)		if ((this->textField->get_wordWrap() != value)) {
HXLINE( 775)			this->textField->set_wordWrap(value);
HXLINE( 776)			this->_regen = true;
            		}
HXLINE( 778)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_wordWrap,return )

::String FlxText_obj::get_alignment(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_783_get_alignment)
HXDLIN( 783)		return ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(this->_defaultFormat->align);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,get_alignment,return )

::String FlxText_obj::set_alignment(::String Alignment){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_787_set_alignment)
HXLINE( 788)		this->_defaultFormat->align = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::toOpenFL(Alignment);
HXLINE( 789)		{
HXLINE( 789)			this->textField->set_defaultTextFormat(this->_defaultFormat);
HXDLIN( 789)			this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXDLIN( 789)			this->_regen = true;
            		}
HXLINE( 790)		return Alignment;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_alignment,return )

 ::flixel::text::FlxTextBorderStyle FlxText_obj::set_borderStyle( ::flixel::text::FlxTextBorderStyle style){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_794_set_borderStyle)
HXLINE( 795)		if (::hx::IsPointerNotEq( style,this->borderStyle )) {
HXLINE( 796)			this->_regen = true;
            		}
HXLINE( 798)		return (this->borderStyle = style);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderStyle,return )

int FlxText_obj::set_borderColor(int Color){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_802_set_borderColor)
HXLINE( 803)		bool _hx_tmp;
HXDLIN( 803)		if ((this->borderColor != Color)) {
HXLINE( 803)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 803)			_hx_tmp = false;
            		}
HXDLIN( 803)		if (_hx_tmp) {
HXLINE( 804)			this->_regen = true;
            		}
HXLINE( 805)		this->_hasBorderAlpha = ((( (Float)(((Color >> 24) & 255)) ) / ( (Float)(255) )) < 1);
HXLINE( 806)		return (this->borderColor = Color);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderColor,return )

Float FlxText_obj::set_borderSize(Float Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_810_set_borderSize)
HXLINE( 811)		bool _hx_tmp;
HXDLIN( 811)		if ((Value != this->borderSize)) {
HXLINE( 811)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 811)			_hx_tmp = false;
            		}
HXDLIN( 811)		if (_hx_tmp) {
HXLINE( 812)			this->_regen = true;
            		}
HXLINE( 814)		return (this->borderSize = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderSize,return )

Float FlxText_obj::set_borderQuality(Float Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_818_set_borderQuality)
HXLINE( 819)		Float lowerBound;
HXDLIN( 819)		if ((Value < 0)) {
HXLINE( 819)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE( 819)			lowerBound = Value;
            		}
HXDLIN( 819)		if ((lowerBound > 1)) {
HXLINE( 819)			Value = ( (Float)(1) );
            		}
            		else {
HXLINE( 819)			Value = lowerBound;
            		}
HXLINE( 820)		bool _hx_tmp;
HXDLIN( 820)		if ((Value != this->borderQuality)) {
HXLINE( 820)			_hx_tmp = ::hx::IsPointerNotEq( this->borderStyle,::flixel::text::FlxTextBorderStyle_obj::NONE_dyn() );
            		}
            		else {
HXLINE( 820)			_hx_tmp = false;
            		}
HXDLIN( 820)		if (_hx_tmp) {
HXLINE( 821)			this->_regen = true;
            		}
HXLINE( 823)		return (this->borderQuality = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,set_borderQuality,return )

 ::flixel::graphics::FlxGraphic FlxText_obj::set_graphic( ::flixel::graphics::FlxGraphic Value){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_827_set_graphic)
HXLINE( 828)		 ::flixel::graphics::FlxGraphic oldGraphic = this->graphic;
HXLINE( 829)		 ::flixel::graphics::FlxGraphic graph = this->super::set_graphic(Value);
HXLINE( 830)		::flixel::FlxG_obj::bitmap->removeIfNoUse(oldGraphic);
HXLINE( 831)		return graph;
            	}


Float FlxText_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_835_get_width)
HXLINE( 836)		this->regenGraphic();
HXLINE( 837)		return this->super::get_width();
            	}


Float FlxText_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_841_get_height)
HXLINE( 842)		this->regenGraphic();
HXLINE( 843)		return this->super::get_height();
            	}


void FlxText_obj::updateColorTransform(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_847_updateColorTransform)
HXLINE( 848)		if (::hx::IsNull( this->colorTransform )) {
HXLINE( 849)			this->colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE( 851)		if ((this->alpha != 1)) {
HXLINE( 853)			this->colorTransform->alphaMultiplier = this->alpha;
HXLINE( 854)			this->useColorTransform = true;
            		}
            		else {
HXLINE( 858)			this->colorTransform->alphaMultiplier = ( (Float)(1) );
HXLINE( 859)			this->useColorTransform = false;
            		}
HXLINE( 862)		this->dirty = true;
            	}


void FlxText_obj::regenGraphic(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_866_regenGraphic)
HXLINE( 867)		bool _hx_tmp;
HXDLIN( 867)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 867)			_hx_tmp = !(this->_regen);
            		}
            		else {
HXLINE( 867)			_hx_tmp = true;
            		}
HXDLIN( 867)		if (_hx_tmp) {
HXLINE( 868)			return;
            		}
HXLINE( 870)		int oldWidth = 0;
HXLINE( 871)		int oldHeight = 4;
HXLINE( 873)		if (::hx::IsNotNull( this->graphic )) {
HXLINE( 875)			oldWidth = this->graphic->width;
HXLINE( 876)			oldHeight = this->graphic->height;
            		}
HXLINE( 879)		int newWidth = ::Math_obj::ceil(this->textField->get_width());
HXLINE( 880)		Float textfieldHeight;
HXDLIN( 880)		if (this->_autoHeight) {
HXLINE( 880)			textfieldHeight = this->textField->get_textHeight();
            		}
            		else {
HXLINE( 880)			textfieldHeight = this->textField->get_height();
            		}
HXLINE( 881)		int vertGutter;
HXDLIN( 881)		if (this->_autoHeight) {
HXLINE( 881)			vertGutter = 4;
            		}
            		else {
HXLINE( 881)			vertGutter = 0;
            		}
HXLINE( 883)		int newHeight = (::Math_obj::ceil(textfieldHeight) + vertGutter);
HXLINE( 886)		if ((this->textField->get_textHeight() == 0)) {
HXLINE( 888)			newHeight = oldHeight;
            		}
HXLINE( 891)		bool _hx_tmp1;
HXDLIN( 891)		if ((oldWidth == newWidth)) {
HXLINE( 891)			_hx_tmp1 = (oldHeight != newHeight);
            		}
            		else {
HXLINE( 891)			_hx_tmp1 = true;
            		}
HXDLIN( 891)		if (_hx_tmp1) {
HXLINE( 894)			::String key = ::flixel::FlxG_obj::bitmap->getUniqueKey(HX_("text",ad,cc,f9,4c));
HXLINE( 895)			this->makeGraphic(newWidth,newHeight,0,false,key);
HXLINE( 897)			if (this->_hasBorderAlpha) {
HXLINE( 898)				this->_borderPixels = this->graphic->bitmap->clone();
            			}
HXLINE( 900)			if (this->_autoHeight) {
HXLINE( 901)				this->textField->set_height(( (Float)(newHeight) ));
            			}
HXLINE( 903)			this->_flashRect->x = ( (Float)(0) );
HXLINE( 904)			this->_flashRect->y = ( (Float)(0) );
HXLINE( 905)			this->_flashRect->width = ( (Float)(newWidth) );
HXLINE( 906)			this->_flashRect->height = ( (Float)(newHeight) );
            		}
            		else {
HXLINE( 910)			this->graphic->bitmap->fillRect(this->_flashRect,0);
HXLINE( 911)			if (this->_hasBorderAlpha) {
HXLINE( 913)				if (::hx::IsNull( this->_borderPixels )) {
HXLINE( 914)					this->_borderPixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,this->frameWidth,this->frameHeight,true,null());
            				}
            				else {
HXLINE( 916)					this->_borderPixels->fillRect(this->_flashRect,0);
            				}
            			}
            		}
HXLINE( 920)		bool _hx_tmp2;
HXDLIN( 920)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 920)			_hx_tmp2 = ::hx::IsNotNull( this->textField->get_text() );
            		}
            		else {
HXLINE( 920)			_hx_tmp2 = false;
            		}
HXDLIN( 920)		if (_hx_tmp2) {
HXLINE( 923)			this->copyTextFormat(this->_defaultFormat,this->_formatAdjusted,null());
HXLINE( 925)			this->_matrix->identity();
HXLINE( 927)			this->applyBorderStyle();
HXLINE( 928)			if (this->_hasBorderAlpha) {
HXLINE( 928)				if (::hx::IsNull( this->_borderColorTransform )) {
HXLINE( 928)					this->_borderColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            				}
HXDLIN( 928)				this->_borderColorTransform->alphaMultiplier = (( (Float)(((this->borderColor >> 24) & 255)) ) / ( (Float)(255) ));
HXDLIN( 928)				this->_borderPixels->colorTransform(this->_borderPixels->rect,this->_borderColorTransform);
HXDLIN( 928)				this->graphic->bitmap->draw(this->_borderPixels,null(),null(),null(),null(),null());
            			}
HXLINE( 929)			this->applyFormats(this->_formatAdjusted,false);
HXLINE( 931)			this->drawTextFieldTo(this->graphic->bitmap);
            		}
HXLINE( 934)		this->_regen = false;
HXLINE( 935)		this->set_frame(this->frame);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,regenGraphic,(void))

void FlxText_obj::drawTextFieldTo( ::openfl::display::BitmapData graphic){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_942_drawTextFieldTo)
HXLINE( 970)		this->_matrix->translate(( (Float)(-1) ),( (Float)(-1) ));
HXLINE( 971)		graphic->draw(this->textField,this->_matrix,null(),null(),null(),null());
HXLINE( 972)		this->_matrix->translate(( (Float)(1) ),( (Float)(1) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxText_obj,drawTextFieldTo,(void))

void FlxText_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_998_draw)
HXLINE( 999)		this->regenGraphic();
HXLINE(1000)		this->super::draw();
            	}


void FlxText_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1009_calcFrame)
HXLINE(1010)		if (::hx::IsNull( this->textField )) {
HXLINE(1011)			return;
            		}
HXLINE(1013)		bool _hx_tmp;
HXDLIN(1013)		if (::flixel::FlxG_obj::renderTile) {
HXLINE(1013)			_hx_tmp = !(RunOnCpp);
            		}
            		else {
HXLINE(1013)			_hx_tmp = false;
            		}
HXDLIN(1013)		if (_hx_tmp) {
HXLINE(1014)			return;
            		}
HXLINE(1016)		this->regenGraphic();
HXLINE(1017)		this->super::calcFrame(RunOnCpp);
            	}


void FlxText_obj::applyBorderStyle(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1021_applyBorderStyle)
HXLINE(1022)		int iterations = ::Std_obj::_hx_int((this->borderSize * this->borderQuality));
HXLINE(1023)		if ((iterations <= 0)) {
HXLINE(1025)			iterations = 1;
            		}
HXLINE(1027)		Float delta = (this->borderSize / ( (Float)(iterations) ));
HXLINE(1029)		switch((int)(this->borderStyle->_hx_getIndex())){
            			case (int)0: {
            			}
            			break;
            			case (int)1: {
HXLINE(1034)				this->applyFormats(this->_formatAdjusted,true);
HXLINE(1036)				{
HXLINE(1036)					int _g = 0;
HXDLIN(1036)					int _g1 = iterations;
HXDLIN(1036)					while((_g < _g1)){
HXLINE(1036)						_g = (_g + 1);
HXDLIN(1036)						int i = (_g - 1);
HXLINE(1038)						{
HXLINE(1038)							 ::openfl::display::BitmapData graphic;
HXDLIN(1038)							if (this->_hasBorderAlpha) {
HXLINE(1038)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE(1038)								graphic = this->graphic->bitmap;
            							}
HXDLIN(1038)							this->_matrix->translate(delta,delta);
HXDLIN(1038)							this->drawTextFieldTo(graphic);
            						}
            					}
            				}
HXLINE(1041)				this->_matrix->translate((-(this->shadowOffset->x) * this->borderSize),(-(this->shadowOffset->y) * this->borderSize));
            			}
            			break;
            			case (int)2: {
HXLINE(1046)				this->applyFormats(this->_formatAdjusted,true);
HXLINE(1048)				Float curDelta = delta;
HXLINE(1049)				{
HXLINE(1049)					int _g = 0;
HXDLIN(1049)					int _g1 = iterations;
HXDLIN(1049)					while((_g < _g1)){
HXLINE(1049)						_g = (_g + 1);
HXDLIN(1049)						int i = (_g - 1);
HXLINE(1051)						{
HXLINE(1051)							 ::openfl::display::BitmapData graphic;
HXDLIN(1051)							if (this->_hasBorderAlpha) {
HXLINE(1051)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE(1051)								graphic = this->graphic->bitmap;
            							}
HXDLIN(1051)							this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN(1051)							this->drawTextFieldTo(graphic);
            						}
HXLINE(1052)						{
HXLINE(1052)							 ::openfl::display::BitmapData graphic1;
HXDLIN(1052)							if (this->_hasBorderAlpha) {
HXLINE(1052)								graphic1 = this->_borderPixels;
            							}
            							else {
HXLINE(1052)								graphic1 = this->graphic->bitmap;
            							}
HXDLIN(1052)							this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN(1052)							this->drawTextFieldTo(graphic1);
            						}
HXLINE(1053)						{
HXLINE(1053)							 ::openfl::display::BitmapData graphic2;
HXDLIN(1053)							if (this->_hasBorderAlpha) {
HXLINE(1053)								graphic2 = this->_borderPixels;
            							}
            							else {
HXLINE(1053)								graphic2 = this->graphic->bitmap;
            							}
HXDLIN(1053)							this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN(1053)							this->drawTextFieldTo(graphic2);
            						}
HXLINE(1054)						{
HXLINE(1054)							 ::openfl::display::BitmapData graphic3;
HXDLIN(1054)							if (this->_hasBorderAlpha) {
HXLINE(1054)								graphic3 = this->_borderPixels;
            							}
            							else {
HXLINE(1054)								graphic3 = this->graphic->bitmap;
            							}
HXDLIN(1054)							this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN(1054)							this->drawTextFieldTo(graphic3);
            						}
HXLINE(1055)						{
HXLINE(1055)							 ::openfl::display::BitmapData graphic4;
HXDLIN(1055)							if (this->_hasBorderAlpha) {
HXLINE(1055)								graphic4 = this->_borderPixels;
            							}
            							else {
HXLINE(1055)								graphic4 = this->graphic->bitmap;
            							}
HXDLIN(1055)							this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN(1055)							this->drawTextFieldTo(graphic4);
            						}
HXLINE(1056)						{
HXLINE(1056)							 ::openfl::display::BitmapData graphic5;
HXDLIN(1056)							if (this->_hasBorderAlpha) {
HXLINE(1056)								graphic5 = this->_borderPixels;
            							}
            							else {
HXLINE(1056)								graphic5 = this->graphic->bitmap;
            							}
HXDLIN(1056)							this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN(1056)							this->drawTextFieldTo(graphic5);
            						}
HXLINE(1057)						{
HXLINE(1057)							 ::openfl::display::BitmapData graphic6;
HXDLIN(1057)							if (this->_hasBorderAlpha) {
HXLINE(1057)								graphic6 = this->_borderPixels;
            							}
            							else {
HXLINE(1057)								graphic6 = this->graphic->bitmap;
            							}
HXDLIN(1057)							this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN(1057)							this->drawTextFieldTo(graphic6);
            						}
HXLINE(1058)						{
HXLINE(1058)							 ::openfl::display::BitmapData graphic7;
HXDLIN(1058)							if (this->_hasBorderAlpha) {
HXLINE(1058)								graphic7 = this->_borderPixels;
            							}
            							else {
HXLINE(1058)								graphic7 = this->graphic->bitmap;
            							}
HXDLIN(1058)							this->_matrix->translate(( (Float)(0) ),-(curDelta));
HXDLIN(1058)							this->drawTextFieldTo(graphic7);
            						}
HXLINE(1060)						this->_matrix->translate(curDelta,( (Float)(0) ));
HXLINE(1061)						curDelta = (curDelta + delta);
            					}
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(1068)				this->applyFormats(this->_formatAdjusted,true);
HXLINE(1070)				Float curDelta = delta;
HXLINE(1071)				{
HXLINE(1071)					int _g = 0;
HXDLIN(1071)					int _g1 = iterations;
HXDLIN(1071)					while((_g < _g1)){
HXLINE(1071)						_g = (_g + 1);
HXDLIN(1071)						int i = (_g - 1);
HXLINE(1073)						{
HXLINE(1073)							 ::openfl::display::BitmapData graphic;
HXDLIN(1073)							if (this->_hasBorderAlpha) {
HXLINE(1073)								graphic = this->_borderPixels;
            							}
            							else {
HXLINE(1073)								graphic = this->graphic->bitmap;
            							}
HXDLIN(1073)							this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN(1073)							this->drawTextFieldTo(graphic);
            						}
HXLINE(1074)						{
HXLINE(1074)							 ::openfl::display::BitmapData graphic1;
HXDLIN(1074)							if (this->_hasBorderAlpha) {
HXLINE(1074)								graphic1 = this->_borderPixels;
            							}
            							else {
HXLINE(1074)								graphic1 = this->graphic->bitmap;
            							}
HXDLIN(1074)							this->_matrix->translate((curDelta * ( (Float)(2) )),( (Float)(0) ));
HXDLIN(1074)							this->drawTextFieldTo(graphic1);
            						}
HXLINE(1075)						{
HXLINE(1075)							 ::openfl::display::BitmapData graphic2;
HXDLIN(1075)							if (this->_hasBorderAlpha) {
HXLINE(1075)								graphic2 = this->_borderPixels;
            							}
            							else {
HXLINE(1075)								graphic2 = this->graphic->bitmap;
            							}
HXDLIN(1075)							this->_matrix->translate(( (Float)(0) ),(curDelta * ( (Float)(2) )));
HXDLIN(1075)							this->drawTextFieldTo(graphic2);
            						}
HXLINE(1076)						{
HXLINE(1076)							 ::openfl::display::BitmapData graphic3;
HXDLIN(1076)							if (this->_hasBorderAlpha) {
HXLINE(1076)								graphic3 = this->_borderPixels;
            							}
            							else {
HXLINE(1076)								graphic3 = this->graphic->bitmap;
            							}
HXDLIN(1076)							this->_matrix->translate((-(curDelta) * ( (Float)(2) )),( (Float)(0) ));
HXDLIN(1076)							this->drawTextFieldTo(graphic3);
            						}
HXLINE(1078)						this->_matrix->translate(curDelta,-(curDelta));
HXLINE(1079)						curDelta = (curDelta + delta);
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderStyle,(void))

void FlxText_obj::applyBorderTransparency(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_1087_applyBorderTransparency)
HXLINE(1088)		if (!(this->_hasBorderAlpha)) {
HXLINE(1089)			return;
            		}
HXLINE(1091)		if (::hx::IsNull( this->_borderColorTransform )) {
HXLINE(1092)			this->_borderColorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
            		}
HXLINE(1094)		this->_borderColorTransform->alphaMultiplier = (( (Float)(((this->borderColor >> 24) & 255)) ) / ( (Float)(255) ));
HXLINE(1095)		this->_borderPixels->colorTransform(this->_borderPixels->rect,this->_borderColorTransform);
HXLINE(1096)		this->graphic->bitmap->draw(this->_borderPixels,null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,applyBorderTransparency,(void))

void FlxText_obj::copyTextWithOffset(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1103_copyTextWithOffset)
HXLINE(1104)		 ::openfl::display::BitmapData graphic;
HXDLIN(1104)		if (this->_hasBorderAlpha) {
HXLINE(1104)			graphic = this->_borderPixels;
            		}
            		else {
HXLINE(1104)			graphic = this->graphic->bitmap;
            		}
HXLINE(1105)		this->_matrix->translate(x,y);
HXLINE(1106)		this->drawTextFieldTo(graphic);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,copyTextWithOffset,(void))

void FlxText_obj::applyFormats( ::openfl::text::TextFormat FormatAdjusted,::hx::Null< bool >  __o_UseBorderColor){
            		bool UseBorderColor = __o_UseBorderColor.Default(false);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1110_applyFormats)
HXLINE(1112)		this->copyTextFormat(this->_defaultFormat,FormatAdjusted,false);
HXLINE(1113)		 ::Dynamic _hx_tmp;
HXDLIN(1113)		if (UseBorderColor) {
HXLINE(1113)			_hx_tmp = (this->borderColor & 16777215);
            		}
            		else {
HXLINE(1113)			_hx_tmp = this->_defaultFormat->color;
            		}
HXDLIN(1113)		FormatAdjusted->color = _hx_tmp;
HXLINE(1114)		this->textField->setTextFormat(FormatAdjusted,null(),null());
HXLINE(1117)		{
HXLINE(1117)			int _g = 0;
HXDLIN(1117)			::Array< ::Dynamic> _g1 = this->_formatRanges;
HXDLIN(1117)			while((_g < _g1->length)){
HXLINE(1117)				 ::flixel::text::_FlxText::FlxTextFormatRange formatRange = _g1->__get(_g).StaticCast<  ::flixel::text::_FlxText::FlxTextFormatRange >();
HXDLIN(1117)				_g = (_g + 1);
HXLINE(1119)				int _hx_tmp = (this->textField->get_text().length - 1);
HXDLIN(1119)				if (::hx::IsLess( _hx_tmp,formatRange->range->start )) {
HXLINE(1122)					goto _hx_goto_66;
            				}
            				else {
HXLINE(1126)					 ::openfl::text::TextFormat textFormat = formatRange->format->format;
HXLINE(1127)					this->copyTextFormat(textFormat,FormatAdjusted,false);
HXLINE(1128)					 ::Dynamic _hx_tmp;
HXDLIN(1128)					if (UseBorderColor) {
HXLINE(1128)						_hx_tmp = (formatRange->format->borderColor & 16777215);
            					}
            					else {
HXLINE(1128)						_hx_tmp = textFormat->color;
            					}
HXDLIN(1128)					FormatAdjusted->color = _hx_tmp;
            				}
HXLINE(1131)				 ::openfl::text::TextField _hx_tmp1 = this->textField;
HXDLIN(1131)				int formatRange1 = ( (int)(formatRange->range->start) );
HXDLIN(1131)				int formatRange2 = ( (int)(formatRange->range->end) );
HXDLIN(1131)				_hx_tmp1->setTextFormat(FormatAdjusted,formatRange1,::Std_obj::_hx_int(::Math_obj::min(( (Float)(formatRange2) ),( (Float)(this->textField->get_text().length) ))));
            			}
            			_hx_goto_66:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxText_obj,applyFormats,(void))

void FlxText_obj::copyTextFormat( ::openfl::text::TextFormat from, ::openfl::text::TextFormat to,::hx::Null< bool >  __o_withAlign){
            		bool withAlign = __o_withAlign.Default(true);
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1136_copyTextFormat)
HXLINE(1137)		to->font = from->font;
HXLINE(1138)		to->bold = from->bold;
HXLINE(1139)		to->italic = from->italic;
HXLINE(1140)		to->underline = from->underline;
HXLINE(1141)		to->size = from->size;
HXLINE(1142)		to->color = from->color;
HXLINE(1143)		to->leading = from->leading;
HXLINE(1144)		if (withAlign) {
HXLINE(1145)			to->align = from->align;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxText_obj,copyTextFormat,(void))

 ::openfl::text::TextFormat FlxText_obj::dtfCopy(){
            	HX_GC_STACKFRAME(&_hx_pos_7d9cf70d988be490_1154_dtfCopy)
HXLINE(1155)		 ::openfl::text::TextFormat dtf = this->textField->get_defaultTextFormat();
HXLINE(1156)		return  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,dtf->font,dtf->size,dtf->color,dtf->bold,dtf->italic,dtf->underline,dtf->url,dtf->target,dtf->align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,dtfCopy,return )

void FlxText_obj::updateDefaultFormat(){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1160_updateDefaultFormat)
HXLINE(1161)		this->textField->set_defaultTextFormat(this->_defaultFormat);
HXLINE(1162)		this->textField->setTextFormat(this->_defaultFormat,null(),null());
HXLINE(1163)		this->_regen = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxText_obj,updateDefaultFormat,(void))

 ::flixel::graphics::frames::FlxFramesCollection FlxText_obj::set_frames( ::flixel::graphics::frames::FlxFramesCollection Frames){
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_1167_set_frames)
HXLINE(1168)		this->super::set_frames(Frames);
HXLINE(1169)		this->_regen = false;
HXLINE(1170)		return Frames;
            	}


int FlxText_obj::VERTICAL_GUTTER;


::hx::ObjectPtr< FlxText_obj > FlxText_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< FlxText_obj > __this = new FlxText_obj();
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxText_obj > FlxText_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_FieldWidth,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont) {
	FlxText_obj *__this = (FlxText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxText_obj), true, "flixel.text.FlxText"));
	*(void **)__this = FlxText_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return __this;
}

FlxText_obj::FlxText_obj()
{
}

void FlxText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxText);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(borderStyle,"borderStyle");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(borderSize,"borderSize");
	HX_MARK_MEMBER_NAME(borderQuality,"borderQuality");
	HX_MARK_MEMBER_NAME(textField,"textField");
	HX_MARK_MEMBER_NAME(_autoHeight,"_autoHeight");
	HX_MARK_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_MARK_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_MARK_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_MARK_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_MARK_MEMBER_NAME(_font,"_font");
	HX_MARK_MEMBER_NAME(_regen,"_regen");
	HX_MARK_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_MARK_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_MARK_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(borderStyle,"borderStyle");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(borderSize,"borderSize");
	HX_VISIT_MEMBER_NAME(borderQuality,"borderQuality");
	HX_VISIT_MEMBER_NAME(textField,"textField");
	HX_VISIT_MEMBER_NAME(_autoHeight,"_autoHeight");
	HX_VISIT_MEMBER_NAME(shadowOffset,"shadowOffset");
	HX_VISIT_MEMBER_NAME(_defaultFormat,"_defaultFormat");
	HX_VISIT_MEMBER_NAME(_formatAdjusted,"_formatAdjusted");
	HX_VISIT_MEMBER_NAME(_formatRanges,"_formatRanges");
	HX_VISIT_MEMBER_NAME(_font,"_font");
	HX_VISIT_MEMBER_NAME(_regen,"_regen");
	HX_VISIT_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_VISIT_MEMBER_NAME(_borderColorTransform,"_borderColorTransform");
	HX_VISIT_MEMBER_NAME(_hasBorderAlpha,"_hasBorderAlpha");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_font() ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_bold() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { return ::hx::Val( _font ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_italic() ); }
		if (HX_FIELD_EQ(inName,"_regen") ) { return ::hx::Val( _regen ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"dtfCopy") ) { return ::hx::Val( dtfCopy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"embedded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_embedded() ); }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wordWrap() ); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSize() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return ::hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_font") ) { return ::hx::Val( get_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return ::hx::Val( set_font_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_bold") ) { return ::hx::Val( get_bold_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bold") ) { return ::hx::Val( set_bold_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_underline() ); }
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_alignment() ); }
		if (HX_FIELD_EQ(inName,"textField") ) { return ::hx::Val( textField ); }
		if (HX_FIELD_EQ(inName,"drawFrame") ) { return ::hx::Val( drawFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"addFormat") ) { return ::hx::Val( addFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return ::hx::Val( setFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return ::hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_systemFont() ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return ::hx::Val( borderSize ); }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fieldWidth() ); }
		if (HX_FIELD_EQ(inName,"get_italic") ) { return ::hx::Val( get_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_italic") ) { return ::hx::Val( set_italic_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_frames") ) { return ::hx::Val( set_frames_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { return ::hx::Val( borderStyle ); }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"fieldHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_fieldHeight() ); }
		if (HX_FIELD_EQ(inName,"_autoHeight") ) { return ::hx::Val( _autoHeight ); }
		if (HX_FIELD_EQ(inName,"applyMarkup") ) { return ::hx::Val( applyMarkup_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_graphic") ) { return ::hx::Val( set_graphic_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { return ::hx::Val( shadowOffset ); }
		if (HX_FIELD_EQ(inName,"stampOnAtlas") ) { return ::hx::Val( stampOnAtlas_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeFormat") ) { return ::hx::Val( removeFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearFormats") ) { return ::hx::Val( clearFormats_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return ::hx::Val( set_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return ::hx::Val( get_autoSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_embedded") ) { return ::hx::Val( get_embedded_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return ::hx::Val( get_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return ::hx::Val( set_wordWrap_dyn() ); }
		if (HX_FIELD_EQ(inName,"regenGraphic") ) { return ::hx::Val( regenGraphic_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyFormats") ) { return ::hx::Val( applyFormats_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_letterSpacing() ); }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { return ::hx::Val( borderQuality ); }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { return ::hx::Val( _formatRanges ); }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { return ::hx::Val( _borderPixels ); }
		if (HX_FIELD_EQ(inName,"get_underline") ) { return ::hx::Val( get_underline_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_underline") ) { return ::hx::Val( set_underline_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_alignment") ) { return ::hx::Val( get_alignment_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return ::hx::Val( set_alignment_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { return ::hx::Val( _defaultFormat ); }
		if (HX_FIELD_EQ(inName,"setBorderStyle") ) { return ::hx::Val( setBorderStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fieldWidth") ) { return ::hx::Val( set_fieldWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fieldWidth") ) { return ::hx::Val( get_fieldWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_systemFont") ) { return ::hx::Val( get_systemFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_systemFont") ) { return ::hx::Val( set_systemFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return ::hx::Val( set_borderSize_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTextFormat") ) { return ::hx::Val( copyTextFormat_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { return ::hx::Val( _formatAdjusted ); }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { return ::hx::Val( _hasBorderAlpha ); }
		if (HX_FIELD_EQ(inName,"getScreenBounds") ) { return ::hx::Val( getScreenBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_fieldHeight") ) { return ::hx::Val( get_fieldHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_fieldHeight") ) { return ::hx::Val( set_fieldHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderStyle") ) { return ::hx::Val( set_borderStyle_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return ::hx::Val( set_borderColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTextFieldTo") ) { return ::hx::Val( drawTextFieldTo_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyBorderStyle") ) { return ::hx::Val( applyBorderStyle_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_letterSpacing") ) { return ::hx::Val( get_letterSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_letterSpacing") ) { return ::hx::Val( set_letterSpacing_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_borderQuality") ) { return ::hx::Val( set_borderQuality_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyTextWithOffset") ) { return ::hx::Val( copyTextWithOffset_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDefaultFormat") ) { return ::hx::Val( updateDefaultFormat_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateColorTransform") ) { return ::hx::Val( updateColorTransform_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { return ::hx::Val( _borderColorTransform ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"applyBorderTransparency") ) { return ::hx::Val( applyBorderTransparency_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_size(inValue.Cast< int >()) ); }
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_font(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"bold") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bold(inValue.Cast< bool >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_font") ) { _font=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"italic") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_italic(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"_regen") ) { _regen=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wordWrap(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSize(inValue.Cast< bool >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_underline(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignment(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"textField") ) { textField=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemFont") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_systemFont(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"borderSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderSize(inValue.Cast< Float >()) );borderSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldWidth(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderStyle") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderStyle(inValue.Cast<  ::flixel::text::FlxTextBorderStyle >()) );borderStyle=inValue.Cast<  ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderColor(inValue.Cast< int >()) );borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fieldHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldHeight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_autoHeight") ) { _autoHeight=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shadowOffset") ) { shadowOffset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_letterSpacing(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"borderQuality") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_borderQuality(inValue.Cast< Float >()) );borderQuality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_formatRanges") ) { _formatRanges=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { _borderPixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_defaultFormat") ) { _defaultFormat=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_formatAdjusted") ) { _formatAdjusted=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasBorderAlpha") ) { _hasBorderAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_borderColorTransform") ) { _borderColorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("letterSpacing",3d,b7,03,f5));
	outFields->push(HX_("font",cf,5d,c0,43));
	outFields->push(HX_("embedded",8a,19,62,de));
	outFields->push(HX_("systemFont",5e,c4,43,f2));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("italic",f0,2e,64,06));
	outFields->push(HX_("underline",0c,15,d1,87));
	outFields->push(HX_("wordWrap",b4,14,db,00));
	outFields->push(HX_("alignment",e3,e2,3d,ea));
	outFields->push(HX_("borderStyle",a5,70,96,10));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("borderSize",cd,ff,ed,06));
	outFields->push(HX_("borderQuality",33,95,25,79));
	outFields->push(HX_("textField",cd,24,81,99));
	outFields->push(HX_("fieldWidth",ec,2e,e5,97));
	outFields->push(HX_("fieldHeight",41,58,f3,06));
	outFields->push(HX_("autoSize",d0,8f,79,2f));
	outFields->push(HX_("_autoHeight",d5,e5,a0,40));
	outFields->push(HX_("shadowOffset",93,fb,0b,dc));
	outFields->push(HX_("_defaultFormat",19,53,59,36));
	outFields->push(HX_("_formatAdjusted",a4,c9,b6,80));
	outFields->push(HX_("_formatRanges",8c,b9,14,d7));
	outFields->push(HX_("_font",ae,79,d1,f6));
	outFields->push(HX_("_regen",fe,75,a6,e2));
	outFields->push(HX_("_borderPixels",18,bc,51,cc));
	outFields->push(HX_("_borderColorTransform",74,07,2f,6f));
	outFields->push(HX_("_hasBorderAlpha",37,fe,f9,e8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxText_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxText_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsObject /*  ::flixel::text::FlxTextBorderStyle */ ,(int)offsetof(FlxText_obj,borderStyle),HX_("borderStyle",a5,70,96,10)},
	{::hx::fsInt,(int)offsetof(FlxText_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsFloat,(int)offsetof(FlxText_obj,borderSize),HX_("borderSize",cd,ff,ed,06)},
	{::hx::fsFloat,(int)offsetof(FlxText_obj,borderQuality),HX_("borderQuality",33,95,25,79)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(FlxText_obj,textField),HX_("textField",cd,24,81,99)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_autoHeight),HX_("_autoHeight",d5,e5,a0,40)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxText_obj,shadowOffset),HX_("shadowOffset",93,fb,0b,dc)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FlxText_obj,_defaultFormat),HX_("_defaultFormat",19,53,59,36)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FlxText_obj,_formatAdjusted),HX_("_formatAdjusted",a4,c9,b6,80)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxText_obj,_formatRanges),HX_("_formatRanges",8c,b9,14,d7)},
	{::hx::fsString,(int)offsetof(FlxText_obj,_font),HX_("_font",ae,79,d1,f6)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_regen),HX_("_regen",fe,75,a6,e2)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxText_obj,_borderPixels),HX_("_borderPixels",18,bc,51,cc)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxText_obj,_borderColorTransform),HX_("_borderColorTransform",74,07,2f,6f)},
	{::hx::fsBool,(int)offsetof(FlxText_obj,_hasBorderAlpha),HX_("_hasBorderAlpha",37,fe,f9,e8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxText_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxText_obj::VERTICAL_GUTTER,HX_("VERTICAL_GUTTER",04,b3,89,07)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxText_obj_sMemberFields[] = {
	HX_("text",ad,cc,f9,4c),
	HX_("borderStyle",a5,70,96,10),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("borderSize",cd,ff,ed,06),
	HX_("borderQuality",33,95,25,79),
	HX_("textField",cd,24,81,99),
	HX_("_autoHeight",d5,e5,a0,40),
	HX_("shadowOffset",93,fb,0b,dc),
	HX_("_defaultFormat",19,53,59,36),
	HX_("_formatAdjusted",a4,c9,b6,80),
	HX_("_formatRanges",8c,b9,14,d7),
	HX_("_font",ae,79,d1,f6),
	HX_("_regen",fe,75,a6,e2),
	HX_("_borderPixels",18,bc,51,cc),
	HX_("_borderColorTransform",74,07,2f,6f),
	HX_("_hasBorderAlpha",37,fe,f9,e8),
	HX_("destroy",fa,2c,86,24),
	HX_("drawFrame",89,ad,8e,ce),
	HX_("stampOnAtlas",e9,f9,45,2b),
	HX_("applyMarkup",b6,43,6b,f6),
	HX_("addFormat",38,c4,b2,b5),
	HX_("removeFormat",9b,2a,bc,6c),
	HX_("clearFormats",4f,73,ad,ba),
	HX_("setFormat",79,04,36,5d),
	HX_("setBorderStyle",23,ac,54,b8),
	HX_("updateHitbox",81,94,eb,56),
	HX_("getScreenBounds",b7,e4,25,66),
	HX_("set_fieldWidth",a9,9f,fa,2d),
	HX_("get_fieldWidth",35,b7,da,0d),
	HX_("get_fieldHeight",d8,0f,d5,c7),
	HX_("set_fieldHeight",e4,8c,a0,c3),
	HX_("set_autoSize",4d,67,8c,f9),
	HX_("get_autoSize",d9,43,93,e4),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_size",4a,5c,0e,cc),
	HX_("set_size",be,b5,6b,7a),
	HX_("get_letterSpacing",94,c2,73,fb),
	HX_("set_letterSpacing",a0,9a,e1,1e),
	HX_("set_color",c6,b9,56,71),
	HX_("get_font",58,19,7b,c3),
	HX_("set_font",cc,72,d8,71),
	HX_("get_embedded",93,cd,7b,93),
	HX_("get_systemFont",a7,4c,39,68),
	HX_("set_systemFont",1b,35,59,88),
	HX_("get_bold",0e,3d,d6,c0),
	HX_("set_bold",82,96,33,6f),
	HX_("get_italic",b9,9e,eb,f6),
	HX_("set_italic",2d,3d,69,fa),
	HX_("get_underline",e3,e8,34,49),
	HX_("set_underline",ef,ca,3a,8e),
	HX_("get_wordWrap",bd,c8,f4,b5),
	HX_("set_wordWrap",31,ec,ed,ca),
	HX_("get_alignment",ba,b6,a1,ab),
	HX_("set_alignment",c6,98,a7,f0),
	HX_("set_borderStyle",48,a5,43,cd),
	HX_("set_borderColor",7a,71,82,93),
	HX_("set_borderSize",8a,70,03,9d),
	HX_("set_borderQuality",96,78,03,a3),
	HX_("set_graphic",cb,c1,6e,04),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("updateColorTransform",72,0f,d2,2f),
	HX_("regenGraphic",6b,55,39,8b),
	HX_("drawTextFieldTo",04,9e,45,9d),
	HX_("draw",04,2c,70,42),
	HX_("calcFrame",58,93,8c,f9),
	HX_("applyBorderStyle",d7,bd,a2,48),
	HX_("applyBorderTransparency",32,96,af,17),
	HX_("copyTextWithOffset",db,97,6d,53),
	HX_("applyFormats",8e,0d,9c,1e),
	HX_("copyTextFormat",d9,63,8e,5f),
	HX_("dtfCopy",ab,51,45,87),
	HX_("updateDefaultFormat",0f,5b,8e,8b),
	HX_("set_frames",e3,bd,8a,a0),
	::String(null()) };

static void FlxText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxText_obj::VERTICAL_GUTTER,"VERTICAL_GUTTER");
};

#endif

::hx::Class FlxText_obj::__mClass;

static ::String FlxText_obj_sStaticFields[] = {
	HX_("VERTICAL_GUTTER",04,b3,89,07),
	::String(null())
};

void FlxText_obj::__register()
{
	FlxText_obj _hx_dummy;
	FlxText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.text.FlxText",b0,4a,1b,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxText_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxText_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxText_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7d9cf70d988be490_50_boot)
HXDLIN(  50)		VERTICAL_GUTTER = 4;
            	}
}

} // end namespace flixel
} // end namespace text