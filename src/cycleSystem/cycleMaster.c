#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "../world.h"
#include "../maps/generateWorld.h"
#include "../main.h"
#include "character.h"
#include <time.h>

void cycleTick()
{
    int numberOfCharacters;
    numberOfCharacters = getNumberOfCharacters();
    for (int i = 0; i < numberOfCharacters; i++) {
        characterTick(i);
    }
    
}