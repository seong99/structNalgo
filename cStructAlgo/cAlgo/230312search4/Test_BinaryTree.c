#include "BinaryTree.h"
#include <string.h>

int main(void)
{
    //노드 생성
    SBTNode* A = SBT_ConstructNode('A');
    SBTNode* B = SBT_ConstructNode('B');
    SBTNode* C = SBT_ConstructNode('C');
    SBTNode* D = SBT_ConstructNode('D');
    SBTNode* E = SBT_ConstructNode('E');
    SBTNode* F = SBT_ConstructNode('F');
    SBTNode* G = SBT_ConstructNode('G');

    //트리에 노드 추가
    A->Left = B;
    B->Left = C;
    B->Right = D;

    A->Right = E;
    E->Left = F;
    E->Right = G;

    //트리 출력
    printf("Preorder ...\n");
    SBT_PreorderPrintTree(A);
    printf("\n\n");

    printf("Inorder ...\n");
    SBT_InorderPrintTree(A);
    printf("\n\n");

    printf("Postorder ...\n");
    SBT_PostorderPrintTree(A);
    printf("\n\n");

    char c, lr1[3];

    printf("add Node : ");
    scanf("%c",&c);

    SBTNode* H = SBT_ConstructNode(c);

    printf("left or right L/R(len=3) : "); 
    scanf("%s",lr1);

    if(strcmp(lr1,"LLL") == 0)
    {
        C->Left = H;
    }
    else if(strcmp(lr1,"LLR") == 0)
    {
        C->Right = H;
    }
    else if(strcmp(lr1,"LRL") == 0)
    {
        D->Left = H;
    }
    else if(strcmp(lr1,"LRR") == 0)
    {
        D->Right = H;
    }
    else if(strcmp(lr1,"RLL") == 0)
    {
        F->Left = H;
    }
    else if(strcmp(lr1,"RLR") == 0)
    {
        F->Right = H;
    }
    else if(strcmp(lr1,"RRL") == 0)
    {
        G->Left = H;
    }
    else if(strcmp(lr1,"RRR") == 0)
    {
        G->Right = H;
    }
    else
    {
        printf("ERROR\n");
    }

    // 새 트리 출력
    printf("\nPreorder ...\n");
    SBT_PreorderPrintTree(A);
    printf("\n\n");

    printf("Inorder ...\n");
    SBT_InorderPrintTree(A);
    printf("\n\n");

    printf("Postorder ...\n");
    SBT_PostorderPrintTree(A);
    printf("\n\n");


    //트리 소멸
    SBT_DestructTree(A);

    return 0;
}