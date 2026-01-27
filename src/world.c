#include <stdio.h>
#include "utils.h"
#include "main.h"
#include "world.h"

int getTileType(int x, int y) {
    tileTemplate* p = getTile(x, y);
    return p->type;
}

void setTileType(int setType, int x, int y) {
    tileTemplate* p = getTile(x, y);
    p->type = setType;
}

int getTileHeight(int x, int y) {
    tileTemplate* p = getTile(x, y);
    return p->height;
}

void setTileHeight(int setHeight, int x, int y) {
    tileTemplate* p = getTile(x, y);
    p->height = setHeight;
}

int getTileObjectOnTile(int x, int y) {
    tileTemplate* p = getTile(x, y);
    return p->objectOnTile;
}

void setTileObjectOnTile(int setObjectOnTile, int x, int y) {
    tileTemplate* p = getTile(x, y);
    p->objectOnTile = setObjectOnTile;
}

int getTileTemperature(int x, int y) {
    tileTemplate* p = getTile(x, y);
    return p->temperature;
}

void setTileTemperature(int setTemperature, int x, int y) {
    tileTemplate* p = getTile(x, y);
    p->temperature = setTemperature;
}


void renderWorld() {
    clearScreen();
    int isCharacterHere = 0;
    int numberOfCharacters = getNumberOfCharacters();
    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            isCharacterHere = 0;
            for (int i = 0; i < numberOfCharacters; i++) { // AI drawn in map
                if (isCharacterHere != 1){
                    characterTemplate* c = getCharacterByIndex(i);
                    if ((c->position.x == x) && (c->position.y == y)) { 
                        putchar('@'); 
                        isCharacterHere = 1;
                        continue;
                    }
                }
            }
            if (isCharacterHere != 1) {
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
        }
        putchar('\n');
    }
    for (int i = 0; i < numberOfCharacters; i++) { //DEBUG
                characterTemplate* c = getCharacterByIndex(i);
                printf("IA de Index %d: x = %d, y = %d\n", i, c->position.x, c->position.y);
    }
}