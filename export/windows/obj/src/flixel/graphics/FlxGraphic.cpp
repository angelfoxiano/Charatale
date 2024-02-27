#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b8710f86d15c371_19_new,"flixel.graphics.FlxGraphic","new",0x02373c99,"flixel.graphics.FlxGraphic.new","flixel/graphics/FlxGraphic.hx",19,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_377_get__imageFrame,"flixel.graphics.FlxGraphic","get__imageFrame",0x2cee2141,"flixel.graphics.FlxGraphic.get__imageFrame","flixel/graphics/FlxGraphic.hx",377,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_378_set__imageFrame,"flixel.graphics.FlxGraphic","set__imageFrame",0x28b99e4d,"flixel.graphics.FlxGraphic.set__imageFrame","flixel/graphics/FlxGraphic.hx",378,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_382_get__useCount,"flixel.graphics.FlxGraphic","get__useCount",0xfd30bfb7,"flixel.graphics.FlxGraphic.get__useCount","flixel/graphics/FlxGraphic.hx",382,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_383_set__useCount,"flixel.graphics.FlxGraphic","set__useCount",0x4236a1c3,"flixel.graphics.FlxGraphic.set__useCount","flixel/graphics/FlxGraphic.hx",383,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_387_get__destroyOnNoUse,"flixel.graphics.FlxGraphic","get__destroyOnNoUse",0xb38d34fc,"flixel.graphics.FlxGraphic.get__destroyOnNoUse","flixel/graphics/FlxGraphic.hx",387,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_388_set__destroyOnNoUse,"flixel.graphics.FlxGraphic","set__destroyOnNoUse",0xf02a2808,"flixel.graphics.FlxGraphic.set__destroyOnNoUse","flixel/graphics/FlxGraphic.hx",388,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_414_dump,"flixel.graphics.FlxGraphic","dump",0xe78dc2db,"flixel.graphics.FlxGraphic.dump","flixel/graphics/FlxGraphic.hx",414,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_428_undump,"flixel.graphics.FlxGraphic","undump",0xf6fcc174,"flixel.graphics.FlxGraphic.undump","flixel/graphics/FlxGraphic.hx",428,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_442_onContext,"flixel.graphics.FlxGraphic","onContext",0x4fa62b89,"flixel.graphics.FlxGraphic.onContext","flixel/graphics/FlxGraphic.hx",442,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_454_onAssetsReload,"flixel.graphics.FlxGraphic","onAssetsReload",0x9c63b062,"flixel.graphics.FlxGraphic.onAssetsReload","flixel/graphics/FlxGraphic.hx",454,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_468_destroy,"flixel.graphics.FlxGraphic","destroy",0x6c66a9b3,"flixel.graphics.FlxGraphic.destroy","flixel/graphics/FlxGraphic.hx",468,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_499_addFrameCollection,"flixel.graphics.FlxGraphic","addFrameCollection",0x06dd03b1,"flixel.graphics.FlxGraphic.addFrameCollection","flixel/graphics/FlxGraphic.hx",499,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_513_getFramesCollections,"flixel.graphics.FlxGraphic","getFramesCollections",0xa4089c80,"flixel.graphics.FlxGraphic.getFramesCollections","flixel/graphics/FlxGraphic.hx",513,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_531_getEmptyFrame,"flixel.graphics.FlxGraphic","getEmptyFrame",0xc5b0f80f,"flixel.graphics.FlxGraphic.getEmptyFrame","flixel/graphics/FlxGraphic.hx",531,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_544_getBitmapFromSystem,"flixel.graphics.FlxGraphic","getBitmapFromSystem",0xb3be27b7,"flixel.graphics.FlxGraphic.getBitmapFromSystem","flixel/graphics/FlxGraphic.hx",544,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_559_get_isLoaded,"flixel.graphics.FlxGraphic","get_isLoaded",0xcad65c3f,"flixel.graphics.FlxGraphic.get_isLoaded","flixel/graphics/FlxGraphic.hx",559,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_564_get_isDestroyed,"flixel.graphics.FlxGraphic","get_isDestroyed",0x1abb03df,"flixel.graphics.FlxGraphic.get_isDestroyed","flixel/graphics/FlxGraphic.hx",564,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_569_get_canBeDumped,"flixel.graphics.FlxGraphic","get_canBeDumped",0x9b8a5e36,"flixel.graphics.FlxGraphic.get_canBeDumped","flixel/graphics/FlxGraphic.hx",569,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_574_incrementUseCount,"flixel.graphics.FlxGraphic","incrementUseCount",0xd3d6ae50,"flixel.graphics.FlxGraphic.incrementUseCount","flixel/graphics/FlxGraphic.hx",574,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_578_decrementUseCount,"flixel.graphics.FlxGraphic","decrementUseCount",0x44622234,"flixel.graphics.FlxGraphic.decrementUseCount","flixel/graphics/FlxGraphic.hx",578,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_586_checkUseCount,"flixel.graphics.FlxGraphic","checkUseCount",0xdc915169,"flixel.graphics.FlxGraphic.checkUseCount","flixel/graphics/FlxGraphic.hx",586,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_591_set_destroyOnNoUse,"flixel.graphics.FlxGraphic","set_destroyOnNoUse",0x5b353e31,"flixel.graphics.FlxGraphic.set_destroyOnNoUse","flixel/graphics/FlxGraphic.hx",591,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_600_get_imageFrame,"flixel.graphics.FlxGraphic","get_imageFrame",0xc1224382,"flixel.graphics.FlxGraphic.get_imageFrame","flixel/graphics/FlxGraphic.hx",600,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_609_get_atlasFrames,"flixel.graphics.FlxGraphic","get_atlasFrames",0x774c10a1,"flixel.graphics.FlxGraphic.get_atlasFrames","flixel/graphics/FlxGraphic.hx",609,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_613_set_bitmap,"flixel.graphics.FlxGraphic","set_bitmap",0x39ee9b13,"flixel.graphics.FlxGraphic.set_bitmap","flixel/graphics/FlxGraphic.hx",613,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_38_fromAssetKey,"flixel.graphics.FlxGraphic","fromAssetKey",0xcea54dc0,"flixel.graphics.FlxGraphic.fromAssetKey","flixel/graphics/FlxGraphic.hx",38,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_74_fromClass,"flixel.graphics.FlxGraphic","fromClass",0x5b653f67,"flixel.graphics.FlxGraphic.fromClass","flixel/graphics/FlxGraphic.hx",74,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_105_fromBitmapData,"flixel.graphics.FlxGraphic","fromBitmapData",0x64c8842a,"flixel.graphics.FlxGraphic.fromBitmapData","flixel/graphics/FlxGraphic.hx",105,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_144_fromFrame,"flixel.graphics.FlxGraphic","fromFrame",0x19903f5c,"flixel.graphics.FlxGraphic.fromFrame","flixel/graphics/FlxGraphic.hx",144,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_174_fromFrames,"flixel.graphics.FlxGraphic","fromFrames",0x44a73197,"flixel.graphics.FlxGraphic.fromFrames","flixel/graphics/FlxGraphic.hx",174,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_188_fromGraphic,"flixel.graphics.FlxGraphic","fromGraphic",0xf9378b97,"flixel.graphics.FlxGraphic.fromGraphic","flixel/graphics/FlxGraphic.hx",188,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_211_fromRectangle,"flixel.graphics.FlxGraphic","fromRectangle",0x6fce5ede,"flixel.graphics.FlxGraphic.fromRectangle","flixel/graphics/FlxGraphic.hx",211,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_232_getBitmap,"flixel.graphics.FlxGraphic","getBitmap",0xcbe6761e,"flixel.graphics.FlxGraphic.getBitmap","flixel/graphics/FlxGraphic.hx",232,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_246_createGraphic,"flixel.graphics.FlxGraphic","createGraphic",0x3eb28085,"flixel.graphics.FlxGraphic.createGraphic","flixel/graphics/FlxGraphic.hx",246,0xb3633517)
HX_LOCAL_STACK_FRAME(_hx_pos_3b8710f86d15c371_25_boot,"flixel.graphics.FlxGraphic","boot",0xe636c9d9,"flixel.graphics.FlxGraphic.boot","flixel/graphics/FlxGraphic.hx",25,0xb3633517)
namespace flixel{
namespace graphics{

void FlxGraphic_obj::__construct(::String key, ::openfl::display::BitmapData bitmap, ::Dynamic persist){
            	HX_GC_STACKFRAME(&_hx_pos_3b8710f86d15c371_19_new)
HXLINE( 369)		this->unique = false;
HXLINE( 338)		this->useCount = 0;
HXLINE( 309)		this->isDumped = false;
HXLINE( 304)		this->destroyOnNoUse = true;
HXLINE( 298)		this->persist = false;
HXLINE( 282)		this->height = 0;
HXLINE( 277)		this->width = 0;
HXLINE( 399)		this->key = key;
HXLINE( 400)		bool _hx_tmp;
HXDLIN( 400)		if (::hx::IsNotNull( persist )) {
HXLINE( 400)			_hx_tmp = ( (bool)(persist) );
            		}
            		else {
HXLINE( 400)			_hx_tmp = ::flixel::graphics::FlxGraphic_obj::defaultPersist;
            		}
HXDLIN( 400)		this->persist = _hx_tmp;
HXLINE( 402)		this->frameCollections =  ::haxe::ds::EnumValueMap_obj::__alloc( HX_CTX );
HXLINE( 403)		this->frameCollectionTypes = ::Array_obj< ::Dynamic>::__new();
HXLINE( 404)		this->set_bitmap(bitmap);
HXLINE( 406)		this->shader =  ::flixel::graphics::tile::FlxGraphicsShader_obj::__alloc( HX_CTX );
            	}

Dynamic FlxGraphic_obj::__CreateEmpty() { return new FlxGraphic_obj; }

void *FlxGraphic_obj::_hx_vtable = 0;

Dynamic FlxGraphic_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGraphic_obj > _hx_result = new FlxGraphic_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxGraphic_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b2fcf89;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_FlxGraphic__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::FlxGraphic_obj::destroy,
};

void *FlxGraphic_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_FlxGraphic__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::graphics::frames::FlxImageFrame FlxGraphic_obj::get__imageFrame(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_377_get__imageFrame)
HXDLIN( 377)		return this->get_imageFrame();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get__imageFrame,return )

 ::flixel::graphics::frames::FlxImageFrame FlxGraphic_obj::set__imageFrame( ::flixel::graphics::frames::FlxImageFrame value){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_378_set__imageFrame)
HXDLIN( 378)		return (this->imageFrame = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set__imageFrame,return )

int FlxGraphic_obj::get__useCount(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_382_get__useCount)
HXDLIN( 382)		return this->useCount;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get__useCount,return )

int FlxGraphic_obj::set__useCount(int value){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_383_set__useCount)
HXDLIN( 383)		return (this->useCount = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set__useCount,return )

bool FlxGraphic_obj::get__destroyOnNoUse(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_387_get__destroyOnNoUse)
HXDLIN( 387)		return this->destroyOnNoUse;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get__destroyOnNoUse,return )

bool FlxGraphic_obj::set__destroyOnNoUse(bool value){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_388_set__destroyOnNoUse)
HXDLIN( 388)		return this->set_destroyOnNoUse(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set__destroyOnNoUse,return )

void FlxGraphic_obj::dump(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_414_dump)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,dump,(void))

void FlxGraphic_obj::undump(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_428_undump)
HXLINE( 429)		 ::openfl::display::BitmapData newBitmap = this->getBitmapFromSystem();
HXLINE( 430)		if (::hx::IsNotNull( newBitmap )) {
HXLINE( 431)			this->set_bitmap(newBitmap);
            		}
HXLINE( 432)		this->isDumped = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,undump,(void))

void FlxGraphic_obj::onContext(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_442_onContext)
HXDLIN( 442)		if (this->isDumped) {
HXLINE( 444)			this->undump();
HXLINE( 445)			this->dump();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,onContext,(void))

