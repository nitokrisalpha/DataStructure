#ifndef _TREE_H_
#define _TREE_H_

typedef int ElemType;
typedef struct node
{
    ElemType data;
    struct node *Left;
    struct node *Right;
} *Tree,TreeN;


#endif