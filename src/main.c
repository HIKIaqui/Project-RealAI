#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

#define W 100
#define H 40

static void clear_screen(void) {
    system("cls");
}

static void render(unsigned char grid[H][W], int ax, int ay) {
    clear_screen();
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

int main(void) {
    // Mundo básico
    unsigned char grid[H][W] = {0};

    // Algumas “coisas” no mundo só pra visual
    grid[2][5] = 1;  // recurso
    grid[6][12] = 2; // perigo
    grid[1][16] = 3; // seguro

    // Agente
    int ax = W / 2;
    int ay = H / 2;

    // Loop simples: por enquanto não move.
    for (;;) {
        render(grid, ax, ay);
        printf("\nPressione ENTER pra avançar um tick...");
        int c = getchar();
        (void)c;
    }

    return 0;
}
