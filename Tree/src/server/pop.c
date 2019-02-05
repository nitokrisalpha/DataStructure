#include <stdlib.h>
#include "../include/function.h"

Tree pop(FIFO fifo)
{
    // 原有头节点
    FIFO oldHead = fifo->head;
    // 新头节点
    FIFO newHead = oldHead->head->next;
    // 当前要操作的树节点
    Tree cur_node = oldHead->head->treen;
    free(oldHead);
    fifo->head = newHead;
    return cur_node;
}