#ifndef INCLUDED_player_CameraFuncs
#define INCLUDED_player_CameraFuncs

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(player,CameraFuncs)

namespace player{


class HXCPP_CLASS_ATTRIBUTES CameraFuncs_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CameraFuncs_obj OBJ_;
		CameraFuncs_obj();

	public:
		enum { _hx_ClassId = 0x3c1c1229 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="player.CameraFuncs")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"player.CameraFuncs"); }

		inline static ::hx::ObjectPtr< CameraFuncs_obj > __new() {
			::hx::ObjectPtr< CameraFuncs_obj > __this = new CameraFuncs_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CameraFuncs_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CameraFuncs_obj *__this = (CameraFuncs_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CameraFuncs_obj), false, "player.CameraFuncs"));
			*(void **)__this = CameraFuncs_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CameraFuncs_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CameraFuncs",aa,7b,01,e1); }

		static void follow( ::flixel::FlxSprite player,Float boundX,Float boundY,Float boundX2,Float boundY2);
		static ::Dynamic follow_dyn();

};

} // end namespace player

#endif /* INCLUDED_player_CameraFuncs */ 