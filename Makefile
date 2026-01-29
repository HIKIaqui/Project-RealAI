CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -g -O0
SRC = src/main.c src/world.c src/maps/map1.c src/utils.c src/maps/generateWorld.c src/cycleSystem/character.c src/cycleSystem/cycleMaster.c
OUT = build/app.exe

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
