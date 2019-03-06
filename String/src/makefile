test : main.o BF.o
	gcc -o test main.o BF.o
main.o : main.c string.h
	gcc -c main.c
BF.o : BF.c string.h 
	gcc -c BF.c
clean :
	rm test main.o BF.o
