#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEvent
#include <flixel/input/mouse/FlxMouseEvent.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseEventManager
#include <flixel/input/mouse/FlxMouseEventManager.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7737cad62ef16250_26_new,"flixel.input.mouse.FlxMouseEventManager","new",0xae332b17,"flixel.input.mouse.FlxMouseEventManager.new","flixel/input/mouse/FlxMouseEventManager.hx",26,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_61_destroy,"flixel.input.mouse.FlxMouseEventManager","destroy",0x1c6eaf31,"flixel.input.mouse.FlxMouseEventManager.destroy","flixel/input/mouse/FlxMouseEventManager.hx",61,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_69_update,"flixel.input.mouse.FlxMouseEventManager","update",0x84b077b2,"flixel.input.mouse.FlxMouseEventManager.update","flixel/input/mouse/FlxMouseEventManager.hx",69,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_248_addEvent,"flixel.input.mouse.FlxMouseEventManager","addEvent",0xe2ab5c22,"flixel.input.mouse.FlxMouseEventManager.addEvent","flixel/input/mouse/FlxMouseEventManager.hx",248,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_285_add,"flixel.input.mouse.FlxMouseEventManager","add",0xae294cd8,"flixel.input.mouse.FlxMouseEventManager.add","flixel/input/mouse/FlxMouseEventManager.hx",285,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_296_remove,"flixel.input.mouse.FlxMouseEventManager","remove",0x02338ded,"flixel.input.mouse.FlxMouseEventManager.remove","flixel/input/mouse/FlxMouseEventManager.hx",296,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_312_removeAll,"flixel.input.mouse.FlxMouseEventManager","removeAll",0xef9bd534,"flixel.input.mouse.FlxMouseEventManager.removeAll","flixel/input/mouse/FlxMouseEventManager.hx",312,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_335_reorder,"flixel.input.mouse.FlxMouseEventManager","reorder",0x13a3c632,"flixel.input.mouse.FlxMouseEventManager.reorder","flixel/input/mouse/FlxMouseEventManager.hx",335,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_353_setMouseDownCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseDownCallback",0xe8b31b73,"flixel.input.mouse.FlxMouseEventManager.setMouseDownCallback","flixel/input/mouse/FlxMouseEventManager.hx",353,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_369_setMouseUpCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseUpCallback",0x3b6a476c,"flixel.input.mouse.FlxMouseEventManager.setMouseUpCallback","flixel/input/mouse/FlxMouseEventManager.hx",369,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_386_setMouseClickCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseClickCallback",0x94b58581,"flixel.input.mouse.FlxMouseEventManager.setMouseClickCallback","flixel/input/mouse/FlxMouseEventManager.hx",386,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_403_setMouseDoubleClickCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseDoubleClickCallback",0x553b8ab0,"flixel.input.mouse.FlxMouseEventManager.setMouseDoubleClickCallback","flixel/input/mouse/FlxMouseEventManager.hx",403,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_419_setMouseOverCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseOverCallback",0x088af665,"flixel.input.mouse.FlxMouseEventManager.setMouseOverCallback","flixel/input/mouse/FlxMouseEventManager.hx",419,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_435_setMouseOutCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseOutCallback",0x235b22c7,"flixel.input.mouse.FlxMouseEventManager.setMouseOutCallback","flixel/input/mouse/FlxMouseEventManager.hx",435,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_452_setMouseMoveCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseMoveCallback",0x0da6cd22,"flixel.input.mouse.FlxMouseEventManager.setMouseMoveCallback","flixel/input/mouse/FlxMouseEventManager.hx",452,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_469_setMouseWheelCallback,"flixel.input.mouse.FlxMouseEventManager","setMouseWheelCallback",0x50ce48d4,"flixel.input.mouse.FlxMouseEventManager.setMouseWheelCallback","flixel/input/mouse/FlxMouseEventManager.hx",469,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_484_setObjectMouseEnabled,"flixel.input.mouse.FlxMouseEventManager","setObjectMouseEnabled",0xe24566f4,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseEnabled","flixel/input/mouse/FlxMouseEventManager.hx",484,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_497_isObjectMouseEnabled,"flixel.input.mouse.FlxMouseEventManager","isObjectMouseEnabled",0x6e5fac2e,"flixel.input.mouse.FlxMouseEventManager.isObjectMouseEnabled","flixel/input/mouse/FlxMouseEventManager.hx",497,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_516_setObjectMouseChildren,"flixel.input.mouse.FlxMouseEventManager","setObjectMouseChildren",0x9e2bdb6c,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",516,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_544_isObjectMouseChildren,"flixel.input.mouse.FlxMouseEventManager","isObjectMouseChildren",0xa90e28f2,"flixel.input.mouse.FlxMouseEventManager.isObjectMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",544,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_561_setObjectMouseButtons,"flixel.input.mouse.FlxMouseEventManager","setObjectMouseButtons",0x2e89b4b4,"flixel.input.mouse.FlxMouseEventManager.setObjectMouseButtons","flixel/input/mouse/FlxMouseEventManager.hx",561,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_573_traverseFlxGroup,"flixel.input.mouse.FlxMouseEventManager","traverseFlxGroup",0xb5503c28,"flixel.input.mouse.FlxMouseEventManager.traverseFlxGroup","flixel/input/mouse/FlxMouseEventManager.hx",573,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_593_get,"flixel.input.mouse.FlxMouseEventManager","get",0xae2ddb4d,"flixel.input.mouse.FlxMouseEventManager.get","flixel/input/mouse/FlxMouseEventManager.hx",593,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_611_sortByMouseChildren,"flixel.input.mouse.FlxMouseEventManager","sortByMouseChildren",0x74c04b26,"flixel.input.mouse.FlxMouseEventManager.sortByMouseChildren","flixel/input/mouse/FlxMouseEventManager.hx",611,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_626_clearRegistry,"flixel.input.mouse.FlxMouseEventManager","clearRegistry",0xaf4f39e1,"flixel.input.mouse.FlxMouseEventManager.clearRegistry","flixel/input/mouse/FlxMouseEventManager.hx",626,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_634_checkOverlap,"flixel.input.mouse.FlxMouseEventManager","checkOverlap",0x58381208,"flixel.input.mouse.FlxMouseEventManager.checkOverlap","flixel/input/mouse/FlxMouseEventManager.hx",634,0x750c3856)
HX_LOCAL_STACK_FRAME(_hx_pos_7737cad62ef16250_672_checkOverlapWithPoint,"flixel.input.mouse.FlxMouseEventManager","checkOverlapWithPoint",0x0bd96542,"flixel.input.mouse.FlxMouseEventManager.checkOverlapWithPoint","flixel/input/mouse/FlxMouseEventManager.hx",672,0x750c3856)
namespace flixel{
namespace input{
namespace mouse{

void FlxMouseEventManager_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_26_new)
HXLINE(  42)		this->maxDoubleClickDelay = 500;
HXLINE(  36)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  36)		point->_inPool = false;
HXDLIN(  36)		this->_point = point;
HXLINE(  33)		this->mouseClickedTime = -1;
HXLINE(  31)		this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		this->_downList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  29)		this->_overList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  28)		this->_list = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		super::__construct();
HXLINE(  48)		if (::hx::IsNotNull( this->_list )) {
HXLINE(  50)			this->clearRegistry();
            		}
