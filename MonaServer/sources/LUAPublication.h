/* 
	Copyright 2013 Mona - mathieu.poux[a]gmail.com
 
	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License received along this program for more
	details (or else see http://www.gnu.org/licenses/).

	This file is a part of Mona.
*/

#pragma once

#include "Script.h"
#include "Mona/Invoker.h"
#include "Mona/Publication.h"

class LUAPublication {
public:
	static const char* Name;

	static void Clear(lua_State* pState,const Mona::Publication& publication);
	static int Get(lua_State *pState);
	static int Set(lua_State *pState);

	static void ID(std::string& id){}

private:
	static int	Flush(lua_State *pState);
	static int	PushAudio(lua_State *pState);
	static int	PushVideo(lua_State *pState);
	static int	PushData(lua_State *pState);
	static int	PushJSONData(lua_State *pState);
	static int	PushAMFData(lua_State *pState);
	static int	Close(lua_State *pState);
};
