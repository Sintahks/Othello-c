CC = gcc
CFLAGS = -g -Wall

.c.o:
	$(CC) -c $(CFLAGS) -o $@ $<

default: othello

main: othello

othello: main.o game_init.o game.o
	$(CC) $(CFLAGS) -o othello main.c game_init.c game.c

clean: 
	rm *.o


