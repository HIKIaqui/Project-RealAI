#include "../world.h"
#include "../main.h"
#include "map1.h"
#include <stdlib.h>

void generateWorld(){
    int numberOfCharacters = getNumberOfCharacters();
    int r;
    if (numberOfCharacters > maxNumberOfCharacters) {
        numberOfCharacters = maxNumberOfCharacters;
    };
    for (int i = 0; i < numberOfCharacters; i++) {
        characterTemplate* c = getCharacterByIndex(i);
        r = rand() % W;
        c->position.x = r;
        r = rand() % H;
        c->position.y = r;
    }
    generateMap1();
}