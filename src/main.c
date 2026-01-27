#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "world.h"
#include "maps/generateWorld.h"
#include "main.h"
#include <time.h>


tileTemplate tile[H][W] = {0};

tileTemplate* getTile(int x, int y) {
    if (x < 0 || x >= W || y < 0 || y >= H)
        return NULL;
    return &tile[y][x];
}

characterTemplate characters[maxNumberOfCharacters] = {0};

characterTemplate* getCharacterByIndex(int arrayIndex) {
    if (arrayIndex < 0 || arrayIndex >= maxNumberOfCharacters)
        return NULL;
    return &characters[arrayIndex];
}
int numberOfCharacters = 0;
int getNumberOfCharacters() {
    return numberOfCharacters;
}
int main(void) {
    srand(time(NULL));
    printf("\nHow many AI characters do you want to generate? The number must be an integer.\n\n");
    scanf_s("%d", &numberOfCharacters);
    if (numberOfCharacters > maxNumberOfCharacters || numberOfCharacters < 0) {
        numberOfCharacters = maxNumberOfCharacters;
    };
    generateWorld();
    // Loop simples: por enquanto não move.
    for (;;) {
        renderWorld();
        printf("\nPress ENTER to progress 1 cicle...");
        int c = getchar();
        (void)c;
    }

    return 0;
}
