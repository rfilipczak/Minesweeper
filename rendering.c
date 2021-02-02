//
// Created by rfili on 02/02/2021.
//

#include "SDL.h"



#include "game.h"
#include "rendering.h"

void render_contour(SDL_Renderer *renderer, const game_t *game)
{

    SDL_Surface *image = SDL_LoadBMP("empty_board_beginner.bmp");
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
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
