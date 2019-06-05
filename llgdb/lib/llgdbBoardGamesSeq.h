#ifndef _llgdbBoardGamesSeq
#define _llgdbBoardGamesSeq

void InitBoardGamesSeq(BoardGames_t **bgs);
void FreeBoardGamesSeq(BoardGames_t **bgs);
void DelBoardGameFromSeq(BoardGames_t *bgs, BoardGame_t *bg);
void AddBoardGameToSeq(BoardGames_t *bgs, BoardGame_t *bg);
void free_BoardGame(BoardGame_t *bg);

#endif
