#include <stdlib.h>
#include "../include/function.h"

void insertFifo(Tree treeNode,FIFO fifo)
{
    FNode newFnode = createFnode(treeNode);

    if (fifo->head == NULL) {
        fifo->head = fifo->tail = newFnode;
    }
}