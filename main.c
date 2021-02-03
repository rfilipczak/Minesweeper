#include <stdio.h>
#include "SDL.h"

#include "game.h"
#include "rendering.h"


int main(int argc, char *argv[]) {

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        fprintf(stderr, "Could not initialize SDL: %s\n", SDL_GetError());
        return EXIT_FAILURE;
    }
    printf("Successfully initialized SDL.\n");


    SDL_Window *window = NULL;
    window = SDL_CreateWindow("Minesweeper Clone",
                     SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                     WINDOW_WIDTH, WINDOW_HEIGHT,
                     SDL_WINDOW_SHOWN
    );
    if (window == NULL) {
        fprintf(stderr, "Could not create window: %s\n", SDL_GetError());
        SDL_Quit();
        return EXIT_FAILURE;
    }
    printf("Successfully created window.\n");


    SDL_Renderer *renderer = NULL;
    renderer = SDL_CreateRenderer(window, -1,
                                  SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);
    if (renderer == NULL) {
        fprintf(stderr, "Could not create renderer: %s\n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return EXIT_FAILURE;
    }
    printf("Successfully created renderer.\n");


    game_t game = {
            .state = RUNNING,
            .difficulty = BEGINNER,
            .board = {
                    EMPTY
            }
    };


    SDL_Event event;
    while(game.state != QUIT)
    {
        while(SDL_PollEvent(&event))
        {
            switch (event.type) {
                case SDL_QUIT:
                    game.state = QUIT;
                    break;
            }
        }

        SDL_SetRenderDrawColor(renderer, 30, 54, 40, 255);
        SDL_RenderClear(renderer);

        render_game(renderer, &game);

        SDL_RenderPresent(renderer);
    }






    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    printf("Done.\n");

    return 0;
}
