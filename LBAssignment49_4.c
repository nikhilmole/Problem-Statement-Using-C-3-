#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckIdentity(int **Arr, int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if (iRow != iCol) 
    {
        return false;
    }

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            if (i == j && Arr[i][j] != 1)
            {
                return false;
            }
            else if (i != j && Arr[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

void Display(int **Arr, int iRow, int iCol)
{
    int i, j;

    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i = 0;
    int j = 0;
    int **Arr = NULL;
    int iNo1 = 0;
    int iNo2 = 0;
    bool bRet = false;

    printf("Enter the number of rows: \n");
    scanf("%d", &iNo1);

    printf("Enter the number of columns: \n");
    scanf("%d", &iNo2);

    Arr = (int**)malloc(iNo1 * sizeof(int*));
    if (Arr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    for (i = 0; i < iNo1; i++)
    {
        Arr[i] = (int*)malloc(iNo2 * sizeof(int));
        if (Arr[i] == NULL)
        {
            printf("Unable to allocate memory\n");
            return -1;
        }
    }

    printf("Please enter the elements: \n");
    for (i = 0; i < iNo1; i++)
    {
        for (j = 0; j < iNo2; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    printf("Matrix:\n");
    Display(Arr, iNo1, iNo2);

    bRet = CheckIdentity(Arr, iNo1, iNo2);
    if (bRet == true)
    {
        printf("Matrix is an Identity matrix\n");
    }
    else
    {
        printf("Matrix is not an Identity matrix\n");
    }

    for (i = 0; i < iNo1; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}
