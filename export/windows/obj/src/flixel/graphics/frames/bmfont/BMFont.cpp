#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFont
#include <flixel/graphics/frames/bmfont/BMFont.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontChar
#include <flixel/graphics/frames/bmfont/BMFontChar.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontCommon
#include <flixel/graphics/frames/bmfont/BMFontCommon.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontInfo
#include <flixel/graphics/frames/bmfont/BMFontInfo.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontKerning
#include <flixel/graphics/frames/bmfont/BMFontKerning.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontPage
#include <flixel/graphics/frames/bmfont/BMFontPage.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFont_BMFontFileType
#include <flixel/graphics/frames/bmfont/_BMFont/BMFontFileType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_BMFontXml_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/BMFontXml_Impl_.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_NodeAccess_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/NodeAccess_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4a007ae567d5ade1_17_new,"flixel.graphics.frames.bmfont.BMFont","new",0xcaf476a9,"flixel.graphics.frames.bmfont.BMFont.new","flixel/graphics/frames/bmfont/BMFont.hx",17,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_35_fromXml,"flixel.graphics.frames.bmfont.BMFont","fromXml",0x7f323d56,"flixel.graphics.frames.bmfont.BMFont.fromXml","flixel/graphics/frames/bmfont/BMFont.hx",35,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_52_fromText,"flixel.graphics.frames.bmfont.BMFont","fromText",0xca188c4e,"flixel.graphics.frames.bmfont.BMFont.fromText","flixel/graphics/frames/bmfont/BMFont.hx",52,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_86_fromBytes,"flixel.graphics.frames.bmfont.BMFont","fromBytes",0xbb60f5aa,"flixel.graphics.frames.bmfont.BMFont.fromBytes","flixel/graphics/frames/bmfont/BMFont.hx",86,0x28ad9ee7)
static const int _hx_array_data_e79fee37_9[] = {
	(int)66,(int)77,(int)70,
};
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_125_parse,"flixel.graphics.frames.bmfont.BMFont","parse",0xee231abc,"flixel.graphics.frames.bmfont.BMFont.parse","flixel/graphics/frames/bmfont/BMFont.hx",125,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_139_guessType,"flixel.graphics.frames.bmfont.BMFont","guessType",0x1e68983a,"flixel.graphics.frames.bmfont.BMFont.guessType","flixel/graphics/frames/bmfont/BMFont.hx",139,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_183_safeParseXML,"flixel.graphics.frames.bmfont.BMFont","safeParseXML",0xe4b4f268,"flixel.graphics.frames.bmfont.BMFont.safeParseXML","flixel/graphics/frames/bmfont/BMFont.hx",183,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_195_detectFromText,"flixel.graphics.frames.bmfont.BMFont","detectFromText",0x83d6b511,"flixel.graphics.frames.bmfont.BMFont.detectFromText","flixel/graphics/frames/bmfont/BMFont.hx",195,0x28ad9ee7)
HX_LOCAL_STACK_FRAME(_hx_pos_4a007ae567d5ade1_205_isValidBytes,"flixel.graphics.frames.bmfont.BMFont","isValidBytes",0xde4d62f0,"flixel.graphics.frames.bmfont.BMFont.isValidBytes","flixel/graphics/frames/bmfont/BMFont.hx",205,0x28ad9ee7)
static const int _hx_array_data_e79fee37_16[] = {
	(int)66,(int)77,(int)70,
};
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFont_obj::__construct( ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kerning){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_17_new)
HXLINE(  23)		this->kerning = null();
HXLINE(  27)		this->info = info;
HXLINE(  28)		this->common = common;
HXLINE(  29)		this->pages = pages;
HXLINE(  30)		this->chars = chars;
HXLINE(  31)		this->kerning = kerning;
            	}

Dynamic BMFont_obj::__CreateEmpty() { return new BMFont_obj; }

void *BMFont_obj::_hx_vtable = 0;

Dynamic BMFont_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFont_obj > _hx_result = new BMFont_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool BMFont_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5bdb70e1;
}

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::fromXml( ::Xml xml){
            	HX_GC_STACKFRAME(&_hx_pos_4a007ae567d5ade1_35_fromXml)
HXLINE(  36)		bool _hx_tmp;
HXDLIN(  36)		if ((xml->nodeType != ::Xml_obj::Document)) {
HXLINE(  36)			_hx_tmp = (xml->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE(  36)			_hx_tmp = false;
            		}
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  36)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(xml->nodeType))));
            		}
