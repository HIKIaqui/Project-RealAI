CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -g -O0
SRC = src/main.c
OUT = build/app.exe

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
