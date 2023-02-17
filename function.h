//
// Created by 张先森 on 2023/1/2.
//

#ifndef INC_12_1_BINARYTREE_CREATE_FUNCTION_H
#define INC_12_1_BINARYTREE_CREATE_FUNCTION_H
#include <stdio.h>
#include <stdlib.h>

typedef char BiElemType;
typedef struct BiTNode{
    BiElemType c;
    struct BiTNode *lchild;//左孩子结点
    struct BiTNode *rchild;//右孩子结点
}BiTNode,*BiTree;

//tag结构体是辅助队列(链表实现)使用的
typedef struct tag{
    BiTree p;//树的某一个结点的地址值
    struct tag *next;//指向辅助队列的下一个结点
}tag_t,*ptag_t;
#endif //INC_12_1_BINARYTREE_CREATE_FUNCTION_H
