#ifndef _GAME_H
#define _GAME_H

#include "header.h"

int range_length = 0;

////////////////////////
//
//game struct definition
//
////////////////////////

struct game {
    char name[100];
    //needs a function to determine range length
    //for player counts entered into the database
    int range[range_length];
    struct game *next;
    struct game *prev;
};