void FlxGraphic_obj::onAssetsReload(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_454_onAssetsReload)
HXLINE( 455)		bool _hx_tmp;
HXDLIN( 455)		if (::hx::IsNull( this->assetsClass )) {
HXLINE( 455)			_hx_tmp = ::hx::IsNotNull( this->assetsKey );
            		}
            		else {
HXLINE( 455)			_hx_tmp = true;
            		}
HXDLIN( 455)		if (!(_hx_tmp)) {
HXLINE( 456)			return;
            		}
HXLINE( 458)		bool dumped = this->isDumped;
HXLINE( 459)		this->undump();
HXLINE( 460)		if (dumped) {
HXLINE( 461)			this->dump();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,onAssetsReload,(void))

void FlxGraphic_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_468_destroy)
HXLINE( 469)		this->set_bitmap(::flixel::util::FlxDestroyUtil_obj::dispose(this->bitmap));
HXLINE( 471)		this->shader = null();
HXLINE( 473)		this->key = null();
HXLINE( 474)		this->assetsKey = null();
HXLINE( 475)		this->assetsClass = null();
HXLINE( 476)		this->imageFrame = null();
HXLINE( 478)		if (::hx::IsNull( this->frameCollections )) {
HXLINE( 479)			return;
            		}
HXLINE( 481)		::Array< ::Dynamic> collections;
HXLINE( 482)		{
HXLINE( 482)			int _g = 0;
HXDLIN( 482)			::Array< ::Dynamic> _g1 = this->frameCollectionTypes;
HXDLIN( 482)			while((_g < _g1->length)){
HXLINE( 482)				 ::flixel::graphics::frames::FlxFrameCollectionType collectionType = _g1->__get(_g).StaticCast<  ::flixel::graphics::frames::FlxFrameCollectionType >();
HXDLIN( 482)				_g = (_g + 1);
HXLINE( 484)				collections = ( (::Array< ::Dynamic>)(this->frameCollections->get(collectionType)) );
HXLINE( 485)				::flixel::util::FlxDestroyUtil_obj::destroyArray(collections);
            			}
            		}
HXLINE( 488)		this->frameCollections = null();
HXLINE( 489)		this->frameCollectionTypes = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,destroy,(void))

void FlxGraphic_obj::addFrameCollection( ::flixel::graphics::frames::FlxFramesCollection collection){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_499_addFrameCollection)
HXDLIN( 499)		if (::hx::IsNotNull( collection->type )) {
HXLINE( 501)			 ::flixel::graphics::frames::FlxFrameCollectionType type = collection->type;
HXDLIN( 501)			::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(this->frameCollections->get(type)) );
HXDLIN( 501)			if (::hx::IsNull( collections )) {
HXLINE( 501)				collections = ::Array_obj< ::Dynamic>::__new();
HXDLIN( 501)				this->frameCollections->set(type,collections);
            			}
HXDLIN( 501)			::cpp::VirtualArray collections1 = collections;
HXLINE( 502)			collections1->push(collection);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,addFrameCollection,(void))

::cpp::VirtualArray FlxGraphic_obj::getFramesCollections( ::flixel::graphics::frames::FlxFrameCollectionType type){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_513_getFramesCollections)
HXLINE( 514)		::cpp::VirtualArray collections = ( (::cpp::VirtualArray)(this->frameCollections->get(type)) );
HXLINE( 515)		if (::hx::IsNull( collections )) {
HXLINE( 517)			collections = ::Array_obj< ::Dynamic>::__new();
HXLINE( 518)			this->frameCollections->set(type,collections);
            		}
HXLINE( 520)		return collections;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,getFramesCollections,return )

 ::flixel::graphics::frames::FlxFrame FlxGraphic_obj::getEmptyFrame( ::flixel::math::FlxBasePoint size){
            	HX_GC_STACKFRAME(&_hx_pos_3b8710f86d15c371_531_getEmptyFrame)
HXLINE( 532)		 ::flixel::graphics::frames::FlxFrame frame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),null(),null(),null(),null());
HXLINE( 533)		frame->type = 2;
HXLINE( 534)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 534)		_this->x = ( (Float)(0) );
HXDLIN( 534)		_this->y = ( (Float)(0) );
HXDLIN( 534)		_this->width = ( (Float)(0) );
HXDLIN( 534)		_this->height = ( (Float)(0) );
HXDLIN( 534)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 534)		rect->_inPool = false;
HXDLIN( 534)		frame->set_frame(rect);
HXLINE( 535)		{
HXLINE( 535)			 ::flixel::math::FlxBasePoint this1 = frame->sourceSize;
HXDLIN( 535)			{
HXLINE( 535)				Float y = size->y;
HXDLIN( 535)				this1->set_x(size->x);
HXDLIN( 535)				this1->set_y(y);
            			}
HXDLIN( 535)			if (size->_weak) {
HXLINE( 535)				size->put();
            			}
            		}
HXLINE( 536)		return frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,getEmptyFrame,return )

 ::openfl::display::BitmapData FlxGraphic_obj::getBitmapFromSystem(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_544_getBitmapFromSystem)
