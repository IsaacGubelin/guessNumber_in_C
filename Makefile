# This runs the compiler with the -Wall flag, which displays all warnings.

guess: main.c
	gcc main.c -Wall -o guess


clean:
	rm -f guess *.o