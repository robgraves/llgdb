#include <stdlib.h>
#include "BoardGame.h"
#include "BoardGames.h"
#include "llgdbBoardGame.h"
#include "llgdbBoardGamesSeq.h"

void InitBoardGamesSeq(BoardGames_t **bgs)
{
	*bgs = (BoardGames_t *)(malloc(sizeof(BoardGames_t)));
	(*bgs)->list.array = NULL;
	(*bgs)->list.size = 0;
	(*bgs)->list.count = 0;
	(*bgs)->list.free = &free_BoardGame;
}

void AddBoardGameToSeq(BoardGames_t *bgs, BoardGame_t *bg)
{
	asn_sequence_add(bgs, bg);
}

void DelBoardGameFromSeq(BoardGames_t *bgs, BoardGame_t *bg)
{
	for(int i=0; i<bgs->list.count; i++){
		if ( (BoardGame_t *)bgs->list.array[i] == bg ){ asn_sequence_del(bgs, i, 1); }
	}
}

void FreeBoardGamesSeq(BoardGames_t **bgs)
{
	asn_sequence_empty(*bgs);
	free(*bgs); *bgs = NULL;
}

void free_BoardGame(BoardGame_t *bg)
{
	FreeBoardGame(&bg);
}