HXLINE( 545)		 ::openfl::display::BitmapData newBitmap = null();
HXLINE( 546)		if (::hx::IsNotNull( this->assetsClass )) {
HXLINE( 547)			newBitmap = ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(this->assetsClass,::cpp::VirtualArray_obj::__new(0))) );
            		}
            		else {
HXLINE( 548)			if (::hx::IsNotNull( this->assetsKey )) {
HXLINE( 549)				::String id = this->assetsKey;
HXDLIN( 549)				if (::openfl::utils::Assets_obj::exists(id,null())) {
HXLINE( 549)					newBitmap = ::openfl::utils::Assets_obj::getBitmapData(id,false);
            				}
            				else {
HXLINE( 549)					::flixel::FlxG_obj::log->advanced(((HX_("Could not find a BitmapData asset with ID '",5f,79,a9,21) + id) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXDLIN( 549)					newBitmap = null();
            				}
            			}
            		}
HXLINE( 551)		if (::hx::IsNotNull( newBitmap )) {
HXLINE( 552)			if (this->unique) {
HXLINE( 552)				return newBitmap->clone();
            			}
            			else {
HXLINE( 552)				return newBitmap;
            			}
            		}
HXLINE( 554)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,getBitmapFromSystem,return )

bool FlxGraphic_obj::get_isLoaded(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_559_get_isLoaded)
HXDLIN( 559)		if (::hx::IsNotNull( this->bitmap )) {
HXDLIN( 559)			return !(this->bitmap->rect->isEmpty());
            		}
            		else {
HXDLIN( 559)			return false;
            		}
HXDLIN( 559)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_isLoaded,return )

bool FlxGraphic_obj::get_isDestroyed(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_564_get_isDestroyed)
HXDLIN( 564)		return ::hx::IsNull( this->shader );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_isDestroyed,return )

bool FlxGraphic_obj::get_canBeDumped(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_569_get_canBeDumped)
HXDLIN( 569)		if (::hx::IsNull( this->assetsClass )) {
HXDLIN( 569)			return ::hx::IsNotNull( this->assetsKey );
            		}
            		else {
HXDLIN( 569)			return true;
            		}
HXDLIN( 569)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_canBeDumped,return )

void FlxGraphic_obj::incrementUseCount(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_574_incrementUseCount)
HXDLIN( 574)		this->useCount++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,incrementUseCount,(void))

void FlxGraphic_obj::decrementUseCount(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_578_decrementUseCount)
HXLINE( 579)		this->useCount--;
HXLINE( 581)		this->checkUseCount();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,decrementUseCount,(void))

void FlxGraphic_obj::checkUseCount(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_586_checkUseCount)
HXDLIN( 586)		bool _hx_tmp;
HXDLIN( 586)		bool _hx_tmp1;
HXDLIN( 586)		if ((this->useCount <= 0)) {
HXDLIN( 586)			_hx_tmp1 = this->destroyOnNoUse;
            		}
            		else {
HXDLIN( 586)			_hx_tmp1 = false;
            		}
HXDLIN( 586)		if (_hx_tmp1) {
HXDLIN( 586)			_hx_tmp = !(this->persist);
            		}
            		else {
HXDLIN( 586)			_hx_tmp = false;
            		}
HXDLIN( 586)		if (_hx_tmp) {
HXLINE( 587)			::flixel::FlxG_obj::bitmap->remove(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,checkUseCount,(void))

bool FlxGraphic_obj::set_destroyOnNoUse(bool value){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_591_set_destroyOnNoUse)
HXLINE( 592)		this->destroyOnNoUse = value;
HXLINE( 594)		this->checkUseCount();
HXLINE( 596)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_destroyOnNoUse,return )

 ::flixel::graphics::frames::FlxImageFrame FlxGraphic_obj::get_imageFrame(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_600_get_imageFrame)
HXLINE( 601)		if (::hx::IsNull( this->imageFrame )) {
HXLINE( 602)			Float Width = ( (Float)(this->bitmap->width) );
HXDLIN( 602)			Float Height = ( (Float)(this->bitmap->height) );
HXDLIN( 602)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 602)			_this->x = ( (Float)(0) );
HXDLIN( 602)			_this->y = ( (Float)(0) );
HXDLIN( 602)			_this->width = Width;
HXDLIN( 602)			_this->height = Height;
HXDLIN( 602)			 ::flixel::math::FlxRect rect = _this;
HXDLIN( 602)			rect->_inPool = false;
HXDLIN( 602)			this->imageFrame = ::flixel::graphics::frames::FlxImageFrame_obj::fromRectangle(::hx::ObjectPtr<OBJ_>(this),rect);
            		}
HXLINE( 604)		return this->imageFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_imageFrame,return )

 ::flixel::graphics::frames::FlxAtlasFrames FlxGraphic_obj::get_atlasFrames(){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_609_get_atlasFrames)
HXDLIN( 609)		return ::flixel::graphics::frames::FlxAtlasFrames_obj::findFrame(::hx::ObjectPtr<OBJ_>(this),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGraphic_obj,get_atlasFrames,return )

 ::openfl::display::BitmapData FlxGraphic_obj::set_bitmap( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_613_set_bitmap)
HXLINE( 614)		if (::hx::IsNotNull( value )) {
HXLINE( 616)			this->bitmap = value;
HXLINE( 617)			this->width = this->bitmap->width;
HXLINE( 618)			this->height = this->bitmap->height;
            		}
HXLINE( 621)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGraphic_obj,set_bitmap,return )

