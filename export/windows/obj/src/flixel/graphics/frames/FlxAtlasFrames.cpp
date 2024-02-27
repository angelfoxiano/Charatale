#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
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
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FlxJsonAsset_Impl_
#include <flixel/system/_FlxAssets/FlxJsonAsset_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system__FlxAssets_FlxXmlAsset_Impl_
#include <flixel/system/_FlxAssets/FlxXmlAsset_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d294561f5bda5770_19_new,"flixel.graphics.frames.FlxAtlasFrames","new",0xed20cbc8,"flixel.graphics.frames.FlxAtlasFrames.new","flixel/graphics/frames/FlxAtlasFrames.hx",19,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_29_destroy,"flixel.graphics.frames.FlxAtlasFrames","destroy",0xdc98fc62,"flixel.graphics.frames.FlxAtlasFrames.destroy","flixel/graphics/frames/FlxAtlasFrames.hx",29,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_408_addBorder,"flixel.graphics.frames.FlxAtlasFrames","addBorder",0x1a31fb55,"flixel.graphics.frames.FlxAtlasFrames.addBorder","flixel/graphics/frames/FlxAtlasFrames.hx",408,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_432_addAtlas,"flixel.graphics.frames.FlxAtlasFrames","addAtlas",0xf89d1f02,"flixel.graphics.frames.FlxAtlasFrames.addAtlas","flixel/graphics/frames/FlxAtlasFrames.hx",432,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_455_concat,"flixel.graphics.frames.FlxAtlasFrames","concat",0x0fd01eac,"flixel.graphics.frames.FlxAtlasFrames.concat","flixel/graphics/frames/FlxAtlasFrames.hx",455,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_51_fromAseprite,"flixel.graphics.frames.FlxAtlasFrames","fromAseprite",0x606b9867,"flixel.graphics.frames.FlxAtlasFrames.fromAseprite","flixel/graphics/frames/FlxAtlasFrames.hx",51,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_68_fromTexturePackerJson,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerJson",0xae76e627,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerJson","flixel/graphics/frames/FlxAtlasFrames.hx",68,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_108_texturePackerHelper,"flixel.graphics.frames.FlxAtlasFrames","texturePackerHelper",0x397d6e77,"flixel.graphics.frames.FlxAtlasFrames.texturePackerHelper","flixel/graphics/frames/FlxAtlasFrames.hx",108,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_140_fromLibGdx,"flixel.graphics.frames.FlxAtlasFrames","fromLibGdx",0x5ef5c818,"flixel.graphics.frames.FlxAtlasFrames.fromLibGdx","flixel/graphics/frames/FlxAtlasFrames.hx",140,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_219_getDimensions,"flixel.graphics.frames.FlxAtlasFrames","getDimensions",0x0a6267eb,"flixel.graphics.frames.FlxAtlasFrames.getDimensions","flixel/graphics/frames/FlxAtlasFrames.hx",219,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_239_fromSparrow,"flixel.graphics.frames.FlxAtlasFrames","fromSparrow",0x30bf432a,"flixel.graphics.frames.FlxAtlasFrames.fromSparrow","flixel/graphics/frames/FlxAtlasFrames.hx",239,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_299_fromTexturePackerXml,"flixel.graphics.frames.FlxAtlasFrames","fromTexturePackerXml",0x5ca98eb8,"flixel.graphics.frames.FlxAtlasFrames.fromTexturePackerXml","flixel/graphics/frames/FlxAtlasFrames.hx",299,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_348_fromSpriteSheetPacker,"flixel.graphics.frames.FlxAtlasFrames","fromSpriteSheetPacker",0x4fb8a81e,"flixel.graphics.frames.FlxAtlasFrames.fromSpriteSheetPacker","flixel/graphics/frames/FlxAtlasFrames.hx",348,0x501ecb67)
HX_LOCAL_STACK_FRAME(_hx_pos_d294561f5bda5770_394_findFrame,"flixel.graphics.frames.FlxAtlasFrames","findFrame",0xf36e229c,"flixel.graphics.frames.FlxAtlasFrames.findFrame","flixel/graphics/frames/FlxAtlasFrames.hx",394,0x501ecb67)
namespace flixel{
namespace graphics{
namespace frames{

void FlxAtlasFrames_obj::__construct( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_19_new)
HXLINE(  21)		this->usedGraphics = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		super::__construct(parent,::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn(),border);
            	}

Dynamic FlxAtlasFrames_obj::__CreateEmpty() { return new FlxAtlasFrames_obj; }

void *FlxAtlasFrames_obj::_hx_vtable = 0;

Dynamic FlxAtlasFrames_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAtlasFrames_obj > _hx_result = new FlxAtlasFrames_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxAtlasFrames_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1ee6bdec) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1ee6bdec;
	} else {
		return inClassId==(int)0x7907b929;
	}
}