HXDLIN(  36)		 ::Xml this1 = xml;
HXDLIN(  36)		 ::Xml main = this1;
HXLINE(  37)		 ::flixel::graphics::frames::bmfont::BMFontInfo info = ::flixel::graphics::frames::bmfont::BMFontInfo_obj::fromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("info",6e,38,bb,45)));
HXLINE(  38)		 ::flixel::graphics::frames::bmfont::BMFontCommon common = ::flixel::graphics::frames::bmfont::BMFontCommon_obj::fromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("common",2b,75,2e,c7)));
HXLINE(  39)		::Array< ::Dynamic> pages = ::flixel::graphics::frames::bmfont::BMFontPage_obj::listFromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("pages",44,2b,4d,bd)));
HXLINE(  40)		::Array< ::Dynamic> chars = ::flixel::graphics::frames::bmfont::BMFontChar_obj::listFromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("chars",dd,9c,b3,45)));
HXLINE(  41)		::Array< ::Dynamic> kerning = null();
HXLINE(  43)		if (::flixel::graphics::frames::bmfont::_BMFontXml::BMFontXml_Impl__obj::hasNode(main,HX_("kernings",27,b8,8b,80))) {
HXLINE(  45)			kerning = ::flixel::graphics::frames::bmfont::BMFontKerning_obj::listFromXml(::flixel::graphics::frames::bmfont::_BMFontXml::NodeAccess_Impl__obj::get(main,HX_("kernings",27,b8,8b,80)));
            		}
HXLINE(  48)		return  ::flixel::graphics::frames::bmfont::BMFont_obj::__alloc( HX_CTX ,info,common,pages,chars,kerning);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,fromXml,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::fromText(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_4a007ae567d5ade1_52_fromText)
HXLINE(  53)		 ::flixel::graphics::frames::bmfont::BMFontInfo info = null();
HXLINE(  54)		 ::flixel::graphics::frames::bmfont::BMFontCommon common = null();
HXLINE(  55)		::Array< ::Dynamic> pages = ::Array_obj< ::Dynamic>::__new();
HXLINE(  56)		::Array< ::Dynamic> chars = ::Array_obj< ::Dynamic>::__new();
HXLINE(  57)		::Array< ::Dynamic> kernings = ::Array_obj< ::Dynamic>::__new();
HXLINE(  62)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  62)		{
HXLINE(  62)			int _g1 = 0;
HXDLIN(  62)			::Array< ::String > _g2 = ::StringTools_obj::replace(text,HX_("\r\n",5d,0b,00,00),HX_("\n",0a,00,00,00)).split(HX_("\n",0a,00,00,00));
HXDLIN(  62)			while((_g1 < _g2->length)){
HXLINE(  62)				::String v = _g2->__get(_g1);
HXDLIN(  62)				_g1 = (_g1 + 1);
HXDLIN(  62)				if ((v.length > 0)) {
HXLINE(  62)					_g->push(v);
            				}
            			}
            		}
HXDLIN(  62)		::Array< ::String > lines = _g;
HXLINE(  63)		{
HXLINE(  63)			int _g3 = 0;
HXDLIN(  63)			while((_g3 < lines->length)){
HXLINE(  63)				::String line = lines->__get(_g3);
HXDLIN(  63)				_g3 = (_g3 + 1);
HXLINE(  65)				::String blockType = line.substring(0,line.indexOf(HX_(" ",20,00,00,00),null()));
HXLINE(  66)				::String blockAttrs = line.substring((line.indexOf(HX_(" ",20,00,00,00),null()) + 1),null());
HXLINE(  67)				::String _hx_switch_0 = blockType;
            				if (  (_hx_switch_0==HX_("char",d6,5e,bf,41)) ){
HXLINE(  73)					chars->push(::flixel::graphics::frames::bmfont::BMFontChar_obj::fromText(blockAttrs));
HXDLIN(  73)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("common",2b,75,2e,c7)) ){
HXLINE(  70)					common = ::flixel::graphics::frames::bmfont::BMFontCommon_obj::fromText(blockAttrs);
HXDLIN(  70)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("info",6e,38,bb,45)) ){
HXLINE(  69)					info = ::flixel::graphics::frames::bmfont::BMFontInfo_obj::fromText(blockAttrs);
HXDLIN(  69)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("kerning",cc,ba,37,b0)) ){
HXLINE(  75)					kernings->push(::flixel::graphics::frames::bmfont::BMFontKerning_obj::fromText(blockAttrs));
HXDLIN(  75)					goto _hx_goto_4;
            				}
            				if (  (_hx_switch_0==HX_("page",4f,da,51,4a)) ){
HXLINE(  71)					pages->push(::flixel::graphics::frames::bmfont::BMFontPage_obj::fromText(blockAttrs));
HXDLIN(  71)					goto _hx_goto_4;
            				}
            				_hx_goto_4:;
            			}
            		}
