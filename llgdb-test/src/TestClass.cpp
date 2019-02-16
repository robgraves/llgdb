#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include <limits.h>
#include "TestClass.hpp"
#include "BoardGame.h"
#include "xer_encoder.h"
//#include "xer_decoder.h"

int TestClass::SerializeTest()
{
	//Initialize BoardGame_t
	BoardGame_t *bg = new BoardGame_t;
	bg->id = new long;
	bg->max_players = new long;
	bg->min_players = new long;
	bg->name = new OCTET_STRING_t;
	bg->desc = new OCTET_STRING_t;
	*(bg->id) = 1;
	*(bg->max_players) = 7;
	*(bg->min_players) = 4;
	char desc[] = "A Wild West-themed social deduction card game.";
	OCTET_STRING_fromBuf(bg->name, "Bang!", -1); 
	OCTET_STRING_fromBuf(bg->desc, desc, -1); 
	
	//Encode BoardGame_t to file
	FILE *fp = fopen("serialize.dat", "w");
	xer_fprint(fp, &asn_DEF_BoardGame, bg);
	fclose(fp);
	return 0;
}
