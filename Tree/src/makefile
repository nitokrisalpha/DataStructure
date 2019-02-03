CC=gcc
Tree:main.o createTree.o createFIFO.o
	CC -o Tree main.o createTree.o createFIFO.o
main.o:main.c ./include/tree.h ./include/fifo.h ./include/function.h
	CC -c main.c
createTree.o:./server/createTree.c ./include/tree.h ./include/function.h
	CC -c ./server/createTree.c
createaFIFO.o:./server/createFIFO.c ./include/tree.h ./include/fifo.h ./include/function.h
	CC -c ./server/createFIFO.c
.PHONY : clean  //“.PHONY”表示，clean是个伪目标文件
clean:
	rm Tree main.o createTree.o createFIFO.o 