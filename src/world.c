#include <stdio.h>
#include "utils.h"
#include "main.h"

int getTileType(int x, int y) {
    tileTemplate* p = getTile(x, y);
    return p->type;
}

void setTileType(int setType, int x, int y){
    tileTemplate* p = getTile(x, y);
    p->type = setType;
}

void renderWorld(int ax, int ay) {
    clearScreen();
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            if (x == ax && y == ay) { // agente
                putchar('@'); 
                continue;
            } 
            switch (getTileType(x, y)) {
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