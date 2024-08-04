#include<stdio.h>
#include<stdlib.h>

int AddDigonal(int **Arr,int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int iSum = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                iSum = iSum + Arr[i][j];
            }
        }
    }
    return iSum;
}
int main()
{
    int **Arr = NULL;
    int iNo1 = 0;
    int iNo2 = 0;
    int i = 0;
    int j = 0;
    int iRet = 0;

    printf("Enter the number of rows: \n");
    scanf("%d", &iNo1);

    printf("Enter the number of columns: \n");
    scanf("%d", &iNo2);

    Arr = (int**)malloc(iNo1 * sizeof(int*));
    if(Arr == NULL)
    {
        printf("Memory allocation faild \n");
    }

    for (i = 0; i < iNo1; i++)
    {
        Arr[i] = (int*)malloc(iNo2 * sizeof(int));
        if(Arr[i] == NULL)
        {
            printf("Unable to allocate memory \n");
        }
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < iNo1; i++)
    {
        for (j = 0; j < iNo2; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    iRet = AddDigonal(Arr,iNo1,iNo2);
    printf("Addition of Digonal is : %d",iRet);

    for(i = 0; i < iNo1; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}
