#include "SDL.h" 

int main(int argc, char *argv[])
{
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;

    SDL_CreateWindowAndRenderer(800, 600, 0, &window, &renderer);

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderDrawLine(renderer, 0,0,50,50);

    SDL_RenderPresent(renderer);
    SDL_Delay(3000);
    SDL_DestroyWindow( window );
    SDL_Quit();
  return 0;
}