void FlxAtlasFrames_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_29_destroy)
HXLINE(  30)		while((this->usedGraphics->length > 0)){
HXLINE(  31)			this->usedGraphics->shift().StaticCast<  ::flixel::graphics::FlxGraphic >()->decrementUseCount();
            		}
HXLINE(  33)		this->super::destroy();
            	}


 ::flixel::graphics::frames::FlxFramesCollection FlxAtlasFrames_obj::addBorder( ::flixel::math::FlxBasePoint border){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_408_addBorder)
HXLINE( 409)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 409)		point->_inPool = false;
HXDLIN( 409)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 409)		point1->_weak = true;
HXDLIN( 409)		 ::flixel::math::FlxBasePoint this1 = point1;
HXDLIN( 409)		 ::flixel::math::FlxBasePoint point2 = this->border;
HXDLIN( 409)		{
HXLINE( 409)			Float y = point2->y;
HXDLIN( 409)			this1->set_x((this1->x + point2->x));
HXDLIN( 409)			this1->set_y((this1->y + y));
            		}
HXDLIN( 409)		if (point2->_weak) {
HXLINE( 409)			point2->put();
            		}
HXDLIN( 409)		 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 409)		{
HXLINE( 409)			Float y1 = border->y;
HXDLIN( 409)			this2->set_x((this2->x + border->x));
HXDLIN( 409)			this2->set_y((this2->y + y1));
            		}
HXDLIN( 409)		if (border->_weak) {
HXLINE( 409)			border->put();
            		}
HXDLIN( 409)		 ::flixel::math::FlxBasePoint resultBorder = this2;
HXLINE( 410)		 ::flixel::graphics::frames::FlxAtlasFrames atlasFrames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(this->parent,resultBorder);
HXLINE( 411)		if (::hx::IsNotNull( atlasFrames )) {
HXLINE( 412)			return atlasFrames;
            		}
HXLINE( 414)		atlasFrames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,this->parent,resultBorder);
HXLINE( 416)		{
HXLINE( 416)			int _g = 0;
HXDLIN( 416)			::Array< ::Dynamic> _g1 = this->frames;
HXDLIN( 416)			while((_g < _g1->length)){
HXLINE( 416)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 416)				_g = (_g + 1);
HXLINE( 417)				atlasFrames->pushFrame(frame->setBorderTo(border,null()),null());
            			}
            		}
HXLINE( 419)		return atlasFrames;
            	}


 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::addAtlas( ::flixel::graphics::frames::FlxAtlasFrames collection,::hx::Null< bool >  __o_overwriteHash){
            		bool overwriteHash = __o_overwriteHash.Default(false);
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_432_addAtlas)
HXLINE( 433)		{
HXLINE( 433)			int _g = 0;
HXDLIN( 433)			::Array< ::Dynamic> _g1 = collection->frames;
HXDLIN( 433)			while((_g < _g1->length)){
HXLINE( 433)				 ::flixel::graphics::frames::FlxFrame frame = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
HXDLIN( 433)				_g = (_g + 1);
HXLINE( 434)				this->pushFrame(frame,overwriteHash);
            			}
            		}
HXLINE( 436)		if (!(this->usedGraphics->contains(collection->parent))) {
HXLINE( 438)			this->usedGraphics->push(collection->parent);
HXLINE( 439)			collection->parent->incrementUseCount();
            		}
HXLINE( 442)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,addAtlas,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::concat( ::flixel::graphics::frames::FlxAtlasFrames collection,::hx::Null< bool >  __o_overwriteHash){
            		bool overwriteHash = __o_overwriteHash.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_455_concat)