HXLINE(  79)		::Array< ::Dynamic> _hx_tmp;
HXDLIN(  79)		if ((kernings->length > 0)) {
HXLINE(  79)			_hx_tmp = kernings;
            		}
            		else {
HXLINE(  79)			_hx_tmp = null();
            		}
HXDLIN(  79)		return  ::flixel::graphics::frames::bmfont::BMFont_obj::__alloc( HX_CTX ,info,common,pages,chars,_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,fromText,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_4a007ae567d5ade1_86_fromBytes)
HXLINE(  87)		 ::haxe::io::BytesInput bytes1 =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null());
HXLINE(  88)		::Array< int > expectedBytes = ::Array_obj< int >::fromData( _hx_array_data_e79fee37_9,3);
HXLINE(  89)		{
HXLINE(  89)			int _g = 0;
HXDLIN(  89)			while((_g < expectedBytes->length)){
HXLINE(  89)				int b = expectedBytes->__get(_g);
HXDLIN(  89)				_g = (_g + 1);
HXLINE(  91)				int testByte = bytes1->readByte();
HXLINE(  92)				if ((testByte != b)) {
HXLINE(  93)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Invalid binary .fnt file. Found ",18,03,19,53) + testByte) + HX_(", expected ",b4,e5,81,19)) + b)));
            				}
            			}
            		}
HXLINE(  95)		int version = bytes1->readByte();
HXLINE(  96)		if ((version < 3)) {
HXLINE(  98)			::flixel::FlxG_obj::log->advanced(HX_("The BMFont parser is made to work on files with version 3. Using earlier versions can cause issues!",db,84,bd,6a),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            		}
HXLINE( 101)		 ::flixel::graphics::frames::bmfont::BMFontInfo info = null();
HXLINE( 102)		 ::flixel::graphics::frames::bmfont::BMFontCommon common = null();
HXLINE( 103)		::Array< ::Dynamic> pages = null();
HXLINE( 104)		::Array< ::Dynamic> chars = null();
HXLINE( 105)		::Array< ::Dynamic> kerning = null();
HXLINE( 108)		while((bytes1->pos < bytes1->totlen)){
HXLINE( 110)			int blockId = bytes1->readByte();
HXLINE( 111)			switch((int)(blockId)){
            				case (int)1: {
HXLINE( 113)					info = ::flixel::graphics::frames::bmfont::BMFontInfo_obj::fromBytes(bytes1);
            				}
            				break;
            				case (int)2: {
HXLINE( 114)					common = ::flixel::graphics::frames::bmfont::BMFontCommon_obj::fromBytes(bytes1);
            				}
            				break;
            				case (int)3: {
HXLINE( 115)					pages = ::flixel::graphics::frames::bmfont::BMFontPage_obj::listFromBytes(bytes1);
            				}
            				break;
            				case (int)4: {
HXLINE( 116)					chars = ::flixel::graphics::frames::bmfont::BMFontChar_obj::listFromBytes(bytes1);
            				}
            				break;
            				case (int)5: {
HXLINE( 117)					kerning = ::flixel::graphics::frames::bmfont::BMFontKerning_obj::listFromBytes(bytes1);
            				}
            				break;
            			}
            		}
HXLINE( 120)		return  ::flixel::graphics::frames::bmfont::BMFont_obj::__alloc( HX_CTX ,info,common,pages,chars,kerning);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,fromBytes,return )

 ::flixel::graphics::frames::bmfont::BMFont BMFont_obj::parse( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_125_parse)
