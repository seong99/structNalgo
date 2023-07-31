#include "BinaryTree.h"

SBTNode* SBT_ConstructNode(ElementType NewData)
{
    SBTNode* NewNode = (SBTNode*)malloc(sizeof(SBTNode));
    NewNode->Left = NULL;
    NewNode->Right = NULL;
    NewNode->Data = NewData;

    return NewNode;
}

void SBT_DestructNode(SBTNode* Node)
{
    free(Node);
}

void SBT_DestructTree(SBTNode* Node)
{
    if(Node == NULL)
    {
        return;
    }

    //왼쪽 하위 트리 소멸
    SBT_DestructNode(Node->Left);

    //오른쪽 하위 트리 소멸
    SBT_DestructNode(Node->Right);

    //뿌리 노드 소멸
    SBT_DestructNode(Node);
}

void SBT_PreorderPrintTree(SBTNode* Node)
{
    if(Node == NULL)
    {
        return;
    }
    
    //뿌리 노드 출력
    printf("%c",Node->Data);

    //왼쪽 하위 트리 출력
    SBT_PreorderPrintTree(Node->Left);

    //오른쪽 하위 트리 출력
    SBT_PreorderPrintTree(Node->Right);
}

void SBT_InorderPrintTree(SBTNode* Node)
{
    if(Node == NULL)
    {
        return;
    }
    
    //왼쪽 하위 트리 출력
    SBT_InorderPrintTree(Node->Left);

    //뿌리 노드 출력
    printf("%c",Node->Data);

    //오른쪽 하위 트리 출력
    SBT_InorderPrintTree(Node->Right);
}

void SBT_PostorderPrintTree(SBTNode* Node)
{
    if(Node == NULL)
    {
        return;
    }
    
    //왼쪽 하위 트리 출력
    SBT_PostorderPrintTree(Node->Left);

    //오른쪽 하위 트리 출력
    SBT_PostorderPrintTree(Node->Right);
   
    //뿌리 노드 출력
    printf("%c",Node->Data);
}