HXLINE( 456)		 ::flixel::graphics::frames::FlxAtlasFrames newCollection =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,this->parent,null());
HXLINE( 457)		newCollection->addAtlas(::hx::ObjectPtr<OBJ_>(this),null());
HXLINE( 458)		newCollection->addAtlas(::hx::ObjectPtr<OBJ_>(this),overwriteHash);
HXLINE( 459)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,concat,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromAseprite( ::Dynamic source, ::Dynamic description){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_51_fromAseprite)
HXDLIN(  51)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::fromTexturePackerJson(source,description,true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromAseprite,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerJson( ::Dynamic source, ::Dynamic description,::hx::Null< bool >  __o_useFrameDuration){
            		bool useFrameDuration = __o_useFrameDuration.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_68_fromTexturePackerJson)
HXLINE(  69)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE(  70)		if (::hx::IsNull( graphic )) {
HXLINE(  71)			return null();
            		}
HXLINE(  74)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE(  75)		if (::hx::IsNotNull( frames )) {
HXLINE(  76)			return frames;
            		}
HXLINE(  78)		bool _hx_tmp;
HXDLIN(  78)		if (::hx::IsNotNull( graphic )) {
HXLINE(  78)			_hx_tmp = ::hx::IsNull( description );
            		}
            		else {
HXLINE(  78)			_hx_tmp = true;
            		}
HXDLIN(  78)		if (_hx_tmp) {
HXLINE(  79)			return null();
            		}
HXLINE(  81)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE(  83)		 ::Dynamic data = ::flixel::_hx_system::_FlxAssets::FlxJsonAsset_Impl__obj::getData(description);
HXLINE(  85)		if (::Std_obj::isOfType( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic)),::hx::ArrayBase::__mClass)) {
HXLINE(  87)			int _g = 0;
HXDLIN(  87)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)( ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic))) );
HXDLIN(  87)			while((_g < _g1->length)){
HXLINE(  87)				 ::Dynamic frame = _g1->__get(_g);
HXDLIN(  87)				_g = (_g + 1);
HXLINE(  88)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(( (::String)(frame->__Field(HX_("filename",c7,2e,6a,77),::hx::paccDynamic)) ),frame,frames,useFrameDuration);
            			}
            		}
            		else {
HXLINE(  93)			 ::Dynamic access =  ::Dynamic(data->__Field(HX_("frames",a6,af,85,ac),::hx::paccDynamic));
HXDLIN(  93)			 ::Dynamic _g_access = access;
HXDLIN(  93)			::Array< ::String > _g_keys = ::Reflect_obj::fields(access);
HXDLIN(  93)			int _g_index = 0;
HXDLIN(  93)			while((_g_index < _g_keys->length)){
HXLINE(  93)				_g_index = (_g_index + 1);
HXDLIN(  93)				::String key = _g_keys->__get((_g_index - 1));
HXDLIN(  93)				 ::Dynamic _g1_value = ::Reflect_obj::field(_g_access,key);
HXDLIN(  93)				::String _g1_key = key;
HXDLIN(  93)				::String name = _g1_key;
HXDLIN(  93)				 ::Dynamic frame = _g1_value;
HXLINE(  94)				::flixel::graphics::frames::FlxAtlasFrames_obj::texturePackerHelper(name,frame,frames,useFrameDuration);
            			}
            		}
HXLINE(  97)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAtlasFrames_obj,fromTexturePackerJson,return )

void FlxAtlasFrames_obj::texturePackerHelper(::String frameName, ::Dynamic frameData, ::flixel::graphics::frames::FlxAtlasFrames frames,::hx::Null< bool >  __o_useFrameDuration){
            		bool useFrameDuration = __o_useFrameDuration.Default(false);
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_108_texturePackerHelper)
HXLINE( 109)		bool rotated = ( (bool)(frameData->__Field(HX_("rotated",a9,49,1d,f1),::hx::paccDynamic)) );
HXLINE( 110)		int angle = 0;
HXLINE( 111)		 ::flixel::math::FlxRect frameRect = null();
HXLINE( 113)		 ::Dynamic frame = frameData->__Field(HX_("frame",2d,78,83,06),::hx::paccDynamic);
HXLINE( 114)		if (rotated) {
HXLINE( 116)			Float X = ( (Float)(frame->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 116)			Float Y = ( (Float)(frame->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 116)			Float Width = ( (Float)(frame->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 116)			Float Height = ( (Float)(frame->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 116)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 116)			_this->x = X;
HXDLIN( 116)			_this->y = Y;
HXDLIN( 116)			_this->width = Width;
HXDLIN( 116)			_this->height = Height;
HXDLIN( 116)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 116)			rect->_inPool = false;
HXDLIN( 116)			frameRect = rect;
HXLINE( 117)			angle = -90;
            		}
            		else {
HXLINE( 121)			Float X = ( (Float)(frame->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 121)			Float Y = ( (Float)(frame->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 121)			Float Width = ( (Float)(frame->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 121)			Float Height = ( (Float)(frame->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 121)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 121)			_this->x = X;
HXDLIN( 121)			_this->y = Y;
HXDLIN( 121)			_this->width = Width;
HXDLIN( 121)			_this->height = Height;
HXDLIN( 121)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 121)			rect->_inPool = false;
HXDLIN( 121)			frameRect = rect;
            		}
HXLINE( 124)		Float x = ( (Float)( ::Dynamic(frameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("w",77,00,00,00),::hx::paccDynamic)) );
HXDLIN( 124)		Float y = ( (Float)( ::Dynamic(frameData->__Field(HX_("sourceSize",3c,87,b7,74),::hx::paccDynamic))->__Field(HX_("h",68,00,00,00),::hx::paccDynamic)) );
HXDLIN( 124)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 124)		point->_inPool = false;
HXDLIN( 124)		 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 125)		Float x1 = ( (Float)( ::Dynamic(frameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 125)		Float y1 = ( (Float)( ::Dynamic(frameData->__Field(HX_("spriteSourceSize",a1,7f,c1,03),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 125)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 125)		point1->_inPool = false;
HXDLIN( 125)		 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 126)		Float duration;
HXDLIN( 126)		bool duration1;
HXDLIN( 126)		if (useFrameDuration) {
HXLINE( 126)			duration1 = ::hx::IsNotNull( frameData->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 126)			duration1 = false;
            		}
HXDLIN( 126)		if (duration1) {
HXLINE( 126)			duration = (( (Float)(frameData->__Field(HX_("duration",54,0f,8e,14),::hx::paccDynamic)) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE( 126)			duration = ( (Float)(0) );
            		}
HXLINE( 127)		frames->addAtlasFrame(frameRect,sourceSize,offset,frameName,angle,false,false,duration);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxAtlasFrames_obj,texturePackerHelper,(void))

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromLibGdx( ::Dynamic source,::String description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_140_fromLibGdx)
HXLINE( 141)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 142)		if (::hx::IsNull( graphic )) {
HXLINE( 143)			return null();
            		}
HXLINE( 146)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 147)		if (::hx::IsNotNull( frames )) {
HXLINE( 148)			return frames;
            		}
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		if (::hx::IsNotNull( graphic )) {
HXLINE( 150)			_hx_tmp = ::hx::IsNull( description );
            		}
            		else {
HXLINE( 150)			_hx_tmp = true;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 151)			return null();
            		}
HXLINE( 153)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 155)		if (::openfl::utils::Assets_obj::exists(description,null())) {
HXLINE( 156)			description = ::openfl::utils::Assets_obj::getText(description);
            		}
HXLINE( 158)		::String pack = ::StringTools_obj::trim(description);
HXLINE( 159)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 162)		int repeatLine;
HXDLIN( 162)		if ((lines->__get(3).indexOf(HX_("repeat:",7f,d8,87,a6),null()) > -1)) {
HXLINE( 162)			repeatLine = 3;
            		}
            		else {
HXLINE( 162)			repeatLine = 4;
            		}
HXLINE( 163)		lines->removeRange(0,(repeatLine + 1));
HXLINE( 165)		int numElementsPerImage = 7;
HXLINE( 166)		int numImages = ::Std_obj::_hx_int((( (Float)(lines->length) ) / ( (Float)(numElementsPerImage) )));
HXLINE( 168)		{
HXLINE( 168)			int _g = 0;
HXDLIN( 168)			int _g1 = numImages;
HXDLIN( 168)			while((_g < _g1)){
HXLINE( 168)				_g = (_g + 1);
HXDLIN( 168)				int i = (_g - 1);
HXLINE( 170)				int curIndex = (i * numElementsPerImage);
HXLINE( 172)				curIndex = (curIndex + 1);
HXDLIN( 172)				::String name = lines->__get((curIndex - 1));
HXLINE( 173)				curIndex = (curIndex + 1);
HXDLIN( 173)				bool rotated = (lines->__get((curIndex - 1)).indexOf(HX_("true",4e,a7,03,4d),null()) >= 0);
HXLINE( 174)				int angle;
HXDLIN( 174)				if (rotated) {
HXLINE( 174)					angle = 90;
            				}
            				else {
HXLINE( 174)					angle = 0;
            				}
HXLINE( 176)				curIndex = (curIndex + 1);
HXDLIN( 176)				::String tempString = lines->__get((curIndex - 1));
HXLINE( 177)				 ::Dynamic size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 179)				int imageX = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 180)				int imageY = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 182)				curIndex = (curIndex + 1);
HXDLIN( 182)				tempString = lines->__get((curIndex - 1));
HXLINE( 183)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 185)				int imageWidth = ( (int)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXLINE( 186)				int imageHeight = ( (int)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXLINE( 188)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 188)				_this->x = ( (Float)(imageX) );
HXDLIN( 188)				_this->y = ( (Float)(imageY) );
HXDLIN( 188)				_this->width = ( (Float)(imageWidth) );
HXDLIN( 188)				_this->height = ( (Float)(imageHeight) );
HXDLIN( 188)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 188)				rect->_inPool = false;
HXDLIN( 188)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 190)				curIndex = (curIndex + 1);
HXDLIN( 190)				tempString = lines->__get((curIndex - 1));
HXLINE( 191)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 193)				Float x = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 193)				Float y = ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) );
HXDLIN( 193)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 193)				point->_inPool = false;
HXDLIN( 193)				 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 195)				curIndex = (curIndex + 1);
HXDLIN( 195)				tempString = lines->__get((curIndex - 1));
HXLINE( 196)				size = ::flixel::graphics::frames::FlxAtlasFrames_obj::getDimensions(tempString);
HXLINE( 198)				curIndex = (curIndex + 1);
HXDLIN( 198)				tempString = lines->__get((curIndex - 1));
HXLINE( 199)				 ::Dynamic index = ::Std_obj::parseInt(tempString.split(HX_(":",3a,00,00,00))->__get(1));
HXLINE( 201)				if (::hx::IsNotEq( index,-1 )) {
HXLINE( 202)					name = (name + (HX_("_",5f,00,00,00) + index));
            				}
