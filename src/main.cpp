#include <stdio.h>
#include "SDL.h"
#include "SDL_image.h"
#include "lib/example.hpp"

int main(int argc, char *argv[])
{
  SDL_Window *window = NULL;
  SDL_Renderer *renderer = NULL;

  int test = add(1, 1);
  printf("Result: %i", test);

  SDL_CreateWindowAndRenderer(800, 600, 0, &window, &renderer);

  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);

  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
  SDL_RenderDrawLine(renderer, 0, 0, 50, 50);

  SDL_Rect displayTarget = {200, 200, 400, 400};
  SDL_Texture *texture = IMG_LoadTexture(renderer, "assets/asset.png");
  SDL_RenderCopy(renderer, texture, NULL, &displayTarget);

  SDL_RenderPresent(renderer);
  SDL_Delay(3000);
  SDL_DestroyWindow(window);
  SDL_Quit();
  return 0;
}