#include <stdlib.h>
#include "../include/function.h"

bool isEmpty(FIFO fifo)
{
    return fifo->head == NULL;
}