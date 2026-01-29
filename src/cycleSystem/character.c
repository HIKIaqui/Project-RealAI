#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "../world.h"
#include "../maps/generateWorld.h"
#include "../main.h"
#include <time.h>

void characterTick(int characterIndex)
{
    characterTemplate* c = getCharacterByIndex(characterIndex);
    int x = c->position.x;
    int y = c->position.y;
    x++;
    y++;
    c->position.x = x;
    c->position.y = y;
}