HXDLIN( 125)		 ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType _g = ::flixel::graphics::frames::bmfont::BMFont_obj::guessType(data);
HXDLIN( 125)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE( 127)				::String text = _g->_hx_getString(0);
HXDLIN( 127)				return ::flixel::graphics::frames::bmfont::BMFont_obj::fromText(text);
            			}
            			break;
            			case (int)1: {
HXLINE( 128)				 ::Xml xml = _g->_hx_getObject(0).StaticCast<  ::Xml >();
HXDLIN( 128)				return ::flixel::graphics::frames::bmfont::BMFont_obj::fromXml(xml);
            			}
            			break;
            			case (int)2: {
HXLINE( 129)				 ::haxe::io::Bytes bytes = _g->_hx_getObject(0).StaticCast<  ::haxe::io::Bytes >();
HXDLIN( 129)				return ::flixel::graphics::frames::bmfont::BMFont_obj::fromBytes(bytes);
            			}
            			break;
            		}
HXLINE( 125)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,parse,return )

 ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BMFont_obj::guessType( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_139_guessType)
HXLINE( 140)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::Xml >())) {
HXLINE( 142)			return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::XML(::hx::TCast<  ::Xml >::cast(data)->firstElement());
            		}
HXLINE( 145)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::haxe::io::Bytes >())) {
HXLINE( 147)			 ::haxe::io::Bytes bytes = ( ( ::haxe::io::Bytes)(data) );
HXLINE( 148)			if (::flixel::graphics::frames::bmfont::BMFont_obj::isValidBytes(bytes)) {
HXLINE( 149)				return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::BINARY(bytes);
            			}
HXLINE( 151)			return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(bytes->toString());
            		}
HXLINE( 154)		if (::Std_obj::isOfType(data,::hx::ClassOf< ::String >())) {
HXLINE( 156)			::String dataStr = ( (::String)(data) );
HXLINE( 157)			if (::openfl::utils::Assets_obj::exists(dataStr,null())) {
HXLINE( 160)				 ::openfl::utils::ByteArrayData bytes = ::openfl::utils::Assets_obj::getBytes(dataStr);
HXLINE( 161)				if (::hx::IsNull( bytes )) {
HXLINE( 162)					return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(::openfl::utils::Assets_obj::getText(dataStr));
            				}
HXLINE( 164)				if (::flixel::graphics::frames::bmfont::BMFont_obj::isValidBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes))) {
HXLINE( 165)					return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::BINARY(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(bytes));
            				}
HXLINE( 167)				return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(bytes->toString());
            			}
            			else {
HXLINE( 172)				return ::flixel::graphics::frames::bmfont::BMFont_obj::detectFromText(dataStr);
            			}
            		}
HXLINE( 176)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid FlxAngelCodeAsset: ",51,07,1f,ee) + ::Std_obj::string(data))));
HXDLIN( 176)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,guessType,return )

 ::Xml BMFont_obj::safeParseXML(::String str){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_183_safeParseXML)
HXDLIN( 183)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 185)			 ::Xml xml = ::Xml_obj::parse(str);
HXLINE( 186)			return xml;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 188)				{
HXLINE( 188)					null();
            				}
HXLINE( 190)				return null();
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 183)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,safeParseXML,return )

 ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType BMFont_obj::detectFromText(::String text){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_195_detectFromText)
HXLINE( 196)		 ::Xml xml = ::flixel::graphics::frames::bmfont::BMFont_obj::safeParseXML(text);
HXLINE( 197)		bool _hx_tmp;
HXDLIN( 197)		if (::hx::IsNotNull( xml )) {
HXLINE( 197)			_hx_tmp = ::hx::IsNotNull( xml->firstElement() );
            		}
            		else {
HXLINE( 197)			_hx_tmp = false;
            		}
HXDLIN( 197)		if (_hx_tmp) {
HXLINE( 199)			return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::XML(xml->firstElement());
            		}
HXLINE( 201)		return ::flixel::graphics::frames::bmfont::_BMFont::BMFontFileType_obj::TEXT(text);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,detectFromText,return )

bool BMFont_obj::isValidBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_4a007ae567d5ade1_205_isValidBytes)
HXLINE( 206)		::Array< int > expected = ::Array_obj< int >::fromData( _hx_array_data_e79fee37_16,3);
HXLINE( 207)		{
HXLINE( 207)			int _g = 0;
HXDLIN( 207)			int _g1 = expected->length;
HXDLIN( 207)			while((_g < _g1)){
HXLINE( 207)				_g = (_g + 1);
HXDLIN( 207)				int i = (_g - 1);
HXLINE( 209)				if ((bytes->b->__get(i) != expected->__get(i))) {
HXLINE( 210)					return false;
            				}
            			}
            		}
