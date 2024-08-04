#include<stdio.h>
#include<stdlib.h>

int MaxDigonal(int **Arr, int iRow, int iCol)
{
    int i = 0; 
    int j = 0;
    int iMax = Arr[0][0];

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                if(iMax < Arr[i][j])
                {
                    iMax = Arr[i][j];
                }
            }
        }
    }
    return iMax;
}
int main()
{
    int i = 0;
    int j = 0;
    int iNo1 = 0;
    int iNo2 = 0;
    int **Arr = NULL;
    int iRet = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iNo1);

    printf("Enter the number of columns : \n");
    scanf("%d",&iNo2);

    Arr = (int**) malloc (iNo1 * sizeof(int*));
    if(Arr == NULL)
    {
        printf("Memory allocation faild \n");
        return -1;
    }

    for(i = 0; i < iNo1; i++)
    {
        Arr[i] = (int*)malloc(iNo2 * sizeof(int));
        if(Arr[i] == NULL)
        {   
            printf("Memory allocation faild \n");
            return -1;
        }
    }

    printf("Enter the numbers you want to add in array : \n");

    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    iRet = MaxDigonal(Arr, iNo1, iNo2);
    printf("Max digonal is : %d", iRet);

    for(i = 0; i < iNo1; i++)
    {
        free(Arr[i]);
    }
    free(Arr);
    
    return 0;
}