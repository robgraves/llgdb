#include <stdlib.h>
#include "BoardGame.h"
#include "OCTET_STRING.h"
#include "llgdbBoardGame.h"

void InitBoardGame(BoardGame_t **bg, long *id, char *name, char *desc, long *min_players, long *max_players)
{
	(*bg) = (BoardGame_t*)malloc(sizeof(BoardGame_t));
	
	if( id != NULL ) { 
		(*bg)->id = (long *)malloc(sizeof(long));
		*(*bg)->id = *id;
	} else { (*bg)->id = NULL; }
	
	if( name != NULL ) {
		(*bg)->name = (OCTET_STRING_t*)malloc(sizeof(OCTET_STRING_t));
		(*bg)->name->buf = NULL;
		OCTET_STRING_fromBuf((*bg)->name, name, -1);
	} else { (*bg)->name = NULL; }

	if( desc != NULL ) {
		(*bg)->desc = (OCTET_STRING_t*)malloc(sizeof(OCTET_STRING_t));
		(*bg)->desc->buf = NULL;
		OCTET_STRING_fromBuf((*bg)->desc, desc, -1);
	} else { (*bg)->desc = NULL; }

	if( min_players != NULL ) {
		(*bg)->min_players = (long *)malloc(sizeof(long));
		*(*bg)->min_players = *min_players;
	} else { (*bg)->min_players = NULL; }

	if( max_players != NULL ) {
		(*bg)->max_players = (long *)malloc(sizeof(long));
		*(*bg)->max_players = *max_players;
	} else { (*bg)->max_players = NULL; }
}

void FreeBoardGame(BoardGame_t* (*bg))
{
	free((*bg)->max_players);
	free((*bg)->min_players);
	free((*bg)->desc);
	free((*bg)->name);
	free((*bg)->id);
	free((*bg));
	(*bg) = NULL;
}
