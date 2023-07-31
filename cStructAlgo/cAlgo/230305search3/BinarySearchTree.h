#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tageBSTNode
{
    struct tagBSTNode* Left;
    struct tageBSTNode* Right;

    ElementType Data;
}BSTNode;

BSTNode* BST_ConstructNode(ElementType NewData);
void BST_DestructNode(BSTNode* Node);
void BST_DestructTree(BSTNode* Tree);

BSTNode* BST_SearchNode(BSTNode* Tree, ElementType Target);
BSTNode* BST_SearchMinNode(BSTNode* Tree);
void BST_InsertNode(BSTNode* Tree, BSTNode *Child);
BSTNode* BST_RemoveNode(BSTNode* Tree, BSTNode* Parent, ElementType Target);
void BST_InorderPrintTree(BSTNode* Node);

#endif