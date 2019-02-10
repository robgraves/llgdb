#include <cstdlib>
#include <cstdio>
#include "TestClass.hpp"
#include "BoardGame.h"
//#include "xer_encoder.h"
//#include "xer_decoder.h"

void TestClass::SerializeTest()
{
	BoardGame_t bg;
	OCTET_STRING_fromString(&(bg.name), "Bang!");
	OCTET_STRING_fromString(&(bg.description), "A Wild West-themed social deduction card game.");
	bg.min_players = 4;
	bg.max_players = 7;
}
