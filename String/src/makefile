test : main.o bf.o
	gcc -o test main.o bf.o
main.o : main.c string.h
	gcc -c main.c
bf.o : BF.c string.h 
	gcc -c bf.c
clean :
	rm test main.o bf.o
