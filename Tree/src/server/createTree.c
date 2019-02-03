#include <stdlib.h>
#include "../include/tree.h"

// file name createTree.c 创建树的主函数文件
Tree createTree(ElemType data)
{
    Tree Root = (Tree)malloc(sizeof(TreeN));
    if (Root == NULL) {
        exit(-1);
    }
    // 设置节点指向
    Root->data = data;
    Root->Left = NULL;
    Root->Right = NULL;

    return Root;
}
