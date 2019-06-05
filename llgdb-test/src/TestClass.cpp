#include <cstdlib>
#include <cstdio>
#include <unistd.h>
#include <limits.h>
extern "C" {
	#include "BoardGame.h"
	#include "BoardGames.h"
	#include "xer_encoder.h"
	#include "llgdbBoardGame.h"
	#include "llgdbBoardGamesSeq.h"
	#include "TestClass.hpp"
}

int TestClass::SerializeTest()
{
	//Initialize BoardGame_t
	BoardGame_t *bg = NULL;
	long id = 1, min_players = 4, max_players = 7;
	char name[] = "Bang!", desc[] = "A Wild West-themed social deduction card game.";
	InitBoardGame(&bg, &id, name, desc, &min_players, &max_players);	

	//Encode BoardGame_t to file
	FILE *fp = fopen("serialize.dat", "w");
	xer_fprint(fp, &asn_DEF_BoardGame, bg);
	fclose(fp); fp = NULL;
	FreeBoardGame(&bg);
	return 0;
}

int TestClass::SerializeListTest()
{
	long id = 1, min_players = 4, max_players = 7;
	char name[] = "Bang!", desc[] = "A Wild West-themed social deduction card game.";
	//Initialize BoardGames_t (sequence of board games)
	BoardGames_t *bgs = NULL;
	InitBoardGamesSeq(&bgs);
	for(int i=0; i<100; i++){
		BoardGame_t *bg = NULL;
		InitBoardGame(&bg, &id, name, desc, &min_players, &max_players);
		AddBoardGameToSeq(bgs, bg);
		if( i == 5 ){ DelBoardGameFromSeq(bgs, bg); }
		id++;
	}
	//Encode BoardGame_t to file
	FILE *fp = fopen("serialize.dat", "w");
	xer_fprint(fp, &asn_DEF_BoardGames, bgs);
	fclose(fp); fp = NULL;
	FreeBoardGamesSeq(&bgs);
	return 0;
}
