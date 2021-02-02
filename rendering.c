//
// Created by rfili on 02/02/2021.
//

#include "SDL.h"

#include "game.h"
#include "rendering.h"

void render_menus(SDL_Renderer *renderer, const game_t *game)
{
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawLine(renderer, 0, 0, WINDOW_WIDTH - 1, 0);
}

void render_running_state(SDL_Renderer *renderer, const game_t *game)
{
    render_menus(renderer, game);
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
