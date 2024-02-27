#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontSpacing
#include <flixel/graphics/frames/bmfont/BMFontSpacing.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_319c3b7c9cf620d2_180_new,"flixel.graphics.frames.bmfont.BMFontSpacing","new",0x120848fe,"flixel.graphics.frames.bmfont.BMFontSpacing.new","flixel/graphics/frames/bmfont/BMFontInfo.hx",180,0x8997cf99)
HX_LOCAL_STACK_FRAME(_hx_pos_319c3b7c9cf620d2_192_fromString,"flixel.graphics.frames.bmfont.BMFontSpacing","fromString",0x93e124fd,"flixel.graphics.frames.bmfont.BMFontSpacing.fromString","flixel/graphics/frames/bmfont/BMFontInfo.hx",192,0x8997cf99)
HX_LOCAL_STACK_FRAME(_hx_pos_319c3b7c9cf620d2_199_fromBytes,"flixel.graphics.frames.bmfont.BMFontSpacing","fromBytes",0x7cbeb5bf,"flixel.graphics.frames.bmfont.BMFontSpacing.fromBytes","flixel/graphics/frames/bmfont/BMFontInfo.hx",199,0x8997cf99)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFontSpacing_obj::__construct(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y){
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_319c3b7c9cf620d2_180_new)
HXLINE( 183)		this->y = 0;
HXLINE( 182)		this->x = 0;
HXLINE( 187)		this->x = x;
HXLINE( 188)		this->y = y;
            	}

Dynamic BMFontSpacing_obj::__CreateEmpty() { return new BMFontSpacing_obj; }

void *BMFontSpacing_obj::_hx_vtable = 0;

Dynamic BMFontSpacing_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFontSpacing_obj > _hx_result = new BMFontSpacing_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BMFontSpacing_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5bd538a2;
}

 ::flixel::graphics::frames::bmfont::BMFontSpacing BMFontSpacing_obj::fromString(::String data){
            	HX_GC_STACKFRAME(&_hx_pos_319c3b7c9cf620d2_192_fromString)
HXLINE( 193)		::Array< ::String > values = data.split(HX_(",",2c,00,00,00));
HXLINE( 194)		 ::Dynamic _g = ::Std_obj::parseInt(values->__get(0));
HXDLIN( 194)		return  ::flixel::graphics::frames::bmfont::BMFontSpacing_obj::__alloc( HX_CTX ,_g,::Std_obj::parseInt(values->__get(1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontSpacing_obj,fromString,return )

 ::flixel::graphics::frames::bmfont::BMFontSpacing BMFontSpacing_obj::fromBytes( ::haxe::io::BytesInput bytes){
            	HX_GC_STACKFRAME(&_hx_pos_319c3b7c9cf620d2_199_fromBytes)
HXDLIN( 199)		int _g = bytes->readByte();
HXDLIN( 199)		return  ::flixel::graphics::frames::bmfont::BMFontSpacing_obj::__alloc( HX_CTX ,_g,bytes->readByte());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontSpacing_obj,fromBytes,return )


BMFontSpacing_obj::BMFontSpacing_obj()
{
}

::hx::Val BMFontSpacing_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFontSpacing_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFontSpacing_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFontSpacing_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFontSpacing_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BMFontSpacing_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(BMFontSpacing_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFontSpacing_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFontSpacing_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	::String(null()) };

::hx::Class BMFontSpacing_obj::__mClass;

static ::String BMFontSpacing_obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	HX_("fromBytes",a1,f2,20,72),
	::String(null())
};

void BMFontSpacing_obj::__register()
{
	BMFontSpacing_obj _hx_dummy;
	BMFontSpacing_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFontSpacing",0c,b2,3c,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFontSpacing_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFontSpacing_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFontSpacing_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFontSpacing_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFontSpacing_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFontSpacing_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont