#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_8_new,"flixel.system.frontEnds.ConsoleFrontEnd","new",0x926b3ea1,"flixel.system.frontEnds.ConsoleFrontEnd.new","flixel/system/frontEnds/ConsoleFrontEnd.hx",8,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_32_registerFunction,"flixel.system.frontEnds.ConsoleFrontEnd","registerFunction",0xa673a5ba,"flixel.system.frontEnds.ConsoleFrontEnd.registerFunction","flixel/system/frontEnds/ConsoleFrontEnd.hx",32,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_45_registerObject,"flixel.system.frontEnds.ConsoleFrontEnd","registerObject",0x557f2ce1,"flixel.system.frontEnds.ConsoleFrontEnd.registerObject","flixel/system/frontEnds/ConsoleFrontEnd.hx",45,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_60_removeObject,"flixel.system.frontEnds.ConsoleFrontEnd","removeObject",0x49e05bc2,"flixel.system.frontEnds.ConsoleFrontEnd.removeObject","flixel/system/frontEnds/ConsoleFrontEnd.hx",60,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_75_removeFunction,"flixel.system.frontEnds.ConsoleFrontEnd","removeFunction",0x58a70edb,"flixel.system.frontEnds.ConsoleFrontEnd.removeFunction","flixel/system/frontEnds/ConsoleFrontEnd.hx",75,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_88_removeByAlias,"flixel.system.frontEnds.ConsoleFrontEnd","removeByAlias",0xd94565d6,"flixel.system.frontEnds.ConsoleFrontEnd.removeByAlias","flixel/system/frontEnds/ConsoleFrontEnd.hx",88,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_100_registerClass,"flixel.system.frontEnds.ConsoleFrontEnd","registerClass",0x3d276456,"flixel.system.frontEnds.ConsoleFrontEnd.registerClass","flixel/system/frontEnds/ConsoleFrontEnd.hx",100,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_113_removeClass,"flixel.system.frontEnds.ConsoleFrontEnd","removeClass",0x920d6c95,"flixel.system.frontEnds.ConsoleFrontEnd.removeClass","flixel/system/frontEnds/ConsoleFrontEnd.hx",113,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_126_registerEnum,"flixel.system.frontEnds.ConsoleFrontEnd","registerEnum",0x8478eca3,"flixel.system.frontEnds.ConsoleFrontEnd.registerEnum","flixel/system/frontEnds/ConsoleFrontEnd.hx",126,0x0ff3a650)
HX_LOCAL_STACK_FRAME(_hx_pos_2427e5c2ee20ebaa_139_removeEnum,"flixel.system.frontEnds.ConsoleFrontEnd","removeEnum",0xe1d6f144,"flixel.system.frontEnds.ConsoleFrontEnd.removeEnum","flixel/system/frontEnds/ConsoleFrontEnd.hx",139,0x0ff3a650)
namespace flixel{
namespace _hx_system{
namespace frontEnds{

void ConsoleFrontEnd_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_8_new)
HXLINE(  21)		this->stepAfterCommand = true;
HXLINE(  13)		this->autoPause = true;
            	}

Dynamic ConsoleFrontEnd_obj::__CreateEmpty() { return new ConsoleFrontEnd_obj; }

void *ConsoleFrontEnd_obj::_hx_vtable = 0;

Dynamic ConsoleFrontEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ConsoleFrontEnd_obj > _hx_result = new ConsoleFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ConsoleFrontEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x536f13b3;
}

void ConsoleFrontEnd_obj::registerFunction(::String alias, ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_32_registerFunction)
HXDLIN(  32)		::flixel::FlxG_obj::game->debugger->console->registerFunction(alias,func,null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleFrontEnd_obj,registerFunction,(void))

void ConsoleFrontEnd_obj::registerObject(::String alias, ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_45_registerObject)
HXDLIN(  45)		::flixel::FlxG_obj::game->debugger->console->registerObject(alias,object);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleFrontEnd_obj,registerObject,(void))

void ConsoleFrontEnd_obj::removeObject( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_60_removeObject)
HXDLIN(  60)		::flixel::FlxG_obj::game->debugger->console->removeObject(object);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,removeObject,(void))

void ConsoleFrontEnd_obj::removeFunction( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_75_removeFunction)
HXDLIN(  75)		::flixel::FlxG_obj::game->debugger->console->removeFunction(func);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,removeFunction,(void))

void ConsoleFrontEnd_obj::removeByAlias(::String alias){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_88_removeByAlias)
HXDLIN(  88)		::flixel::FlxG_obj::game->debugger->console->removeByAlias(alias);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,removeByAlias,(void))

