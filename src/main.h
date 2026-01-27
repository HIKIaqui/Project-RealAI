#ifndef MAIN_H
#define MAIN_H
#define W 100
#define H 40
#define maxNumberOfCharacters 120

typedef struct {
    int type;
    int height;
    int objectOnTile;
    int temperature;
} tileTemplate;

tileTemplate* getTile(int x, int y);



typedef struct {
    int x, y;
} positionTemplate;

typedef struct {
    float fear;
    float anger;
    float sadness;
    float happiness;
    float disgust;
    float surprise;
    float stress;
} emotionStateTemplate;

typedef struct {
    int state;        // idle, patrol, chase...
    int targetIndex;  // em quem tenho foco agora
} brainTemplate;

typedef struct {
    int active;
    positionTemplate position;
    emotionStateTemplate emotionState;
    brainTemplate brain;
} characterTemplate;

characterTemplate* getCharacterByIndex(int arrayIndex);

int getNumberOfCharacters();

#endif