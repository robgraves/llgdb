#include <cstdlib>
#include <cstdio>
#include "TestClass.hpp"
#include "BoardGame.h"
#include "xer_encoder.h"
//#include "xer_decoder.h"

void TestClass::SerializeTest()
{
	BoardGame_t bg;
	OCTET_STRING_fromString(&(bg.name), "Bang!");
	OCTET_STRING_fromString(&(bg.description), "A Wild West-themed social deduction card game.");
	bg.min_players = 4;
	bg.max_players = 7;
	FILE *fp = fopen("serialize.dat", "w");
	xer_fprint(fp, &asn_DEF_BoardGame, &bg);
	fclose(fp);
}