HXLINE( 213)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFont_obj,isValidBytes,return )


::hx::ObjectPtr< BMFont_obj > BMFont_obj::__new( ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kerning) {
	::hx::ObjectPtr< BMFont_obj > __this = new BMFont_obj();
	__this->__construct(info,common,pages,chars,kerning);
	return __this;
}

::hx::ObjectPtr< BMFont_obj > BMFont_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::frames::bmfont::BMFontInfo info, ::flixel::graphics::frames::bmfont::BMFontCommon common,::Array< ::Dynamic> pages,::Array< ::Dynamic> chars,::Array< ::Dynamic> kerning) {
	BMFont_obj *__this = (BMFont_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFont_obj), true, "flixel.graphics.frames.bmfont.BMFont"));
	*(void **)__this = BMFont_obj::_hx_vtable;
	__this->__construct(info,common,pages,chars,kerning);
	return __this;
}

BMFont_obj::BMFont_obj()
{
}

void BMFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BMFont);
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(common,"common");
	HX_MARK_MEMBER_NAME(pages,"pages");
	HX_MARK_MEMBER_NAME(chars,"chars");
	HX_MARK_MEMBER_NAME(kerning,"kerning");
	HX_MARK_END_CLASS();
}

void BMFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(common,"common");
	HX_VISIT_MEMBER_NAME(pages,"pages");
	HX_VISIT_MEMBER_NAME(chars,"chars");
	HX_VISIT_MEMBER_NAME(kerning,"kerning");
}

::hx::Val BMFont_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return ::hx::Val( pages ); }
		if (HX_FIELD_EQ(inName,"chars") ) { return ::hx::Val( chars ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"common") ) { return ::hx::Val( common ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { return ::hx::Val( kerning ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFont_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { outValue = fromXml_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromText") ) { outValue = fromText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"guessType") ) { outValue = guessType_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"safeParseXML") ) { outValue = safeParseXML_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValidBytes") ) { outValue = isValidBytes_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"detectFromText") ) { outValue = detectFromText_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFont_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast<  ::flixel::graphics::frames::bmfont::BMFontInfo >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chars") ) { chars=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"common") ) { common=inValue.Cast<  ::flixel::graphics::frames::bmfont::BMFontCommon >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { kerning=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("info",6e,38,bb,45));
	outFields->push(HX_("common",2b,75,2e,c7));
	outFields->push(HX_("pages",44,2b,4d,bd));
	outFields->push(HX_("chars",dd,9c,b3,45));
	outFields->push(HX_("kerning",cc,ba,37,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFont_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::graphics::frames::bmfont::BMFontInfo */ ,(int)offsetof(BMFont_obj,info),HX_("info",6e,38,bb,45)},
	{::hx::fsObject /*  ::flixel::graphics::frames::bmfont::BMFontCommon */ ,(int)offsetof(BMFont_obj,common),HX_("common",2b,75,2e,c7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BMFont_obj,pages),HX_("pages",44,2b,4d,bd)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BMFont_obj,chars),HX_("chars",dd,9c,b3,45)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BMFont_obj,kerning),HX_("kerning",cc,ba,37,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFont_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFont_obj_sMemberFields[] = {
	HX_("info",6e,38,bb,45),
	HX_("common",2b,75,2e,c7),
	HX_("pages",44,2b,4d,bd),
	HX_("chars",dd,9c,b3,45),
	HX_("kerning",cc,ba,37,b0),
	::String(null()) };

::hx::Class BMFont_obj::__mClass;

static ::String BMFont_obj_sStaticFields[] = {
	HX_("fromXml",8d,3e,06,58),
	HX_("fromText",37,9b,c5,aa),
	HX_("fromBytes",a1,f2,20,72),
	HX_("parse",33,90,55,bd),
	HX_("guessType",31,95,28,d5),
	HX_("safeParseXML",d1,29,5e,e4),
	HX_("detectFromText",ba,58,cb,a9),
	HX_("isValidBytes",59,9a,f6,dd),
	::String(null())
};

void BMFont_obj::__register()
{
	BMFont_obj _hx_dummy;
	BMFont_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFont",37,ee,9f,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFont_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFont_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFont_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFont_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFont_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFont_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont