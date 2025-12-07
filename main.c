#include <stdio.h>
#include <stdlib.h>
#include<SDL2/SDL.h>

int main() {

    printf("Hello, ma nigga!\n" );
   SDL_Window *pwindow= SDL_CreateWindow("Image viewer" ,SDL_WINDOWPOS_CENTERED ,SDL_WINDOWPOS_CENTERED, 900,
   600, 0);
   SDL_Delay(3000);
    
}