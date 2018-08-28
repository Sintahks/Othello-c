CC = gcc
CFLAGS = -g -Wall

.c.o:
	$(CC) -c $(CFLAGS) -o $@ $<

default: othello

main: othello

othello: main.o game_init.o 
	$(CC) $(CFLAGS) -o othello main.c game_init.c

clean: 
	rm *.o