HXLINE( 208)				Float x1 = ( (Float)(size->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) );
HXDLIN( 208)				Float y1 = ((sourceSize->y - ( (Float)(size->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) )) - ( (Float)(imageHeight) ));
HXDLIN( 208)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 208)				point1->_inPool = false;
HXDLIN( 208)				 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 209)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null(),null());
            			}
            		}
HXLINE( 212)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromLibGdx,return )

 ::Dynamic FlxAtlasFrames_obj::getDimensions(::String line){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_219_getDimensions)
HXLINE( 220)		int colonPosition = line.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 221)		int comaPosition = line.indexOf(HX_(",",2c,00,00,00),null());
HXLINE( 224)		 ::Dynamic _hx_tmp = ::Std_obj::parseInt(line.substring((colonPosition + 1),comaPosition));
HXLINE( 223)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),_hx_tmp)
            			->setFixed(1,HX_("y",79,00,00,00),::Std_obj::parseInt(line.substring((comaPosition + 1),line.length))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAtlasFrames_obj,getDimensions,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSparrow( ::Dynamic source, ::Dynamic xml){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_239_fromSparrow)
HXLINE( 240)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,null(),null());
HXLINE( 241)		if (::hx::IsNull( graphic )) {
HXLINE( 242)			return null();
            		}
HXLINE( 244)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 245)		if (::hx::IsNotNull( frames )) {
HXLINE( 246)			return frames;
            		}
HXLINE( 248)		bool _hx_tmp;
HXDLIN( 248)		if (::hx::IsNotNull( graphic )) {
HXLINE( 248)			_hx_tmp = ::hx::IsNull( xml );
            		}
            		else {
HXLINE( 248)			_hx_tmp = true;
            		}
HXDLIN( 248)		if (_hx_tmp) {
HXLINE( 249)			return null();
            		}
HXLINE( 251)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 253)		 ::Xml x = ::flixel::_hx_system::_FlxAssets::FlxXmlAsset_Impl__obj::getXml(xml)->firstElement();
HXDLIN( 253)		bool _hx_tmp1;
HXDLIN( 253)		if ((x->nodeType != ::Xml_obj::Document)) {
HXLINE( 253)			_hx_tmp1 = (x->nodeType != ::Xml_obj::Element);
            		}
            		else {
HXLINE( 253)			_hx_tmp1 = false;
            		}
HXDLIN( 253)		if (_hx_tmp1) {
HXLINE( 253)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid nodeType ",3b,e0,cb,e1) + ::_Xml::XmlType_Impl__obj::toString(x->nodeType))));
            		}
HXDLIN( 253)		 ::Xml this1 = x;
HXDLIN( 253)		 ::Xml data = this1;
HXLINE( 255)		{
HXLINE( 255)			int _g = 0;
HXDLIN( 255)			::Array< ::Dynamic> _g1 = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(data,HX_("SubTexture",5b,7b,fb,11));
HXDLIN( 255)			while((_g < _g1->length)){
HXLINE( 255)				 ::Xml texture = _g1->__get(_g).StaticCast<  ::Xml >();
HXDLIN( 255)				_g = (_g + 1);
HXLINE( 257)				::String name = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("name",4b,72,ff,48));
HXLINE( 258)				bool trimmed = ::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac));
HXLINE( 259)				bool rotated;
HXDLIN( 259)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1))) {
HXLINE( 259)					rotated = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("rotated",a9,49,1d,f1)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 259)					rotated = false;
            				}
HXLINE( 260)				bool flipX;
HXDLIN( 260)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02))) {
HXLINE( 260)					flipX = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipX",0b,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 260)					flipX = false;
            				}
HXLINE( 261)				bool flipY;
HXDLIN( 261)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02))) {
HXLINE( 261)					flipY = (::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("flipY",0c,45,92,02)) == HX_("true",4e,a7,03,4d));
            				}
            				else {
HXLINE( 261)					flipY = false;
            				}
HXLINE( 263)				Float X = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("x",78,00,00,00)));
HXDLIN( 263)				Float Y = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("y",79,00,00,00)));
HXDLIN( 263)				Float Width = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("width",06,b6,62,ca)));
HXDLIN( 263)				Float Height = ::Std_obj::parseFloat(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("height",e7,07,4c,02)));
HXDLIN( 263)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 263)				_this->x = X;
HXDLIN( 263)				_this->y = Y;
HXDLIN( 263)				_this->width = Width;
HXDLIN( 263)				_this->height = Height;
HXDLIN( 263)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 263)				rect->_inPool = false;
HXDLIN( 263)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 266)				 ::openfl::geom::Rectangle size;
HXDLIN( 266)				if (trimmed) {
HXLINE( 268)					 ::Dynamic size1 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameX",8b,af,85,ac)));
HXDLIN( 268)					 ::Dynamic size2 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameY",8c,af,85,ac)));
HXDLIN( 268)					 ::Dynamic size3 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameWidth",99,ea,88,ad)));
HXLINE( 266)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,size1,size2,size3,::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(texture,HX_("frameHeight",f4,d3,93,e0))));
            				}
            				else {
HXLINE( 266)					size =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,rect1->width,rect1->height);
            				}
