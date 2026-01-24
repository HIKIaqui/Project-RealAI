#include <stdio.h>
#include "utils.h"

#define W 100
#define H 40



void renderWorld(unsigned char grid[H][W], int ax, int ay) {
    clearScreen();
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            if (x == ax && y == ay) { // agente
                putchar('@'); 
                continue;
            } 
            switch (grid[y][x]) {
                case 1: 
                    putchar('R');
                    break;
                case 2:
                    putchar('!');
                    break;
                case 3:
                    putchar('S');
                    break;
                default:
                    putchar('.');
                    break;
            }
        }
        putchar('\n');
    }
}