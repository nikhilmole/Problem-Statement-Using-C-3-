#include<stdio.h>
#include<stdlib.h>

void AddColumn(int **Arr, int iRow, int iCol)
{
    int i = 0; 
    int j = 0;
    int iSum = 0;

    for(i = 0; i < iRow; i++)
    {
        iSum = 0;
        for(j = 0; j < iCol; j++)
        {
            iSum = iSum + Arr[j][i];
        }
        printf("Sum of column %d is: %d\n", j, iSum);
    }
}
int main()
{
    int **Arr = NULL;
    int i = 0;
    int j = 0;
    int iRet = 0;
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iNo1);

    printf("Enter the number of columns : \n");
    scanf("%d",&iNo2);

    Arr = (int**)malloc(iNo1 * sizeof(int*));
    if(Arr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    for(i = 0; i < iNo1; i++)
    {
        Arr[i] = (int*)malloc(iNo2 * sizeof(int));
        if(Arr[i] == NULL)
        {
            printf("Unable to allocate the memory\n");
            return -1;
        }
    }

    printf("Enter the numbers of elements you want to add in Array\n");

    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }   

    AddColumn(Arr, iNo1, iNo2);

    free(Arr);

    return 0;
}