HXLINE( 276)				int angle;
HXDLIN( 276)				if (rotated) {
HXLINE( 276)					angle = -90;
            				}
            				else {
HXLINE( 276)					angle = 0;
            				}
HXLINE( 278)				Float x = -(size->get_left());
HXDLIN( 278)				Float y = -(size->get_top());
HXDLIN( 278)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 278)				point->_inPool = false;
HXDLIN( 278)				 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 279)				Float x1 = size->width;
HXDLIN( 279)				Float y1 = size->height;
HXDLIN( 279)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 279)				point1->_inPool = false;
HXDLIN( 279)				 ::flixel::math::FlxBasePoint sourceSize = point1;
HXLINE( 281)				bool _hx_tmp;
HXDLIN( 281)				if (rotated) {
HXLINE( 281)					_hx_tmp = !(trimmed);
            				}
            				else {
HXLINE( 281)					_hx_tmp = false;
            				}
HXDLIN( 281)				if (_hx_tmp) {
HXLINE( 282)					Float y = size->width;
HXDLIN( 282)					sourceSize->set_x(size->height);
HXDLIN( 282)					sourceSize->set_y(y);
            				}
HXLINE( 284)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,flipX,flipY,null());
            			}
            		}
HXLINE( 287)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSparrow,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromTexturePackerXml( ::Dynamic source, ::Dynamic xml){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_299_fromTexturePackerXml)
HXLINE( 300)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(source,false,null());
HXLINE( 301)		if (::hx::IsNull( graphic )) {
HXLINE( 302)			return null();
            		}
HXLINE( 305)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 306)		if (::hx::IsNotNull( frames )) {
HXLINE( 307)			return frames;
            		}
HXLINE( 309)		bool _hx_tmp;
HXDLIN( 309)		if (::hx::IsNotNull( graphic )) {
HXLINE( 309)			_hx_tmp = ::hx::IsNull( xml );
            		}
            		else {
HXLINE( 309)			_hx_tmp = true;
            		}
HXDLIN( 309)		if (_hx_tmp) {
HXLINE( 310)			return null();
            		}
HXLINE( 312)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 314)		 ::Xml data = ::flixel::_hx_system::_FlxAssets::FlxXmlAsset_Impl__obj::getXml(xml);
HXLINE( 316)		{
HXLINE( 316)			 ::Dynamic sprite = data->firstElement()->elements();
HXDLIN( 316)			while(( (bool)(sprite->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 316)				 ::Xml sprite1 = ( ( ::Xml)(sprite->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 318)				bool trimmed;
HXDLIN( 318)				if (!(sprite1->exists(HX_("oX",09,61,00,00)))) {
HXLINE( 318)					trimmed = sprite1->exists(HX_("oY",0a,61,00,00));
            				}
            				else {
HXLINE( 318)					trimmed = true;
            				}
HXLINE( 319)				bool rotated;
HXDLIN( 319)				if (sprite1->exists(HX_("r",72,00,00,00))) {
HXLINE( 319)					rotated = (sprite1->get(HX_("r",72,00,00,00)) == HX_("y",79,00,00,00));
            				}
            				else {
HXLINE( 319)					rotated = false;
            				}
HXLINE( 320)				int angle;
HXDLIN( 320)				if (rotated) {
HXLINE( 320)					angle = -90;
            				}
            				else {
HXLINE( 320)					angle = 0;
            				}
HXLINE( 321)				::String name = sprite1->get(HX_("n",6e,00,00,00));
HXLINE( 322)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(0,0);
HXDLIN( 322)				point->_inPool = false;
HXDLIN( 322)				 ::flixel::math::FlxBasePoint offset = point;
HXLINE( 323)				Float X = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("x",78,00,00,00)))) );
HXDLIN( 323)				Float Y = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("y",79,00,00,00)))) );
HXDLIN( 323)				Float Width = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("w",77,00,00,00)))) );
HXDLIN( 323)				Float Height = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("h",68,00,00,00)))) );
HXDLIN( 323)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 323)				_this->x = X;
HXDLIN( 323)				_this->y = Y;
HXDLIN( 323)				_this->width = Width;
HXDLIN( 323)				_this->height = Height;
HXDLIN( 323)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 323)				rect->_inPool = false;
HXDLIN( 323)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 324)				Float x = rect1->width;
HXDLIN( 324)				Float y = rect1->height;
HXDLIN( 324)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 324)				point1->_inPool = false;
HXDLIN( 324)				 ::flixel::math::FlxBasePoint sourceSize = point1;
HXLINE( 326)				if (trimmed) {
HXLINE( 328)					{
HXLINE( 328)						Float x = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oX",09,61,00,00)))) );
HXDLIN( 328)						Float y = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oY",0a,61,00,00)))) );
HXDLIN( 328)						offset->set_x(x);
HXDLIN( 328)						offset->set_y(y);
            					}
HXLINE( 329)					{
HXLINE( 329)						Float x1 = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oW",08,61,00,00)))) );
HXDLIN( 329)						Float y1 = ( (Float)(::Std_obj::parseInt(sprite1->get(HX_("oH",f9,60,00,00)))) );
HXDLIN( 329)						sourceSize->set_x(x1);
HXDLIN( 329)						sourceSize->set_y(y1);
            					}
            				}
HXLINE( 332)				frames->addAtlasFrame(rect1,sourceSize,offset,name,angle,null(),null(),null());
            			}
            		}
HXLINE( 335)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromTexturePackerXml,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::fromSpriteSheetPacker( ::Dynamic Source,::String Description){
            	HX_GC_STACKFRAME(&_hx_pos_d294561f5bda5770_348_fromSpriteSheetPacker)
HXLINE( 349)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::FlxG_obj::bitmap->add(Source,null(),null());
HXLINE( 350)		if (::hx::IsNull( graphic )) {
HXLINE( 351)			return null();
            		}
HXLINE( 354)		 ::flixel::graphics::frames::FlxAtlasFrames frames = ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(graphic,null());
HXLINE( 355)		if (::hx::IsNotNull( frames )) {
HXLINE( 356)			return frames;
            		}
HXLINE( 358)		bool _hx_tmp;
HXDLIN( 358)		if (::hx::IsNotNull( graphic )) {
HXLINE( 358)			_hx_tmp = ::hx::IsNull( Description );
            		}
            		else {
HXLINE( 358)			_hx_tmp = true;
            		}
HXDLIN( 358)		if (_hx_tmp) {
HXLINE( 359)			return null();
            		}
HXLINE( 361)		frames =  ::flixel::graphics::frames::FlxAtlasFrames_obj::__alloc( HX_CTX ,graphic,null());
HXLINE( 363)		if (::openfl::utils::Assets_obj::exists(Description,null())) {
HXLINE( 364)			Description = ::openfl::utils::Assets_obj::getText(Description);
            		}
HXLINE( 366)		::String pack = ::StringTools_obj::trim(Description);
HXLINE( 367)		::Array< ::String > lines = pack.split(HX_("\n",0a,00,00,00));
HXLINE( 369)		{
HXLINE( 369)			int _g = 0;
HXDLIN( 369)			int _g1 = lines->length;
HXDLIN( 369)			while((_g < _g1)){
HXLINE( 369)				_g = (_g + 1);
HXDLIN( 369)				int i = (_g - 1);
HXLINE( 371)				::Array< ::String > currImageData = lines->__get(i).split(HX_("=",3d,00,00,00));
HXLINE( 372)				::String name = ::StringTools_obj::trim(currImageData->__get(0));
HXLINE( 373)				::Array< ::String > currImageRegion = ::StringTools_obj::trim(currImageData->__get(1)).split(HX_(" ",20,00,00,00));
HXLINE( 375)				Float X = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(0))) );
HXDLIN( 375)				Float Y = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(1))) );
HXDLIN( 375)				Float Width = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(2))) );
HXDLIN( 375)				Float Height = ( (Float)(::Std_obj::parseInt(currImageRegion->__get(3))) );
HXDLIN( 375)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 375)				_this->x = X;
HXDLIN( 375)				_this->y = Y;
HXDLIN( 375)				_this->width = Width;
HXDLIN( 375)				_this->height = Height;
HXDLIN( 375)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 375)				rect->_inPool = false;
HXDLIN( 375)				 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 377)				Float x = rect1->width;
HXDLIN( 377)				Float y = rect1->height;
HXDLIN( 377)				 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 377)				point->_inPool = false;
HXDLIN( 377)				 ::flixel::math::FlxBasePoint sourceSize = point;
HXLINE( 378)				 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 378)				point1->_inPool = false;
HXDLIN( 378)				 ::flixel::math::FlxBasePoint offset = point1;
HXLINE( 380)				frames->addAtlasFrame(rect1,sourceSize,offset,name,0,null(),null(),null());
            			}
            		}
HXLINE( 383)		return frames;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,fromSpriteSheetPacker,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxAtlasFrames_obj::findFrame( ::flixel::graphics::FlxGraphic graphic, ::flixel::math::FlxBasePoint border){
            	HX_STACKFRAME(&_hx_pos_d294561f5bda5770_394_findFrame)
HXLINE( 395)		if (::hx::IsNull( border )) {
HXLINE( 396)			 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 396)			point->_inPool = false;
HXDLIN( 396)			 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 396)			point1->_weak = true;
HXDLIN( 396)			border = point1;
            		}
HXLINE( 398)		 ::flixel::graphics::frames::FlxFrameCollectionType type = ::flixel::graphics::frames::FlxFrameCollectionType_obj::ATLAS_dyn();
HXDLIN( 398)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(graphic->frameCollections->get(type)) );
HXDLIN( 398)		if (::hx::IsNull( collections )) {
HXLINE( 398)			collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 398)			graphic->frameCollections->set(type,collections);
            		}
HXDLIN( 398)		::Array< ::Dynamic> atlasFrames = collections;
HXLINE( 400)		{
HXLINE( 400)			int _g = 0;
HXDLIN( 400)			while((_g < atlasFrames->length)){
HXLINE( 400)				 ::flixel::graphics::frames::FlxAtlasFrames atlas = atlasFrames->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxAtlasFrames >();
HXDLIN( 400)				_g = (_g + 1);
HXLINE( 401)				 ::flixel::math::FlxBasePoint _this = atlas->border;
HXDLIN( 401)				bool result;
HXDLIN( 401)				if ((::Math_obj::abs((_this->x - border->x)) <= ((Float)0.0000001))) {
HXLINE( 401)					result = (::Math_obj::abs((_this->y - border->y)) <= ((Float)0.0000001));
            				}
            				else {
HXLINE( 401)					result = false;
            				}
HXDLIN( 401)				if (border->_weak) {
HXLINE( 401)					border->put();
            				}
HXDLIN( 401)				if (result) {
HXLINE( 402)					return atlas;
            				}
            			}
            		}
HXLINE( 404)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAtlasFrames_obj,findFrame,return )


::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__new( ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	::hx::ObjectPtr< FlxAtlasFrames_obj > __this = new FlxAtlasFrames_obj();
	__this->__construct(parent,border);
	return __this;
}

::hx::ObjectPtr< FlxAtlasFrames_obj > FlxAtlasFrames_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent, ::flixel::math::FlxBasePoint border) {
	FlxAtlasFrames_obj *__this = (FlxAtlasFrames_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAtlasFrames_obj), true, "flixel.graphics.frames.FlxAtlasFrames"));
	*(void **)__this = FlxAtlasFrames_obj::_hx_vtable;
	__this->__construct(parent,border);
	return __this;
}

FlxAtlasFrames_obj::FlxAtlasFrames_obj()
{
}

void FlxAtlasFrames_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAtlasFrames);
	HX_MARK_MEMBER_NAME(usedGraphics,"usedGraphics");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxAtlasFrames_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(usedGraphics,"usedGraphics");
	 ::flixel::graphics::frames::FlxFramesCollection_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxAtlasFrames_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addAtlas") ) { return ::hx::Val( addAtlas_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBorder") ) { return ::hx::Val( addBorder_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usedGraphics") ) { return ::hx::Val( usedGraphics ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxAtlasFrames_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"findFrame") ) { outValue = findFrame_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromLibGdx") ) { outValue = fromLibGdx_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromSparrow") ) { outValue = fromSparrow_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromAseprite") ) { outValue = fromAseprite_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDimensions") ) { outValue = getDimensions_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"texturePackerHelper") ) { outValue = texturePackerHelper_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fromTexturePackerXml") ) { outValue = fromTexturePackerXml_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"fromTexturePackerJson") ) { outValue = fromTexturePackerJson_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromSpriteSheetPacker") ) { outValue = fromSpriteSheetPacker_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxAtlasFrames_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"usedGraphics") ) { usedGraphics=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAtlasFrames_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("usedGraphics",28,4c,2f,20));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxAtlasFrames_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxAtlasFrames_obj,usedGraphics),HX_("usedGraphics",28,4c,2f,20)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxAtlasFrames_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxAtlasFrames_obj_sMemberFields[] = {
	HX_("usedGraphics",28,4c,2f,20),
	HX_("destroy",fa,2c,86,24),
	HX_("addBorder",ed,81,3e,1c),
	HX_("addAtlas",6a,73,3a,a0),
	HX_("concat",14,09,d0,c7),
	::String(null()) };

::hx::Class FlxAtlasFrames_obj::__mClass;

static ::String FlxAtlasFrames_obj_sStaticFields[] = {
	HX_("fromAseprite",cf,40,ef,24),
	HX_("fromTexturePackerJson",bf,f0,7e,be),
	HX_("texturePackerHelper",0f,23,bd,b2),
	HX_("fromLibGdx",80,06,df,27),
	HX_("getDimensions",83,1a,12,39),
	HX_("fromSparrow",c2,9f,ec,33),
	HX_("fromTexturePackerXml",20,df,27,fb),
	HX_("fromSpriteSheetPacker",b6,b2,c0,5f),
	HX_("findFrame",34,a9,7a,f5),
	::String(null())
};

void FlxAtlasFrames_obj::__register()
{
	FlxAtlasFrames_obj _hx_dummy;
	FlxAtlasFrames_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxAtlasFrames",d6,87,d5,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAtlasFrames_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxAtlasFrames_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxAtlasFrames_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAtlasFrames_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAtlasFrames_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames