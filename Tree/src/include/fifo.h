#ifndef _FIFO_H_
#define _FIFO_H_
#include "tree.h"
// 基本节点结构
typedef struct fifon
{
    Tree treen;
    struct fifon *next;
} *FNode,FNodeN;

// 头尾指针结构
typedef struct fifo
{
    FNode head;
    FNode tail;
} *FIFO,FIFON;


#endif