//
// Created by rfili on 02/02/2021.
//

#include "SDL.h"

#include "game.h"
#include "rendering.h"

void render_contour(SDL_Renderer *renderer, const game_t *game)
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawLine(renderer, 0, 0, WINDOW_WIDTH - 2, 0);
    SDL_RenderDrawLine(renderer, 0, 1, WINDOW_WIDTH - 3, 1);
    SDL_RenderDrawLine(renderer, 0, 2, WINDOW_WIDTH - 4, 2);

    SDL_RenderDrawLine(renderer, 0, 3, 0, WINDOW_HEIGHT - 2);
    SDL_RenderDrawLine(renderer, 1, 3, 1, WINDOW_HEIGHT - 3);
    SDL_RenderDrawLine(renderer, 2, 3, 2, WINDOW_HEIGHT - 4);

    SDL_SetRenderDrawColor(renderer, 175, 175, 175, 255);
    SDL_RenderDrawPoint(renderer, WINDOW_WIDTH - 1, 0);
    SDL_RenderDrawPoint(renderer, WINDOW_WIDTH - 2, 1);
    SDL_RenderDrawPoint(renderer, WINDOW_WIDTH - 3, 2);

    const SDL_Rect b0 = {.h = 6, .w = WINDOW_WIDTH - 6, .x = 3, .y = 3};
    SDL_RenderDrawRect(renderer, &b0);
    SDL_RenderFillRect(renderer, &b0);

    const SDL_Rect b1 = {.h = WINDOW_HEIGHT - 12, .w = 6, .x = 3, .y = 9};
    SDL_RenderDrawRect(renderer, &b1);
    SDL_RenderFillRect(renderer, &b1);

    const SDL_Rect b2 = {.h = 6, .w = WINDOW_WIDTH - 12, .x = 9, .y = WINDOW_HEIGHT - 9};
    SDL_RenderDrawRect(renderer, &b2);
    SDL_RenderFillRect(renderer, &b2);

    const SDL_Rect b3 = {.h = WINDOW_HEIGHT - 12, .w = 6, .x = WINDOW_WIDTH - 9, .y = 9};
    SDL_RenderDrawRect(renderer, &b3);
    SDL_RenderFillRect(renderer, &b3);


    SDL_SetRenderDrawColor(renderer, 95, 95, 95, 255);
    SDL_RenderDrawLine(renderer, 1, WINDOW_HEIGHT - 1, WINDOW_WIDTH - 1, WINDOW_HEIGHT - 1);
    SDL_RenderDrawLine(renderer, 2, WINDOW_HEIGHT - 2, WINDOW_WIDTH - 1, WINDOW_HEIGHT - 2);
    SDL_RenderDrawLine(renderer, 3, WINDOW_HEIGHT - 3, WINDOW_WIDTH - 1, WINDOW_HEIGHT - 3);
    SDL_RenderDrawLine(renderer, WINDOW_WIDTH - 1, 1, WINDOW_WIDTH - 1, WINDOW_HEIGHT - 1);
    SDL_RenderDrawLine(renderer, WINDOW_WIDTH - 2, 2, WINDOW_WIDTH - 2, WINDOW_HEIGHT - 1);
    SDL_RenderDrawLine(renderer, WINDOW_WIDTH - 3, 3, WINDOW_WIDTH - 3, WINDOW_HEIGHT - 1);

}

void render_running_state(SDL_Renderer *renderer, const game_t *game)
{
    render_contour(renderer, game);
    // render_board(renderer, game);
}

void render_game(SDL_Renderer *renderer, const game_t *game)
{
    switch (game->state) {
        case RUNNING: {
            render_running_state(renderer, game);
        }

        default: {}
    }
}
