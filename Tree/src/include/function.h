#ifndef _FUNCTION_H_
#define _FUNCTION_H_
#include <stdbool.h>
#include "tree.h"
#include "fifo.h"

// 创建树
Tree createTree(ElemType data);
// 创建队列
FIFO createFIFO();
// 插入树
Tree insertTree(ElemType data,Tree tree,FIFO fifo);
// 树入队操作
void insertFifo(Tree treeNode, FIFO fifo);
// 节点弹队
Tree pop();
// 队列是否为空
bool isEmpty(FIFO fifo);
// 创建队列节点
FNode createFnode(Tree);
#endif