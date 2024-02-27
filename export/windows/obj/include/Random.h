#ifndef INCLUDED_Random
#define INCLUDED_Random

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(Random)



class HXCPP_CLASS_ATTRIBUTES Random_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Random_obj OBJ_;
		Random_obj();

	public:
		enum { _hx_ClassId = 0x4d6e58e3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Random")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Random"); }

		inline static ::hx::ObjectPtr< Random_obj > __new() {
			::hx::ObjectPtr< Random_obj > __this = new Random_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Random_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Random_obj *__this = (Random_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Random_obj), false, "Random"));
			*(void **)__this = Random_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Random_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Random",23,96,23,ec); }

		static bool _hx_bool();
		static ::Dynamic _hx_bool_dyn();

		static int _hx_int(int from,int to);
		static ::Dynamic _hx_int_dyn();

		static Float _hx_float(Float from,Float to);
		static ::Dynamic _hx_float_dyn();

		static ::String string(int length,::String charactersToUse);
		static ::Dynamic string_dyn();

		static  ::Date date( ::Date earliest, ::Date latest);
		static ::Dynamic date_dyn();

		static  ::Dynamic fromArray(::cpp::VirtualArray arr);
		static ::Dynamic fromArray_dyn();

		static ::cpp::VirtualArray shuffle(::cpp::VirtualArray arr);
		static ::Dynamic shuffle_dyn();

		static  ::Dynamic fromIterable( ::Dynamic it);
		static ::Dynamic fromIterable_dyn();

		static  ::Dynamic enumConstructor(::hx::Class e);
		static ::Dynamic enumConstructor_dyn();

};


#endif /* INCLUDED_Random */ 