bool FlxGraphic_obj::defaultPersist;

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromAssetKey(::String Source,::hx::Null< bool >  __o_Unique,::String Key,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_38_fromAssetKey)
HXLINE(  39)		 ::openfl::display::BitmapData bitmap = null();
HXLINE(  41)		if (!(Cache)) {
HXLINE(  43)			 ::openfl::display::BitmapData bitmap1;
HXDLIN(  43)			if (::openfl::utils::Assets_obj::exists(Source,null())) {
HXLINE(  43)				bitmap1 = ::openfl::utils::Assets_obj::getBitmapData(Source,false);
            			}
            			else {
HXLINE(  43)				::flixel::FlxG_obj::log->advanced(((HX_("Could not find a BitmapData asset with ID '",5f,79,a9,21) + Source) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXDLIN(  43)				bitmap1 = null();
            			}
HXDLIN(  43)			bitmap = bitmap1;
HXLINE(  44)			if (::hx::IsNull( bitmap )) {
HXLINE(  45)				return null();
            			}
HXLINE(  46)			return ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,Key,Unique,Cache);
            		}
HXLINE(  49)		::String key = ::flixel::FlxG_obj::bitmap->generateKey(Source,Key,Unique);
HXLINE(  50)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE(  51)		if (::hx::IsNotNull( graphic )) {
HXLINE(  52)			return graphic;
            		}
HXLINE(  54)		 ::openfl::display::BitmapData bitmap1;
HXDLIN(  54)		if (::openfl::utils::Assets_obj::exists(Source,null())) {
HXLINE(  54)			bitmap1 = ::openfl::utils::Assets_obj::getBitmapData(Source,false);
            		}
            		else {
HXLINE(  54)			::flixel::FlxG_obj::log->advanced(((HX_("Could not find a BitmapData asset with ID '",5f,79,a9,21) + Source) + HX_("'.",27,22,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
HXDLIN(  54)			bitmap1 = null();
            		}
HXDLIN(  54)		bitmap = bitmap1;
HXLINE(  55)		if (::hx::IsNull( bitmap )) {
HXLINE(  56)			return null();
            		}
HXLINE(  58)		graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,Unique,null());
HXLINE(  59)		graphic->assetsKey = Source;
HXLINE(  60)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromAssetKey,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromClass(::hx::Class Source,::hx::Null< bool >  __o_Unique,::String Key,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_74_fromClass)
HXLINE(  75)		 ::openfl::display::BitmapData bitmap = null();
HXLINE(  76)		if (!(Cache)) {
HXLINE(  78)			bitmap = ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(Source,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  79)			return ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,Key,Unique,Cache);
            		}
HXLINE(  82)		 ::flixel::_hx_system::frontEnds::BitmapFrontEnd _this = ::flixel::FlxG_obj::bitmap;
HXDLIN(  82)		::String key = ::Type_obj::getClassName(Source);
HXLINE(  83)		key = ::flixel::FlxG_obj::bitmap->generateKey(key,Key,Unique);
HXLINE(  84)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE(  85)		if (::hx::IsNotNull( graphic )) {
HXLINE(  86)			return graphic;
            		}
HXLINE(  88)		bitmap = ( ( ::openfl::display::BitmapData)(::Type_obj::createInstance(Source,::cpp::VirtualArray_obj::__new(0))) );
HXLINE(  89)		graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,Unique,null());
HXLINE(  90)		graphic->assetsClass = Source;
HXLINE(  91)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromClass,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromBitmapData( ::openfl::display::BitmapData Source,::hx::Null< bool >  __o_Unique,::String Key,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_105_fromBitmapData)
HXLINE( 106)		if (!(Cache)) {
HXLINE( 107)			return ::flixel::graphics::FlxGraphic_obj::createGraphic(Source,Key,Unique,Cache);
            		}
HXLINE( 109)		::String key = ::flixel::FlxG_obj::bitmap->findKeyForBitmap(Source);
HXLINE( 111)		::String assetKey = null();
HXLINE( 112)		::hx::Class assetClass = null();
HXLINE( 113)		 ::flixel::graphics::FlxGraphic graphic = null();
HXLINE( 114)		if (::hx::IsNotNull( key )) {
HXLINE( 116)			graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 117)			assetKey = graphic->assetsKey;
HXLINE( 118)			assetClass = graphic->assetsClass;
            		}
HXLINE( 121)		key = ::flixel::FlxG_obj::bitmap->generateKey(key,Key,Unique);
HXLINE( 122)		graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 123)		if (::hx::IsNotNull( graphic )) {
HXLINE( 124)			return graphic;
            		}
HXLINE( 126)		graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(Source,key,Unique,null());
HXLINE( 127)		graphic->assetsKey = assetKey;
HXLINE( 128)		graphic->assetsClass = assetClass;
HXLINE( 129)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromBitmapData,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromFrame( ::flixel::graphics::frames::FlxFrame Source,::hx::Null< bool >  __o_Unique,::String Key,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_144_fromFrame)
HXLINE( 145)		::String key = Source->name;
HXLINE( 146)		if (::hx::IsNull( key )) {
HXLINE( 147)			 ::flixel::math::FlxRect _this = Source->frame;
HXDLIN( 147)			 ::Dynamic value = _this->x;
HXDLIN( 147)			 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 147)			_this1->label = HX_("x",78,00,00,00);
HXDLIN( 147)			_this1->value = value;
HXDLIN( 147)			 ::Dynamic value1 = _this->y;
HXDLIN( 147)			 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 147)			_this2->label = HX_("y",79,00,00,00);
HXDLIN( 147)			_this2->value = value1;
HXDLIN( 147)			 ::Dynamic value2 = _this->width;
HXDLIN( 147)			 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 147)			_this3->label = HX_("w",77,00,00,00);
HXDLIN( 147)			_this3->value = value2;
HXDLIN( 147)			 ::Dynamic value3 = _this->height;
HXDLIN( 147)			 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 147)			_this4->label = HX_("h",68,00,00,00);
HXDLIN( 147)			_this4->value = value3;
HXDLIN( 147)			key = ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(4)->init(0,_this1)->init(1,_this2)->init(2,_this3)->init(3,_this4));
            		}
HXLINE( 148)		key = ((Source->parent->key + HX_(":",3a,00,00,00)) + key);
HXLINE( 149)		key = ::flixel::FlxG_obj::bitmap->generateKey(key,Key,Unique);
HXLINE( 150)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 151)		if (::hx::IsNotNull( graphic )) {
HXLINE( 152)			return graphic;
            		}
HXLINE( 154)		 ::openfl::display::BitmapData bitmap = Source->paint(null(),null(),null(),null());
HXLINE( 155)		graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,Unique,Cache);
HXLINE( 156)		 ::flixel::graphics::frames::FlxImageFrame image = ::flixel::graphics::frames::FlxImageFrame_obj::fromGraphic(graphic,null());
HXLINE( 157)		image->frames->__get(0).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name = Source->name;
HXLINE( 158)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,fromFrame,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromFrames( ::flixel::graphics::frames::FlxFramesCollection Source,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_174_fromFrames)
HXDLIN( 174)		return ::flixel::graphics::FlxGraphic_obj::fromGraphic(Source->parent,Unique,Key);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromFrames,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromGraphic( ::flixel::graphics::FlxGraphic Source,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_188_fromGraphic)
HXLINE( 189)		if (!(Unique)) {
HXLINE( 190)			return Source;
            		}
HXLINE( 192)		::String key = ::flixel::FlxG_obj::bitmap->generateKey(Source->key,Key,Unique);
HXLINE( 193)		 ::flixel::graphics::FlxGraphic graphic = ::flixel::graphics::FlxGraphic_obj::createGraphic(Source->bitmap,key,Unique,null());
HXLINE( 194)		graphic->unique = Unique;
HXLINE( 195)		graphic->assetsClass = Source->assetsClass;
HXLINE( 196)		graphic->assetsKey = Source->assetsKey;
HXLINE( 197)		::flixel::FlxG_obj::bitmap->_cache->set(graphic->key,graphic);
HXDLIN( 197)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxGraphic_obj,fromGraphic,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::fromRectangle(int Width,int Height,int Color,::hx::Null< bool >  __o_Unique,::String Key){
            		bool Unique = __o_Unique.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_3b8710f86d15c371_211_fromRectangle)
HXLINE( 212)		::String systemKey = ((((Width + HX_("x",78,00,00,00)) + Height) + HX_(":",3a,00,00,00)) + Color);
HXLINE( 213)		::String key = ::flixel::FlxG_obj::bitmap->generateKey(systemKey,Key,Unique);
HXLINE( 215)		 ::flixel::graphics::FlxGraphic graphic = ( ( ::flixel::graphics::FlxGraphic)(::flixel::FlxG_obj::bitmap->_cache->get(key)) );
HXLINE( 216)		if (::hx::IsNotNull( graphic )) {
HXLINE( 217)			return graphic;
            		}
HXLINE( 219)		 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,Width,Height,true,Color);
HXLINE( 220)		return ::flixel::graphics::FlxGraphic_obj::createGraphic(bitmap,key,null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxGraphic_obj,fromRectangle,return )

 ::openfl::display::BitmapData FlxGraphic_obj::getBitmap( ::openfl::display::BitmapData Bitmap,::hx::Null< bool >  __o_Unique){
            		bool Unique = __o_Unique.Default(false);
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_232_getBitmap)
HXDLIN( 232)		if (Unique) {
HXDLIN( 232)			return Bitmap->clone();
            		}
            		else {
HXDLIN( 232)			return Bitmap;
            		}
HXDLIN( 232)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxGraphic_obj,getBitmap,return )

 ::flixel::graphics::FlxGraphic FlxGraphic_obj::createGraphic( ::openfl::display::BitmapData Bitmap,::String Key,::hx::Null< bool >  __o_Unique,::hx::Null< bool >  __o_Cache){
            		bool Unique = __o_Unique.Default(false);
            		bool Cache = __o_Cache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_3b8710f86d15c371_246_createGraphic)
HXLINE( 247)		if (Unique) {
HXLINE( 247)			Bitmap = Bitmap->clone();
            		}
HXLINE( 248)		 ::flixel::graphics::FlxGraphic graphic = null();
HXLINE( 250)		if (Cache) {
HXLINE( 252)			graphic =  ::flixel::graphics::FlxGraphic_obj::__alloc( HX_CTX ,Key,Bitmap,null());
HXLINE( 253)			graphic->unique = Unique;
HXLINE( 254)			::flixel::FlxG_obj::bitmap->_cache->set(graphic->key,graphic);
            		}
            		else {
HXLINE( 258)			graphic =  ::flixel::graphics::FlxGraphic_obj::__alloc( HX_CTX ,null(),Bitmap,null());
            		}
HXLINE( 261)		return graphic;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxGraphic_obj,createGraphic,return )


::hx::ObjectPtr< FlxGraphic_obj > FlxGraphic_obj::__new(::String key, ::openfl::display::BitmapData bitmap, ::Dynamic persist) {
	::hx::ObjectPtr< FlxGraphic_obj > __this = new FlxGraphic_obj();
	__this->__construct(key,bitmap,persist);
	return __this;
}

::hx::ObjectPtr< FlxGraphic_obj > FlxGraphic_obj::__alloc(::hx::Ctx *_hx_ctx,::String key, ::openfl::display::BitmapData bitmap, ::Dynamic persist) {
	FlxGraphic_obj *__this = (FlxGraphic_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGraphic_obj), true, "flixel.graphics.FlxGraphic"));
	*(void **)__this = FlxGraphic_obj::_hx_vtable;
	__this->__construct(key,bitmap,persist);
	return __this;
}

FlxGraphic_obj::FlxGraphic_obj()
{
}

void FlxGraphic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGraphic);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(assetsKey,"assetsKey");
	HX_MARK_MEMBER_NAME(assetsClass,"assetsClass");
	HX_MARK_MEMBER_NAME(persist,"persist");
	HX_MARK_MEMBER_NAME(destroyOnNoUse,"destroyOnNoUse");
	HX_MARK_MEMBER_NAME(isDumped,"isDumped");
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(useCount,"useCount");
	HX_MARK_MEMBER_NAME(imageFrame,"imageFrame");
	HX_MARK_MEMBER_NAME(frameCollections,"frameCollections");
	HX_MARK_MEMBER_NAME(frameCollectionTypes,"frameCollectionTypes");
	HX_MARK_MEMBER_NAME(unique,"unique");
	HX_MARK_END_CLASS();
}

void FlxGraphic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(assetsKey,"assetsKey");
	HX_VISIT_MEMBER_NAME(assetsClass,"assetsClass");
	HX_VISIT_MEMBER_NAME(persist,"persist");
	HX_VISIT_MEMBER_NAME(destroyOnNoUse,"destroyOnNoUse");
	HX_VISIT_MEMBER_NAME(isDumped,"isDumped");
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(useCount,"useCount");
	HX_VISIT_MEMBER_NAME(imageFrame,"imageFrame");
	HX_VISIT_MEMBER_NAME(frameCollections,"frameCollections");
	HX_VISIT_MEMBER_NAME(frameCollectionTypes,"frameCollectionTypes");
	HX_VISIT_MEMBER_NAME(unique,"unique");
}

::hx::Val FlxGraphic_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return ::hx::Val( key ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dump") ) { return ::hx::Val( dump_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return ::hx::Val( bitmap ); }
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"unique") ) { return ::hx::Val( unique ); }
		if (HX_FIELD_EQ(inName,"undump") ) { return ::hx::Val( undump_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { return ::hx::Val( persist ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { return ::hx::Val( isDumped ); }
		if (HX_FIELD_EQ(inName,"isLoaded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isLoaded() ); }
		if (HX_FIELD_EQ(inName,"useCount") ) { return ::hx::Val( useCount ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { return ::hx::Val( assetsKey ); }
		if (HX_FIELD_EQ(inName,"_useCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__useCount() ); }
		if (HX_FIELD_EQ(inName,"onContext") ) { return ::hx::Val( onContext_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageFrame") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_imageFrame() : imageFrame ); }
		if (HX_FIELD_EQ(inName,"set_bitmap") ) { return ::hx::Val( set_bitmap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { return ::hx::Val( assetsClass ); }
		if (HX_FIELD_EQ(inName,"isDestroyed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isDestroyed() ); }
		if (HX_FIELD_EQ(inName,"canBeDumped") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_canBeDumped() ); }
		if (HX_FIELD_EQ(inName,"atlasFrames") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_atlasFrames() ); }
		if (HX_FIELD_EQ(inName,"_imageFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__imageFrame() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_isLoaded") ) { return ::hx::Val( get_isLoaded_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get__useCount") ) { return ::hx::Val( get__useCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"set__useCount") ) { return ::hx::Val( set__useCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEmptyFrame") ) { return ::hx::Val( getEmptyFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkUseCount") ) { return ::hx::Val( checkUseCount_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { return ::hx::Val( destroyOnNoUse ); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return ::hx::Val( onAssetsReload_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imageFrame") ) { return ::hx::Val( get_imageFrame_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get__imageFrame") ) { return ::hx::Val( get__imageFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set__imageFrame") ) { return ::hx::Val( set__imageFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"_destroyOnNoUse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__destroyOnNoUse() ); }
		if (HX_FIELD_EQ(inName,"get_isDestroyed") ) { return ::hx::Val( get_isDestroyed_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_canBeDumped") ) { return ::hx::Val( get_canBeDumped_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_atlasFrames") ) { return ::hx::Val( get_atlasFrames_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frameCollections") ) { return ::hx::Val( frameCollections ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"incrementUseCount") ) { return ::hx::Val( incrementUseCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"decrementUseCount") ) { return ::hx::Val( decrementUseCount_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"addFrameCollection") ) { return ::hx::Val( addFrameCollection_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_destroyOnNoUse") ) { return ::hx::Val( set_destroyOnNoUse_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get__destroyOnNoUse") ) { return ::hx::Val( get__destroyOnNoUse_dyn() ); }
		if (HX_FIELD_EQ(inName,"set__destroyOnNoUse") ) { return ::hx::Val( set__destroyOnNoUse_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBitmapFromSystem") ) { return ::hx::Val( getBitmapFromSystem_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frameCollectionTypes") ) { return ::hx::Val( frameCollectionTypes ); }
		if (HX_FIELD_EQ(inName,"getFramesCollections") ) { return ::hx::Val( getFramesCollections_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxGraphic_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromClass") ) { outValue = fromClass_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromFrame") ) { outValue = fromFrame_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { outValue = getBitmap_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromFrames") ) { outValue = fromFrames_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromGraphic") ) { outValue = fromGraphic_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromAssetKey") ) { outValue = fromAssetKey_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromRectangle") ) { outValue = fromRectangle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createGraphic") ) { outValue = createGraphic_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"defaultPersist") ) { outValue = ( defaultPersist ); return true; }
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { outValue = fromBitmapData_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxGraphic_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_bitmap(inValue.Cast<  ::openfl::display::BitmapData >()) );bitmap=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::flixel::graphics::tile::FlxGraphicsShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"unique") ) { unique=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"persist") ) { persist=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isDumped") ) { isDumped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useCount") ) { useCount=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"assetsKey") ) { assetsKey=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_useCount") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set__useCount(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageFrame") ) { imageFrame=inValue.Cast<  ::flixel::graphics::frames::FlxImageFrame >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetsClass") ) { assetsClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_imageFrame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set__imageFrame(inValue.Cast<  ::flixel::graphics::frames::FlxImageFrame >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyOnNoUse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_destroyOnNoUse(inValue.Cast< bool >()) );destroyOnNoUse=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_destroyOnNoUse") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set__destroyOnNoUse(inValue.Cast< bool >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"frameCollections") ) { frameCollections=inValue.Cast<  ::haxe::ds::EnumValueMap >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frameCollectionTypes") ) { frameCollectionTypes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxGraphic_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"defaultPersist") ) { defaultPersist=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlxGraphic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("key",9f,89,51,00));
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("assetsKey",dc,ec,09,c6));
	outFields->push(HX_("assetsClass",b5,e4,5d,37));
	outFields->push(HX_("persist",14,22,71,83));
	outFields->push(HX_("destroyOnNoUse",0d,ef,5c,a2));
	outFields->push(HX_("isDumped",1d,26,5d,fa));
	outFields->push(HX_("isLoaded",8f,e3,d8,b0));
	outFields->push(HX_("isDestroyed",8f,ee,a7,d2));
	outFields->push(HX_("canBeDumped",e6,48,77,53));
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("useCount",08,a7,ce,11));
	outFields->push(HX_("imageFrame",d2,3e,51,12));
	outFields->push(HX_("atlasFrames",51,fb,38,2f));
	outFields->push(HX_("frameCollections",28,29,8a,63));
	outFields->push(HX_("frameCollectionTypes",8e,07,3e,dd));
	outFields->push(HX_("unique",11,93,92,63));
	outFields->push(HX_("_imageFrame",f1,0b,db,e4));
	outFields->push(HX_("_useCount",67,9e,64,59));
	outFields->push(HX_("_destroyOnNoUse",ac,37,bd,eb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGraphic_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxGraphic_obj,key),HX_("key",9f,89,51,00)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxGraphic_obj,bitmap),HX_("bitmap",ef,0f,0c,f1)},
	{::hx::fsInt,(int)offsetof(FlxGraphic_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(FlxGraphic_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsString,(int)offsetof(FlxGraphic_obj,assetsKey),HX_("assetsKey",dc,ec,09,c6)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FlxGraphic_obj,assetsClass),HX_("assetsClass",b5,e4,5d,37)},
	{::hx::fsBool,(int)offsetof(FlxGraphic_obj,persist),HX_("persist",14,22,71,83)},
	{::hx::fsBool,(int)offsetof(FlxGraphic_obj,destroyOnNoUse),HX_("destroyOnNoUse",0d,ef,5c,a2)},
	{::hx::fsBool,(int)offsetof(FlxGraphic_obj,isDumped),HX_("isDumped",1d,26,5d,fa)},
	{::hx::fsObject /*  ::flixel::graphics::tile::FlxGraphicsShader */ ,(int)offsetof(FlxGraphic_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsInt,(int)offsetof(FlxGraphic_obj,useCount),HX_("useCount",08,a7,ce,11)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxImageFrame */ ,(int)offsetof(FlxGraphic_obj,imageFrame),HX_("imageFrame",d2,3e,51,12)},
	{::hx::fsObject /*  ::haxe::ds::EnumValueMap */ ,(int)offsetof(FlxGraphic_obj,frameCollections),HX_("frameCollections",28,29,8a,63)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxGraphic_obj,frameCollectionTypes),HX_("frameCollectionTypes",8e,07,3e,dd)},
	{::hx::fsBool,(int)offsetof(FlxGraphic_obj,unique),HX_("unique",11,93,92,63)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxGraphic_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlxGraphic_obj::defaultPersist,HX_("defaultPersist",53,7b,b1,b2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxGraphic_obj_sMemberFields[] = {
	HX_("key",9f,89,51,00),
	HX_("bitmap",ef,0f,0c,f1),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("assetsKey",dc,ec,09,c6),
	HX_("assetsClass",b5,e4,5d,37),
	HX_("persist",14,22,71,83),
	HX_("destroyOnNoUse",0d,ef,5c,a2),
	HX_("isDumped",1d,26,5d,fa),
	HX_("shader",25,bf,20,1d),
	HX_("useCount",08,a7,ce,11),
	HX_("imageFrame",d2,3e,51,12),
	HX_("frameCollections",28,29,8a,63),
	HX_("frameCollectionTypes",8e,07,3e,dd),
	HX_("unique",11,93,92,63),
	HX_("get__imageFrame",88,c3,bc,a5),
	HX_("set__imageFrame",94,40,88,a1),
	HX_("get__useCount",3e,72,c8,1a),
	HX_("set__useCount",4a,54,ce,5f),
	HX_("get__destroyOnNoUse",c3,06,c8,76),
	HX_("set__destroyOnNoUse",cf,f9,64,b3),
	HX_("dump",34,7d,72,42),
	HX_("undump",0d,84,47,60),
	HX_("onContext",90,4e,22,f1),
	HX_("onAssetsReload",fb,33,88,63),
	HX_("destroy",fa,2c,86,24),
	HX_("addFrameCollection",ca,c7,4d,c6),
	HX_("getFramesCollections",d9,58,45,b4),
	HX_("getEmptyFrame",96,aa,48,e3),
	HX_("getBitmapFromSystem",7e,f9,f8,76),
	HX_("get_isLoaded",98,97,f2,65),
	HX_("get_isDestroyed",26,a6,89,93),
	HX_("get_canBeDumped",7d,00,59,14),
	HX_("incrementUseCount",57,b0,47,17),
	HX_("decrementUseCount",3b,24,d3,87),
	HX_("checkUseCount",f0,03,29,fa),
	HX_("set_destroyOnNoUse",4a,02,a6,1a),
	HX_("get_imageFrame",1b,c7,46,88),
	HX_("get_atlasFrames",e8,b2,1a,f0),
	HX_("set_bitmap",2c,1e,11,e5),
	::String(null()) };

static void FlxGraphic_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGraphic_obj::defaultPersist,"defaultPersist");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGraphic_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGraphic_obj::defaultPersist,"defaultPersist");
};

#endif

::hx::Class FlxGraphic_obj::__mClass;

static ::String FlxGraphic_obj_sStaticFields[] = {
	HX_("defaultPersist",53,7b,b1,b2),
	HX_("fromAssetKey",19,89,c1,69),
	HX_("fromClass",6e,62,e1,fc),
	HX_("fromBitmapData",c3,07,ed,2b),
	HX_("fromFrame",63,62,0c,bb),
	HX_("fromFrames",b0,b4,c9,ef),
	HX_("fromGraphic",5e,be,47,0c),
	HX_("fromRectangle",65,11,66,8d),
	HX_("getBitmap",25,99,62,6d),
	HX_("createGraphic",0c,33,4a,5c),
	::String(null())
};

void FlxGraphic_obj::__register()
{
	FlxGraphic_obj _hx_dummy;
	FlxGraphic_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.FlxGraphic",27,fc,ac,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGraphic_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxGraphic_obj::__SetStatic;
	__mClass->mMarkFunc = FlxGraphic_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxGraphic_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGraphic_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGraphic_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGraphic_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGraphic_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGraphic_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxGraphic_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3b8710f86d15c371_25_boot)
HXDLIN(  25)		defaultPersist = false;
            	}
}

} // end namespace flixel
} // end namespace graphics