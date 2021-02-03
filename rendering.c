//
// Created by rfili on 02/02/2021.
//

#include "SDL.h"



#include "game.h"
#include "rendering.h"

#define CONTOUR_BEGINNER_WIDTH 152
#define CONTOUR_BEGINNER_HEIGHT 195

void render_contour(SDL_Renderer *renderer, const game_t *game)
{
    SDL_Surface *empty_board_beginner = NULL;
    SDL_Texture *empty_board_beginner_texture = NULL;
    switch (game->difficulty) {
        case BEGINNER:
            empty_board_beginner = SDL_LoadBMP("empty_board_beginner.bmp");
            empty_board_beginner_texture = SDL_CreateTextureFromSurface(renderer, empty_board_beginner);
            SDL_Rect dstrect = { WINDOW_WIDTH / 2 - CONTOUR_BEGINNER_WIDTH / 2 - 5,
                                 WINDOW_HEIGHT / 2 - CONTOUR_BEGINNER_HEIGHT / 2, CONTOUR_BEGINNER_WIDTH, CONTOUR_BEGINNER_HEIGHT };
            SDL_RenderCopy(renderer, empty_board_beginner_texture, NULL, &dstrect);
            break;

        default: {}
    }

    SDL_DestroyTexture(empty_board_beginner_texture);
    SDL_FreeSurface(empty_board_beginner);

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
