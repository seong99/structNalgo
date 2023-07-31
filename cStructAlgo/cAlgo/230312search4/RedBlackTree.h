#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagRBTNode
{
    struct tagRBTNode* Parent;
    struct tagRBTNode* Left;
    struct tagRBTNode* Right;
    
    enum {Red,Black} Color;

    ElementType Data;

}RBTNode;



#endif