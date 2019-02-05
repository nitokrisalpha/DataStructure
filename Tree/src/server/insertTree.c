#include <stdlib.h>
#include "../include/function.h"

/**
 * file name: insertTree.c
 * 将数据插入树
 * */ 
Tree insertTree(ElemType data,Tree tree,FIFO fifo)
{
    Tree newNode = createTree(data);

    if (tree == NULL)
    {
        return newNode;
    }

    Tree cur_node;
    insertFifo(tree,fifo);
    while(!isEmpty(fifo))
    {
        cur_node = pop();
        //判断左子树为空
        if (cur_node->Left == NULL) {
            cur_node->Left = newNode;
        }
        else
        {
            insertFifo(cur_node->Left,fifo);
        }
        //判断右子树为空
        if (cur_node->Right == NULL) {
            cur_node->Right = newNode;
        }
        else
        {
            insertFifo(cur_node->Right,fifo);
        }
    }
}