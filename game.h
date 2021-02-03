//
// Created by rfili on 02/02/2021.
//

#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

#define BOARD_SIZE 8

typedef enum {QUIT, RUNNING} state_t;
typedef enum {EMPTY} entity_t;
typedef enum {BEGINNER} difficulty_t;


typedef struct {
    state_t state;
    difficulty_t difficulty;
    int board[BOARD_SIZE * BOARD_SIZE];
} game_t;

#endif //MINESWEEPER_GAME_H
