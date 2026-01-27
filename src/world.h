#ifndef WORLD_H
#define WORLD_H

#define W 100
#define H 40

void renderWorld();

int getTileType(int x, int y);
void setTileType(int setType, int x, int y);
int getTileHeight(int x, int y);
void setTileHeight(int setHeight, int x, int y);
int getTileObjectOnTile(int x, int y);
void setTileObjectOnTile(int setObjectOnTile, int x, int y);
int getTileTemperature(int x, int y);
void setTileTemperature(int setTemperature, int x, int y);

#endif