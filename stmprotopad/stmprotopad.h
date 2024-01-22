#ifndef stmprotopad_h
#define stmprotopad_h
#endif

#pragma once

#include "quantum.h"

#define LAYOUT( \
	K000, K001, K002,   \
	K100, K101, K102,   \
	K200, K201, K202,   \
	K300, K301, K302,   \
	K400, K401, K402    \
) { \
	{ K000,  K001,  K002,   }, \
	{ K100,  K101,  K102,   }, \
	{ K200,  K201,  K202,   }, \
	{ K300,  K301,  K302,   },  \
	{ K400,  K401,  K402    }  \
}
