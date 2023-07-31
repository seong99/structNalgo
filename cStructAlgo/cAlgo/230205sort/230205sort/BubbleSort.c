//다른 파일 타겟 멤버십 해제 후 컴파일

#include <stdio.h>
 
void BubbleSort(int DataSet[], int Length)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    
    for(i=0;i<Length-1;i++)
    {
        for(j=0;j<Length-(i+1);j++)
        {
            if(DataSet[j]>DataSet[j+1])
            {
                temp = DataSet[j+1];
                DataSet[j+1] = DataSet[j];
                DataSet[j] = temp;
            }
        }
    }
}
 
int main()
{
    int DataSet[] = {6, 4, 2, 3, 1, 5};
    int Length = sizeof DataSet / sizeof DataSet[0];
    int i = 0;
    
    printf("Before Bubble Sort\n");
    for(i=0;i<Length;i++)
    {
        printf("%d ",DataSet[i]);
    }
 
    BubbleSort(DataSet, Length);
    
    printf("\n\nAfter Bubble Sort\n");
    for ( i=0; i<Length; i++ )
    {
        printf("%d ", DataSet[i]);
    }
 
    printf("\n");
 
    return 0;
}
  
