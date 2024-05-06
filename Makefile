CC=gcc
CFLAGS=-Wall

guess: main.o
	$(CC) $(CFLAGS) main.c -o guess

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f guess *.o