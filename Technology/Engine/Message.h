///////////////////////////////////////////////////////////////////////////////////////
/// All content (c) 2017 Stroblitz Engine, all rights reserved
/// FILE: Message.h
/// DATE: 2017-10-07 / 2017-10-07
/// AUTHOR: Aditya Subramanian <adu101992@gmail.com>
///////////////////////////////////////////////////////////////////////////////////////

#pragma once
#include "Precompiled.h"

//Types of messages. enumeration. There are MT_NUM_TYPES of messages.
enum class MsgType
{
	MT_QUIT = 0,
	MT_RELOAD,
	MT_INSTANTIATE_OBJECT,
	MT_DESTROY_OBJECT,
	MT_LOAD_LEVEL,
	MT_KEY_INPUT,
	MT_MOUSE_MOVE,
	MT_MOUSE_BUTTON,
	MT_MOUSE_SCROLL,
	MT_CONTROLLER_STATE,
	MT_NUM_TYPES,
};

//Message class
class Msg
{
public:
	//http://en.cppreference.com/w/cpp/language/initializer_list
	//Constructor Msg. Here mType member is being intialized using the member initializer list.
	Msg(MsgType type) :mType(type) {};

	//Member which stores the type of message.
	const MsgType mType;
};

//Consult: http://en.cppreference.com/w/cpp/memory/shared_ptr
//std::shared_ptr<Msg> (typedef'ed as pMsg) is a smart pointer that retains shared ownership of an object (of type Msg) through a pointer.
//Several shared_ptr objects may own the same object.
//pMsg is destroyed and its memory deallocated when either:
//Last remaining shared_ptr owning the object is destroyed.
//Last remaining shared_ptr owning the object is assigned another pointer via operator=/reset().
typedef std::shared_ptr<Msg> pMsg;
