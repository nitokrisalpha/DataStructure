#include <stdlib.h>
#include "../include/function.h"

FIFO createFIFO()
{
    FIFO fifo;
    fifo = (FIFO)malloc(sizeof(FIFON));
    fifo->head = NULL;
    fifo->tail = NULL;

    return fifo;
}