HXLINE(  52)		this->_list = ::Array_obj< ::Dynamic>::__new();
HXLINE(  53)		this->_overList = ::Array_obj< ::Dynamic>::__new();
HXLINE(  54)		this->_downList = ::Array_obj< ::Dynamic>::__new();
HXLINE(  55)		this->_clickList = ::Array_obj< ::Dynamic>::__new();
HXLINE(  57)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->removeAll_dyn());
            	}

Dynamic FlxMouseEventManager_obj::__CreateEmpty() { return new FlxMouseEventManager_obj; }

void *FlxMouseEventManager_obj::_hx_vtable = 0;

Dynamic FlxMouseEventManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMouseEventManager_obj > _hx_result = new FlxMouseEventManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxMouseEventManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f3827fd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3f3827fd;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxMouseEventManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_61_destroy)
HXLINE(  62)		this->clearRegistry();
HXLINE(  63)		this->_point = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_point)) );
HXLINE(  64)		::flixel::FlxG_obj::signals->preStateSwitch->remove(this->removeAll_dyn());
HXLINE(  65)		this->super::destroy();
            	}


void FlxMouseEventManager_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_69_update)
HXLINE(  70)		this->super::update(elapsed);
HXLINE(  72)		::Array< ::Dynamic> currentOverObjects = ::Array_obj< ::Dynamic>::__new();
HXLINE(  74)		{
HXLINE(  74)			int _g = 0;
HXDLIN(  74)			::Array< ::Dynamic> _g1 = this->_list;
HXDLIN(  74)			while((_g < _g1->length)){
HXLINE(  74)				 ::flixel::input::mouse::FlxMouseEvent event = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN(  74)				_g = (_g + 1);
HXLINE(  76)				bool _hx_tmp;
HXDLIN(  76)				bool _hx_tmp1;
HXDLIN(  76)				bool _hx_tmp2;
HXDLIN(  76)				if (event->object->alive) {
HXLINE(  76)					_hx_tmp2 = !(event->object->exists);
            				}
            				else {
HXLINE(  76)					_hx_tmp2 = true;
            				}
HXDLIN(  76)				if (!(_hx_tmp2)) {
HXLINE(  76)					_hx_tmp1 = !(event->object->visible);
            				}
            				else {
HXLINE(  76)					_hx_tmp1 = true;
            				}
HXDLIN(  76)				if (!(_hx_tmp1)) {
HXLINE(  76)					_hx_tmp = !(event->mouseEnabled);
            				}
            				else {
HXLINE(  76)					_hx_tmp = true;
            				}
HXDLIN(  76)				if (_hx_tmp) {
HXLINE(  78)					continue;
            				}
HXLINE(  81)				if (this->checkOverlap(event)) {
HXLINE(  83)					currentOverObjects->push(event);
HXLINE(  85)					if (!(event->mouseChildren)) {
HXLINE(  87)						goto _hx_goto_2;
            					}
            				}
            			}
            			_hx_goto_2:;
            		}
HXLINE(  93)		{
HXLINE(  93)			int _g2 = 0;
HXDLIN(  93)			::Array< ::Dynamic> _g3 = this->_overList;
HXDLIN(  93)			while((_g2 < _g3->length)){
HXLINE(  93)				 ::flixel::input::mouse::FlxMouseEvent over = _g3->__get(_g2).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN(  93)				_g2 = (_g2 + 1);
HXLINE(  95)				if (::hx::IsNotNull( over->onMouseOut )) {
HXLINE(  99)					bool _hx_tmp;
HXDLIN(  99)					bool _hx_tmp1;
HXDLIN(  99)					if (over->object->exists) {
HXLINE(  99)						_hx_tmp1 = !(over->object->visible);
            					}
            					else {
HXLINE(  99)						_hx_tmp1 = true;
            					}
HXDLIN(  99)					if (!(_hx_tmp1)) {
HXLINE(  99)						_hx_tmp = ::hx::IsNull( this->get(over->object,currentOverObjects) );
            					}
            					else {
HXLINE(  99)						_hx_tmp = true;
            					}
HXDLIN(  99)					if (_hx_tmp) {
HXLINE( 101)						over->onMouseOut(over->object);
            					}
            				}
            			}
            		}
HXLINE( 107)		{
HXLINE( 107)			int _g4 = 0;
HXDLIN( 107)			while((_g4 < currentOverObjects->length)){
HXLINE( 107)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g4).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 107)				_g4 = (_g4 + 1);
HXLINE( 109)				if (::hx::IsNotNull( current->onMouseOver )) {
HXLINE( 111)					bool _hx_tmp;
HXDLIN( 111)					bool _hx_tmp1;
HXDLIN( 111)					if (current->object->exists) {
HXLINE( 111)						_hx_tmp1 = current->object->visible;
            					}
            					else {
HXLINE( 111)						_hx_tmp1 = false;
            					}
HXDLIN( 111)					if (_hx_tmp1) {
HXLINE( 111)						_hx_tmp = ::hx::IsNull( this->get(current->object,this->_overList) );
            					}
            					else {
HXLINE( 111)						_hx_tmp = false;
            					}
HXDLIN( 111)					if (_hx_tmp) {
HXLINE( 113)						current->onMouseOver(current->object);
            					}
            				}
            			}
            		}
HXLINE( 121)		if (!(::flixel::FlxG_obj::mouse->enabled)) {
HXLINE( 122)			return;
            		}
HXLINE( 125)		 ::flixel::input::mouse::FlxMouse _this = ::flixel::FlxG_obj::mouse;
HXDLIN( 125)		bool _hx_tmp;
HXDLIN( 125)		if ((_this->_prevX == _this->x)) {
HXLINE( 125)			_hx_tmp = (_this->_prevY != _this->y);
            		}
            		else {
HXLINE( 125)			_hx_tmp = true;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 127)			int _g = 0;
HXDLIN( 127)			while((_g < currentOverObjects->length)){
HXLINE( 127)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 127)				_g = (_g + 1);
HXLINE( 129)				bool _hx_tmp;
HXDLIN( 129)				bool _hx_tmp1;
HXDLIN( 129)				if (::hx::IsNotNull( current->onMouseMove )) {
HXLINE( 129)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 129)					_hx_tmp1 = false;
            				}
HXDLIN( 129)				if (_hx_tmp1) {
HXLINE( 129)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 129)					_hx_tmp = false;
            				}
HXDLIN( 129)				if (_hx_tmp) {
HXLINE( 131)					current->onMouseMove(current->object);
            				}
            			}
            		}
HXLINE( 137)		{
HXLINE( 137)			int _g5 = 0;
HXDLIN( 137)			while((_g5 < currentOverObjects->length)){
HXLINE( 137)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g5).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 137)				_g5 = (_g5 + 1);
HXLINE( 139)				bool _hx_tmp;
HXDLIN( 139)				bool _hx_tmp1;
HXDLIN( 139)				if (::hx::IsNotNull( current->onMouseDown )) {
HXLINE( 139)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 139)					_hx_tmp1 = false;
            				}
HXDLIN( 139)				if (_hx_tmp1) {
HXLINE( 139)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 139)					_hx_tmp = false;
            				}
HXDLIN( 139)				if (_hx_tmp) {
HXLINE( 141)					int _g = 0;
HXDLIN( 141)					::Array< int > _g1 = current->mouseButtons;
HXDLIN( 141)					while((_g < _g1->length)){
HXLINE( 141)						int buttonID = _g1->__get(_g);
HXDLIN( 141)						_g = (_g + 1);
HXLINE( 143)						if ((::flixel::input::mouse::FlxMouseButton_obj::getByID(buttonID)->current == 2)) {
HXLINE( 145)							current->onMouseDown(current->object);
            						}
            					}
            				}
            			}
            		}
HXLINE( 152)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 154)			int _g = 0;
HXDLIN( 154)			while((_g < currentOverObjects->length)){
HXLINE( 154)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 154)				_g = (_g + 1);
HXLINE( 156)				bool _hx_tmp;
HXDLIN( 156)				bool _hx_tmp1;
HXDLIN( 156)				bool _hx_tmp2;
HXDLIN( 156)				if (::hx::IsNull( current->onMouseClick )) {
HXLINE( 156)					_hx_tmp2 = ::hx::IsNotNull( current->onMouseDoubleClick );
            				}
            				else {
HXLINE( 156)					_hx_tmp2 = true;
            				}
HXDLIN( 156)				if (_hx_tmp2) {
HXLINE( 156)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 156)					_hx_tmp1 = false;
            				}
HXDLIN( 156)				if (_hx_tmp1) {
HXLINE( 156)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 156)					_hx_tmp = false;
            				}
HXDLIN( 156)				if (_hx_tmp) {
HXLINE( 160)					this->_downList->push(current);
            				}
            			}
            		}
HXLINE( 166)		{
HXLINE( 166)			int _g6 = 0;
HXDLIN( 166)			while((_g6 < currentOverObjects->length)){
HXLINE( 166)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g6).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 166)				_g6 = (_g6 + 1);
HXLINE( 168)				bool _hx_tmp;
HXDLIN( 168)				bool _hx_tmp1;
HXDLIN( 168)				if (::hx::IsNotNull( current->onMouseUp )) {
HXLINE( 168)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 168)					_hx_tmp1 = false;
            				}
HXDLIN( 168)				if (_hx_tmp1) {
HXLINE( 168)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 168)					_hx_tmp = false;
            				}
HXDLIN( 168)				if (_hx_tmp) {
HXLINE( 170)					int _g = 0;
HXDLIN( 170)					::Array< int > _g1 = current->mouseButtons;
HXDLIN( 170)					while((_g < _g1->length)){
HXLINE( 170)						int buttonID = _g1->__get(_g);
HXDLIN( 170)						_g = (_g + 1);
HXLINE( 172)						if ((::flixel::input::mouse::FlxMouseButton_obj::getByID(buttonID)->current == -1)) {
HXLINE( 174)							current->onMouseUp(current->object);
            						}
            					}
            				}
            			}
            		}
HXLINE( 182)		bool _hx_tmp1;
HXDLIN( 182)		if ((this->_clickList->length > 0)) {
HXLINE( 182)			_hx_tmp1 = ((::flixel::FlxG_obj::game->ticks - this->mouseClickedTime) > this->maxDoubleClickDelay);
            		}
            		else {
HXLINE( 182)			_hx_tmp1 = false;
            		}
HXDLIN( 182)		if (_hx_tmp1) {
HXLINE( 184)			this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 187)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == -1)) {
HXLINE( 189)			this->mouseClickedTime = ::flixel::FlxG_obj::game->ticks;
HXLINE( 191)			::Array< ::Dynamic> previousClickedObjects = this->_clickList;
HXLINE( 193)			if ((this->_clickList->length > 0)) {
HXLINE( 195)				this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
            			}
HXLINE( 198)			{
HXLINE( 198)				int _g = 0;
HXDLIN( 198)				::Array< ::Dynamic> _g1 = this->_downList;
HXDLIN( 198)				while((_g < _g1->length)){
HXLINE( 198)					 ::flixel::input::mouse::FlxMouseEvent down = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 198)					_g = (_g + 1);
HXLINE( 200)					bool _hx_tmp;
HXDLIN( 200)					bool _hx_tmp1;
HXDLIN( 200)					bool _hx_tmp2;
HXDLIN( 200)					if (::hx::IsNotNull( down->object )) {
HXLINE( 200)						_hx_tmp2 = down->object->exists;
            					}
            					else {
HXLINE( 200)						_hx_tmp2 = false;
            					}
HXDLIN( 200)					if (_hx_tmp2) {
HXLINE( 200)						_hx_tmp1 = down->object->visible;
            					}
            					else {
HXLINE( 200)						_hx_tmp1 = false;
            					}
HXDLIN( 200)					if (_hx_tmp1) {
HXLINE( 200)						_hx_tmp = ::hx::IsNotNull( this->get(down->object,currentOverObjects) );
            					}
            					else {
HXLINE( 200)						_hx_tmp = false;
            					}
HXDLIN( 200)					if (_hx_tmp) {
HXLINE( 205)						if (::hx::IsNotNull( down->onMouseClick )) {
HXLINE( 207)							down->onMouseClick(down->object);
            						}
HXLINE( 210)						if (::hx::IsNotNull( down->onMouseDoubleClick )) {
HXLINE( 212)							if (::hx::IsNotNull( this->get(down->object,previousClickedObjects) )) {
HXLINE( 214)								down->onMouseDoubleClick(down->object);
            							}
            							else {
HXLINE( 218)								this->_clickList->push(down);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 225)		bool _hx_tmp2;
HXDLIN( 225)		if ((this->_downList->length > 0)) {
HXLINE( 225)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 225)			bool _hx_tmp;
HXDLIN( 225)			if ((_this->current != 1)) {
HXLINE( 225)				_hx_tmp = (_this->current == 2);
            			}
            			else {
HXLINE( 225)				_hx_tmp = true;
            			}
HXDLIN( 225)			_hx_tmp2 = !(_hx_tmp);
            		}
            		else {
HXLINE( 225)			_hx_tmp2 = false;
            		}
HXDLIN( 225)		if (_hx_tmp2) {
HXLINE( 228)			this->_downList = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 232)		if ((::flixel::FlxG_obj::mouse->wheel != 0)) {
HXLINE( 234)			int _g = 0;
HXDLIN( 234)			while((_g < currentOverObjects->length)){
HXLINE( 234)				 ::flixel::input::mouse::FlxMouseEvent current = currentOverObjects->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 234)				_g = (_g + 1);
HXLINE( 236)				bool _hx_tmp;
HXDLIN( 236)				bool _hx_tmp1;
HXDLIN( 236)				if (::hx::IsNotNull( current->onMouseWheel )) {
HXLINE( 236)					_hx_tmp1 = current->object->exists;
            				}
            				else {
HXLINE( 236)					_hx_tmp1 = false;
            				}
HXDLIN( 236)				if (_hx_tmp1) {
HXLINE( 236)					_hx_tmp = current->object->visible;
            				}
            				else {
HXLINE( 236)					_hx_tmp = false;
            				}
HXDLIN( 236)				if (_hx_tmp) {
HXLINE( 238)					current->onMouseWheel(current->object);
            				}
            			}
            		}
HXLINE( 244)		this->_overList = currentOverObjects;
            	}


 ::flixel::input::mouse::FlxMouseEvent FlxMouseEventManager_obj::addEvent( ::flixel::input::mouse::FlxMouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_248_addEvent)
HXLINE( 249)		if (!(event->mouseChildren)) {
HXLINE( 251)			this->_list->unshift(event);
            		}
            		else {
HXLINE( 256)			int index = 0;
HXLINE( 258)			while(true){
HXLINE( 258)				bool _hx_tmp;
HXDLIN( 258)				if ((index < this->_list->length)) {
HXLINE( 258)					_hx_tmp = !(this->_list->__get(index).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >()->mouseChildren);
            				}
            				else {
HXLINE( 258)					_hx_tmp = false;
            				}
HXDLIN( 258)				if (!(_hx_tmp)) {
HXLINE( 258)					goto _hx_goto_14;
            				}
HXLINE( 259)				index = (index + 1);
            			}
            			_hx_goto_14:;
HXLINE( 261)			this->_list->insert(index,event);
            		}
HXLINE( 264)		return event;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,addEvent,return )

 ::Dynamic FlxMouseEventManager_obj::add( ::Dynamic object, ::Dynamic onMouseDown, ::Dynamic onMouseUp, ::Dynamic onMouseOver, ::Dynamic onMouseOut,::hx::Null< bool >  __o_mouseChildren,::hx::Null< bool >  __o_mouseEnabled,::hx::Null< bool >  __o_pixelPerfect,::Array< int > mouseButtons){
            		bool mouseChildren = __o_mouseChildren.Default(false);
            		bool mouseEnabled = __o_mouseEnabled.Default(true);
            		bool pixelPerfect = __o_pixelPerfect.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_7737cad62ef16250_285_add)
HXLINE( 286)		 ::flixel::input::mouse::FlxMouseEvent event =  ::flixel::input::mouse::FlxMouseEvent_obj::__alloc( HX_CTX ,object,onMouseDown,onMouseUp,onMouseOver,onMouseOut,mouseChildren,mouseEnabled,pixelPerfect,mouseButtons);
HXLINE( 287)		this->addEvent(event);
HXLINE( 289)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC9(FlxMouseEventManager_obj,add,return )

 ::Dynamic FlxMouseEventManager_obj::remove( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_296_remove)
HXLINE( 297)		{
HXLINE( 297)			int _g = 0;
HXDLIN( 297)			::Array< ::Dynamic> _g1 = this->_list;
HXDLIN( 297)			while((_g < _g1->length)){
HXLINE( 297)				 ::flixel::input::mouse::FlxMouseEvent event = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 297)				_g = (_g + 1);
HXLINE( 299)				if (::hx::IsInstanceEq( event->object,object )) {
HXLINE( 301)					event->destroy();
HXLINE( 302)					this->_list->remove(event);
            				}
            			}
            		}
HXLINE( 305)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,remove,return )

void FlxMouseEventManager_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_312_removeAll)
HXLINE( 313)		if (::hx::IsNotNull( this->_list )) {
HXLINE( 315)			int _g = 0;
HXDLIN( 315)			::Array< ::Dynamic> _g1 = this->_list;
HXDLIN( 315)			while((_g < _g1->length)){
HXLINE( 315)				 ::flixel::input::mouse::FlxMouseEvent event = _g1->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 315)				_g = (_g + 1);
HXLINE( 317)				event->destroy();
            			}
            		}
HXLINE( 321)		this->_list->removeRange(0,this->_list->length);
HXLINE( 322)		this->_overList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 323)		this->_downList = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 324)		this->_clickList = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,removeAll,(void))

void FlxMouseEventManager_obj::reorder(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_335_reorder)
HXLINE( 336)		::Array< ::Dynamic> orderedObjects = ::Array_obj< ::Dynamic>::__new();
HXLINE( 338)		this->traverseFlxGroup(::flixel::FlxG_obj::game->_state,orderedObjects);
HXLINE( 340)		orderedObjects->reverse();
HXLINE( 341)		this->_list = orderedObjects;
HXLINE( 343)		::haxe::ds::ArraySort_obj::sort(this->_list,this->sortByMouseChildren_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,reorder,(void))

void FlxMouseEventManager_obj::setMouseDownCallback( ::Dynamic object, ::Dynamic onMouseDown){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_353_setMouseDownCallback)
HXLINE( 354)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 356)		if (::hx::IsNotNull( event )) {
HXLINE( 358)			event->onMouseDown = onMouseDown;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseDownCallback,(void))

void FlxMouseEventManager_obj::setMouseUpCallback( ::Dynamic object, ::Dynamic onMouseUp){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_369_setMouseUpCallback)
HXLINE( 370)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 372)		if (::hx::IsNotNull( event )) {
HXLINE( 374)			event->onMouseUp = onMouseUp;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseUpCallback,(void))

void FlxMouseEventManager_obj::setMouseClickCallback( ::Dynamic object, ::Dynamic onMouseClick){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_386_setMouseClickCallback)
HXLINE( 387)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 389)		if (::hx::IsNotNull( event )) {
HXLINE( 391)			event->onMouseClick = onMouseClick;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseClickCallback,(void))

void FlxMouseEventManager_obj::setMouseDoubleClickCallback( ::Dynamic object, ::Dynamic onMouseDoubleClick){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_403_setMouseDoubleClickCallback)
HXLINE( 404)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 406)		if (::hx::IsNotNull( event )) {
HXLINE( 408)			event->onMouseDoubleClick = onMouseDoubleClick;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseDoubleClickCallback,(void))

void FlxMouseEventManager_obj::setMouseOverCallback( ::Dynamic object, ::Dynamic onMouseOver){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_419_setMouseOverCallback)
HXLINE( 420)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 422)		if (::hx::IsNotNull( event )) {
HXLINE( 424)			event->onMouseOver = onMouseOver;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseOverCallback,(void))

void FlxMouseEventManager_obj::setMouseOutCallback( ::Dynamic object, ::Dynamic onMouseOut){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_435_setMouseOutCallback)
HXLINE( 436)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 438)		if (::hx::IsNotNull( event )) {
HXLINE( 440)			event->onMouseOut = onMouseOut;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseOutCallback,(void))

void FlxMouseEventManager_obj::setMouseMoveCallback( ::Dynamic object, ::Dynamic onMouseMove){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_452_setMouseMoveCallback)
HXLINE( 453)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 455)		if (::hx::IsNotNull( event )) {
HXLINE( 457)			event->onMouseMove = onMouseMove;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseMoveCallback,(void))

void FlxMouseEventManager_obj::setMouseWheelCallback( ::Dynamic object, ::Dynamic onMouseWheel){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_469_setMouseWheelCallback)
HXLINE( 470)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 472)		if (::hx::IsNotNull( event )) {
HXLINE( 474)			event->onMouseWheel = onMouseWheel;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setMouseWheelCallback,(void))

void FlxMouseEventManager_obj::setObjectMouseEnabled( ::Dynamic object,bool MouseEnabled){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_484_setObjectMouseEnabled)
HXLINE( 485)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 487)		if (::hx::IsNotNull( event )) {
HXLINE( 489)			event->mouseEnabled = MouseEnabled;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseEnabled,(void))

bool FlxMouseEventManager_obj::isObjectMouseEnabled( ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_497_isObjectMouseEnabled)
HXLINE( 498)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 500)		if (::hx::IsNotNull( event )) {
HXLINE( 502)			return event->mouseEnabled;
            		}
            		else {
HXLINE( 506)			return false;
            		}
HXLINE( 500)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,isObjectMouseEnabled,return )

void FlxMouseEventManager_obj::setObjectMouseChildren( ::Dynamic object,bool mouseChildren){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_516_setObjectMouseChildren)
HXLINE( 517)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 519)		if (::hx::IsNotNull( event )) {
HXLINE( 521)			event->mouseChildren = mouseChildren;
HXLINE( 522)			this->_list->remove(event);
HXLINE( 524)			if (!(mouseChildren)) {
HXLINE( 526)				this->_list->unshift(event);
            			}
            			else {
HXLINE( 530)				int index = 0;
HXLINE( 532)				while(true){
HXLINE( 532)					bool _hx_tmp;
HXDLIN( 532)					if ((index < this->_list->length)) {
HXLINE( 532)						_hx_tmp = !(this->_list->__get(index).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >()->mouseChildren);
            					}
            					else {
HXLINE( 532)						_hx_tmp = false;
            					}
HXDLIN( 532)					if (!(_hx_tmp)) {
HXLINE( 532)						goto _hx_goto_32;
            					}
HXLINE( 533)					index = (index + 1);
            				}
            				_hx_goto_32:;
HXLINE( 535)				this->_list->insert(index,event);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseChildren,(void))

bool FlxMouseEventManager_obj::isObjectMouseChildren( ::Dynamic object){
            	HX_GC_STACKFRAME(&_hx_pos_7737cad62ef16250_544_isObjectMouseChildren)
HXLINE( 545)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 547)		if (::hx::IsNotNull( event )) {
HXLINE( 549)			return event->mouseChildren;
            		}
            		else {
HXLINE( 553)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("FlxMouseEventManager , isObjectMouseChildren() : object not found",2c,1c,56,e2),null()));
            		}
HXLINE( 547)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,isObjectMouseChildren,return )

void FlxMouseEventManager_obj::setObjectMouseButtons( ::Dynamic object,::Array< int > mouseButtons){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_561_setObjectMouseButtons)
HXLINE( 562)		 ::flixel::input::mouse::FlxMouseEvent event = this->get(object,null());
HXLINE( 564)		if (::hx::IsNotNull( event )) {
HXLINE( 566)			event->mouseButtons = mouseButtons;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,setObjectMouseButtons,(void))

void FlxMouseEventManager_obj::traverseFlxGroup( ::flixel::group::FlxTypedGroup group,::Array< ::Dynamic> orderedObjects){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_573_traverseFlxGroup)
HXDLIN( 573)		int _g = 0;
HXDLIN( 573)		::cpp::VirtualArray _g1 = group->members;
HXDLIN( 573)		while((_g < _g1->get_length())){
HXDLIN( 573)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 573)			_g = (_g + 1);
HXLINE( 575)			 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 576)			if (::hx::IsNotNull( group )) {
HXLINE( 578)				this->traverseFlxGroup(group,orderedObjects);
            			}
HXLINE( 580)			if (::Std_obj::isOfType(basic,::hx::ClassOf< ::flixel::FlxObject >())) {
HXLINE( 582)				 ::flixel::input::mouse::FlxMouseEvent event = this->get(( ( ::flixel::FlxObject)(basic) ),null());
HXLINE( 584)				if (::hx::IsNotNull( event )) {
HXLINE( 586)					orderedObjects->push(event);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,traverseFlxGroup,(void))

 ::flixel::input::mouse::FlxMouseEvent FlxMouseEventManager_obj::get( ::Dynamic object,::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_593_get)
HXLINE( 594)		if (::hx::IsNull( list )) {
HXLINE( 596)			list = this->_list;
            		}
HXLINE( 599)		{
HXLINE( 599)			int _g = 0;
HXDLIN( 599)			while((_g < list->length)){
HXLINE( 599)				 ::flixel::input::mouse::FlxMouseEvent event = list->__get(_g).StaticCast<  ::flixel::input::mouse::FlxMouseEvent >();
HXDLIN( 599)				_g = (_g + 1);
HXLINE( 601)				if (::hx::IsInstanceEq( event->object,object )) {
HXLINE( 603)					return event;
            				}
            			}
            		}
HXLINE( 607)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,get,return )

int FlxMouseEventManager_obj::sortByMouseChildren( ::flixel::input::mouse::FlxMouseEvent event1, ::flixel::input::mouse::FlxMouseEvent event2){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_611_sortByMouseChildren)
HXLINE( 612)		if ((event1->mouseChildren == event2->mouseChildren)) {
HXLINE( 614)			return 0;
            		}
HXLINE( 617)		if (!(event1->mouseChildren)) {
HXLINE( 619)			return -1;
            		}
HXLINE( 622)		return 1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMouseEventManager_obj,sortByMouseChildren,return )