void ConsoleFrontEnd_obj::registerClass(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_100_registerClass)
HXDLIN( 100)		 ::flixel::_hx_system::debug::console::Console _this = ::flixel::FlxG_obj::game->debugger->console;
HXDLIN( 100)		_this->registerObject(::flixel::util::FlxStringUtil_obj::getClassName(c,true),c);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,registerClass,(void))

void ConsoleFrontEnd_obj::removeClass(::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_113_removeClass)
HXDLIN( 113)		 ::flixel::_hx_system::debug::console::Console _this = ::flixel::FlxG_obj::game->debugger->console;
HXDLIN( 113)		_this->removeByAlias(::flixel::util::FlxStringUtil_obj::getClassName(c,true));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,removeClass,(void))

void ConsoleFrontEnd_obj::registerEnum(::hx::Class e){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_126_registerEnum)
HXDLIN( 126)		 ::flixel::_hx_system::debug::console::Console _this = ::flixel::FlxG_obj::game->debugger->console;
HXDLIN( 126)		_this->registerObject(::flixel::util::FlxStringUtil_obj::getEnumName(e,true),e);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,registerEnum,(void))

void ConsoleFrontEnd_obj::removeEnum(::hx::Class e){
            	HX_STACKFRAME(&_hx_pos_2427e5c2ee20ebaa_139_removeEnum)
HXDLIN( 139)		 ::flixel::_hx_system::debug::console::Console _this = ::flixel::FlxG_obj::game->debugger->console;
HXDLIN( 139)		_this->removeByAlias(::flixel::util::FlxStringUtil_obj::getEnumName(e,true));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleFrontEnd_obj,removeEnum,(void))


::hx::ObjectPtr< ConsoleFrontEnd_obj > ConsoleFrontEnd_obj::__new() {
	::hx::ObjectPtr< ConsoleFrontEnd_obj > __this = new ConsoleFrontEnd_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ConsoleFrontEnd_obj > ConsoleFrontEnd_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ConsoleFrontEnd_obj *__this = (ConsoleFrontEnd_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ConsoleFrontEnd_obj), false, "flixel.system.frontEnds.ConsoleFrontEnd"));
	*(void **)__this = ConsoleFrontEnd_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ConsoleFrontEnd_obj::ConsoleFrontEnd_obj()
{
}

::hx::Val ConsoleFrontEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return ::hx::Val( autoPause ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeEnum") ) { return ::hx::Val( removeEnum_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeClass") ) { return ::hx::Val( removeClass_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"removeObject") ) { return ::hx::Val( removeObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerEnum") ) { return ::hx::Val( registerEnum_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeByAlias") ) { return ::hx::Val( removeByAlias_dyn() ); }
		if (HX_FIELD_EQ(inName,"registerClass") ) { return ::hx::Val( registerClass_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerObject") ) { return ::hx::Val( registerObject_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeFunction") ) { return ::hx::Val( removeFunction_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stepAfterCommand") ) { return ::hx::Val( stepAfterCommand ); }
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return ::hx::Val( registerFunction_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ConsoleFrontEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stepAfterCommand") ) { stepAfterCommand=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("autoPause",07,15,63,9b));
	outFields->push(HX_("stepAfterCommand",fb,63,ab,7b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ConsoleFrontEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ConsoleFrontEnd_obj,autoPause),HX_("autoPause",07,15,63,9b)},
	{::hx::fsBool,(int)offsetof(ConsoleFrontEnd_obj,stepAfterCommand),HX_("stepAfterCommand",fb,63,ab,7b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ConsoleFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String ConsoleFrontEnd_obj_sMemberFields[] = {
	HX_("autoPause",07,15,63,9b),
	HX_("stepAfterCommand",fb,63,ab,7b),
	HX_("registerFunction",9b,a8,15,13),
	HX_("registerObject",82,05,81,db),
	HX_("removeObject",23,1a,6d,84),
	HX_("removeFunction",7c,e7,a8,de),
	HX_("removeByAlias",55,3c,df,d9),
	HX_("registerClass",d5,3a,c1,3d),
	HX_("removeClass",54,55,8c,46),
	HX_("registerEnum",04,ab,05,bf),
	HX_("removeEnum",65,a5,35,c0),
	::String(null()) };

::hx::Class ConsoleFrontEnd_obj::__mClass;

void ConsoleFrontEnd_obj::__register()
{
	ConsoleFrontEnd_obj _hx_dummy;
	ConsoleFrontEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.frontEnds.ConsoleFrontEnd",2f,5a,25,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ConsoleFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ConsoleFrontEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ConsoleFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ConsoleFrontEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds