//
// Created by rfili on 02/02/2021.
//

#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H

#define SIZE 8

typedef enum {RUNNING} status_t;
typedef enum {EMPTY} entity_t;


typedef struct {
    status_t status;
    int board[SIZE * SIZE];
} game_t;

#endif //MINESWEEPER_GAME_H