void FlxMouseEventManager_obj::clearRegistry(){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_626_clearRegistry)
HXLINE( 627)		this->_overList = null();
HXLINE( 628)		this->_downList = null();
HXLINE( 629)		this->_clickList = null();
HXLINE( 630)		this->_list = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_list);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMouseEventManager_obj,clearRegistry,(void))

bool FlxMouseEventManager_obj::checkOverlap( ::flixel::input::mouse::FlxMouseEvent event){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_634_checkOverlap)
HXLINE( 635)		{
HXLINE( 635)			int _g = 0;
HXDLIN( 635)			::Array< ::Dynamic> _g1 = event->object->get_cameras();
HXDLIN( 635)			while((_g < _g1->length)){
HXLINE( 635)				 ::flixel::FlxCamera camera = _g1->__get(_g).StaticCast<  ::flixel::FlxCamera >();
HXDLIN( 635)				_g = (_g + 1);
HXLINE( 638)				this->_point = ::flixel::FlxG_obj::mouse->getPositionInCameraView(camera,this->_point);
HXLINE( 639)				 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 639)				bool contained;
HXDLIN( 639)				bool contained1;
HXDLIN( 639)				bool contained2;
HXDLIN( 639)				if (((point->x + ( (Float)(0) )) > camera->viewMarginX)) {
HXLINE( 639)					contained2 = (point->x < (( (Float)(camera->width) ) - camera->viewMarginX));
            				}
            				else {
HXLINE( 639)					contained2 = false;
            				}
HXDLIN( 639)				if (contained2) {
HXLINE( 639)					contained1 = ((point->y + ( (Float)(0) )) > camera->viewMarginY);
            				}
            				else {
HXLINE( 639)					contained1 = false;
            				}
HXDLIN( 639)				if (contained1) {
HXLINE( 639)					contained = (point->y < (( (Float)(camera->height) ) - camera->viewMarginY));
            				}
            				else {
HXLINE( 639)					contained = false;
            				}
HXDLIN( 639)				if (point->_weak) {
HXLINE( 639)					point->put();
            				}
HXDLIN( 639)				if (contained) {
HXLINE( 641)					this->_point = ::flixel::FlxG_obj::mouse->getWorldPosition(camera,this->_point);
HXLINE( 643)					 ::flixel::math::FlxBasePoint point = this->_point;
HXDLIN( 643)					bool _hx_tmp;
HXDLIN( 643)					bool _hx_tmp1;
HXDLIN( 643)					if (event->pixelPerfect) {
HXLINE( 643)						_hx_tmp1 = ::hx::IsNotNull( event->sprite );
            					}
            					else {
HXLINE( 643)						_hx_tmp1 = false;
            					}
HXDLIN( 643)					if (_hx_tmp1) {
HXLINE( 643)						_hx_tmp = event->sprite->pixelsOverlapPoint(point,1,camera);
            					}
            					else {
HXLINE( 643)						_hx_tmp = event->object->overlapsPoint(point,true,camera);
            					}
HXDLIN( 643)					if (_hx_tmp) {
HXLINE( 645)						return true;
            					}
            				}
            			}
            		}
HXLINE( 667)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxMouseEventManager_obj,checkOverlap,return )

bool FlxMouseEventManager_obj::checkOverlapWithPoint( ::flixel::input::mouse::FlxMouseEvent event, ::flixel::math::FlxBasePoint point, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_7737cad62ef16250_672_checkOverlapWithPoint)
HXDLIN( 672)		bool _hx_tmp;
HXDLIN( 672)		if (event->pixelPerfect) {
HXDLIN( 672)			_hx_tmp = ::hx::IsNotNull( event->sprite );
            		}
            		else {
HXDLIN( 672)			_hx_tmp = false;
            		}
HXDLIN( 672)		if (_hx_tmp) {
HXLINE( 674)			return event->sprite->pixelsOverlapPoint(point,1,camera);
            		}
            		else {
HXLINE( 678)			return event->object->overlapsPoint(point,true,camera);
            		}
HXLINE( 672)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxMouseEventManager_obj,checkOverlapWithPoint,return )


::hx::ObjectPtr< FlxMouseEventManager_obj > FlxMouseEventManager_obj::__new() {
	::hx::ObjectPtr< FlxMouseEventManager_obj > __this = new FlxMouseEventManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxMouseEventManager_obj > FlxMouseEventManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxMouseEventManager_obj *__this = (FlxMouseEventManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMouseEventManager_obj), true, "flixel.input.mouse.FlxMouseEventManager"));
	*(void **)__this = FlxMouseEventManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxMouseEventManager_obj::FlxMouseEventManager_obj()
{
}

void FlxMouseEventManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxMouseEventManager);
	HX_MARK_MEMBER_NAME(_list,"_list");
	HX_MARK_MEMBER_NAME(_overList,"_overList");
	HX_MARK_MEMBER_NAME(_downList,"_downList");
	HX_MARK_MEMBER_NAME(_clickList,"_clickList");
	HX_MARK_MEMBER_NAME(mouseClickedTime,"mouseClickedTime");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(maxDoubleClickDelay,"maxDoubleClickDelay");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxMouseEventManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_list,"_list");
	HX_VISIT_MEMBER_NAME(_overList,"_overList");
	HX_VISIT_MEMBER_NAME(_downList,"_downList");
	HX_VISIT_MEMBER_NAME(_clickList,"_clickList");
	HX_VISIT_MEMBER_NAME(mouseClickedTime,"mouseClickedTime");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(maxDoubleClickDelay,"maxDoubleClickDelay");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxMouseEventManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { return ::hx::Val( _list ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return ::hx::Val( _point ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"reorder") ) { return ::hx::Val( reorder_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addEvent") ) { return ::hx::Val( addEvent_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_overList") ) { return ::hx::Val( _overList ); }
		if (HX_FIELD_EQ(inName,"_downList") ) { return ::hx::Val( _downList ); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_clickList") ) { return ::hx::Val( _clickList ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkOverlap") ) { return ::hx::Val( checkOverlap_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearRegistry") ) { return ::hx::Val( clearRegistry_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mouseClickedTime") ) { return ::hx::Val( mouseClickedTime ); }
		if (HX_FIELD_EQ(inName,"traverseFlxGroup") ) { return ::hx::Val( traverseFlxGroup_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setMouseUpCallback") ) { return ::hx::Val( setMouseUpCallback_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"maxDoubleClickDelay") ) { return ::hx::Val( maxDoubleClickDelay ); }
		if (HX_FIELD_EQ(inName,"setMouseOutCallback") ) { return ::hx::Val( setMouseOutCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"sortByMouseChildren") ) { return ::hx::Val( sortByMouseChildren_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setMouseDownCallback") ) { return ::hx::Val( setMouseDownCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseOverCallback") ) { return ::hx::Val( setMouseOverCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseMoveCallback") ) { return ::hx::Val( setMouseMoveCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"isObjectMouseEnabled") ) { return ::hx::Val( isObjectMouseEnabled_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setMouseClickCallback") ) { return ::hx::Val( setMouseClickCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMouseWheelCallback") ) { return ::hx::Val( setMouseWheelCallback_dyn() ); }
		if (HX_FIELD_EQ(inName,"setObjectMouseEnabled") ) { return ::hx::Val( setObjectMouseEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"isObjectMouseChildren") ) { return ::hx::Val( isObjectMouseChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"setObjectMouseButtons") ) { return ::hx::Val( setObjectMouseButtons_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkOverlapWithPoint") ) { return ::hx::Val( checkOverlapWithPoint_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setObjectMouseChildren") ) { return ::hx::Val( setObjectMouseChildren_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"setMouseDoubleClickCallback") ) { return ::hx::Val( setMouseDoubleClickCallback_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxMouseEventManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_overList") ) { _overList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_downList") ) { _downList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_clickList") ) { _clickList=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mouseClickedTime") ) { mouseClickedTime=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"maxDoubleClickDelay") ) { maxDoubleClickDelay=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxMouseEventManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_list",3d,38,c4,fa));
	outFields->push(HX_("_overList",31,0b,a0,77));
	outFields->push(HX_("_downList",3f,11,31,c4));
	outFields->push(HX_("_clickList",87,04,55,82));
	outFields->push(HX_("mouseClickedTime",2f,68,64,b4));
	outFields->push(HX_("_point",91,fb,76,c2));
	outFields->push(HX_("maxDoubleClickDelay",50,c3,5f,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxMouseEventManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_list),HX_("_list",3d,38,c4,fa)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_overList),HX_("_overList",31,0b,a0,77)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_downList),HX_("_downList",3f,11,31,c4)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxMouseEventManager_obj,_clickList),HX_("_clickList",87,04,55,82)},
	{::hx::fsInt,(int)offsetof(FlxMouseEventManager_obj,mouseClickedTime),HX_("mouseClickedTime",2f,68,64,b4)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxMouseEventManager_obj,_point),HX_("_point",91,fb,76,c2)},
	{::hx::fsInt,(int)offsetof(FlxMouseEventManager_obj,maxDoubleClickDelay),HX_("maxDoubleClickDelay",50,c3,5f,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxMouseEventManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxMouseEventManager_obj_sMemberFields[] = {
	HX_("_list",3d,38,c4,fa),
	HX_("_overList",31,0b,a0,77),
	HX_("_downList",3f,11,31,c4),
	HX_("_clickList",87,04,55,82),
	HX_("mouseClickedTime",2f,68,64,b4),
	HX_("_point",91,fb,76,c2),
	HX_("maxDoubleClickDelay",50,c3,5f,52),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("addEvent",39,ee,21,ef),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("removeAll",3d,17,e5,ca),
	HX_("reorder",fb,43,bb,1b),
	HX_("setMouseDownCallback",0a,f4,07,da),
	HX_("setMouseUpCallback",43,fc,86,24),
	HX_("setMouseClickCallback",0a,31,9e,cd),
	HX_("setMouseDoubleClickCallback",f9,02,73,43),
	HX_("setMouseOverCallback",fc,ce,df,f9),
	HX_("setMouseOutCallback",10,aa,5c,33),
	HX_("setMouseMoveCallback",b9,a5,fb,fe),
	HX_("setMouseWheelCallback",5d,f4,b6,89),
	HX_("setObjectMouseEnabled",7d,12,2e,1b),
	HX_("isObjectMouseEnabled",c5,84,b4,5f),
	HX_("setObjectMouseChildren",c3,47,d9,30),
	HX_("isObjectMouseChildren",7b,d4,f6,e1),
	HX_("setObjectMouseButtons",3d,60,72,67),
	HX_("traverseFlxGroup",3f,3d,59,c9),
	HX_("get",96,80,4e,00),
	HX_("sortByMouseChildren",6f,d2,c1,84),
	HX_("clearRegistry",6a,b4,fc,03),
	HX_("checkOverlap",9f,fb,96,96),
	HX_("checkOverlapWithPoint",cb,10,c2,44),
	::String(null()) };

::hx::Class FlxMouseEventManager_obj::__mClass;

void FlxMouseEventManager_obj::__register()
{
	FlxMouseEventManager_obj _hx_dummy;
	FlxMouseEventManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.mouse.FlxMouseEventManager",a5,53,34,22);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMouseEventManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMouseEventManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMouseEventManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMouseEventManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace mouse