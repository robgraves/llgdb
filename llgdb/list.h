#ifndef _LIST_H
#define _LIST_H

#include "game.h"

/////////////////////////
//
//struct list definition
//
/////////////////////////

struct list {
    struct game *first;
    struct game *last;
};
