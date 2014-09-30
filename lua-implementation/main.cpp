#include <iostream>
#include <stdio.h>
#include <lua.hpp>

using namespace std;

int main()
{
	lua_State *L = luaL_newstate();
	luaL_openlibs(L);


	luaL_dofile(L, "test.lua");


	lua_close(L);
	return 0;
}
