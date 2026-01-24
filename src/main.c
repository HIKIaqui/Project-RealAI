#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "world.h"
#include "maps/map1.h"

unsigned char grid[H][W] = {0};

int main(void) {
    // Agente
    int ax = W / 2;
    int ay = H / 2;
    generateWorld1();
    // Loop simples: por enquanto não move.
    for (;;) {
        renderWorld(grid, ax, ay);
        printf("\nPressione ENTER pra avancar um tick...");
        int c = getchar();
        (void)c;
    }

    return 0;
}
