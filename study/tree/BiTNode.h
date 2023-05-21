//
// Created by admin on 2023/5/21.
//

#ifndef STUDY_BITNODE_H
#define STUDY_BITNODE_H
/**
 * 二叉树的链式存储结构
 */
typedef struct BiTNode {
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;
#endif //STUDY_BITNODE_H
