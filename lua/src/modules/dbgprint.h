#ifndef __DBGPRINT_H_VER__
#define __DBGPRINT_H_VER__ 2012102423
// $Id$
#if (defined(_MSC_VER) && (_MSC_VER >= 1020)) || defined(__MCPP)
#pragma once
#endif // Check for "#pragma once" support

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus
    LUA_API const luaL_Reg dbgprint_funcs[];
#ifdef __cplusplus
};
#endif // __cplusplus

#endif // __DBGPRINT_H_VER__
