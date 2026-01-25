#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "world.h"
#include "maps/map1.h"
#include "main.h"


tileTemplate tile[H][W] = {0};

tileTemplate* getTile(int x, int y) {
    if (x < 0 || x >= W || y < 0 || y >= H)
        return NULL;
    return &tile[y][x];
}



int main(void) {
    // Agente
    int ax = W / 2;
    int ay = H / 2;
    generateWorld1();
    // Loop simples: por enquanto não move.
    for (;;) {
        renderWorld(ax, ay);
        printf("\nPressione ENTER pra avancar um tick...");
        int c = getchar();
        (void)c;
    }

    return 0;
}
