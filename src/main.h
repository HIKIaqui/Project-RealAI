#ifndef MAIN_H
#define MAIN_H
#define W 100
#define H 40

typedef struct {
    int type;
    int height;
    int objectOnTile;
    int temperature;
} tileTemplate;

tileTemplate* getTile(int x, int y);

#endif