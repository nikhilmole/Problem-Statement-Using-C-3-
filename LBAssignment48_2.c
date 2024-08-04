#include<stdio.h>
#include<stdlib.h>

int Frequency(int **Arr, int iRow, int iCol, int iNum)
{
    int i = 0;
    int j = 0;
    int iCnt = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {   
            if(Arr[i][j] == iNum)
            {
                iCnt++;
            }
        }
    }
    return iCnt;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int **Arr = NULL;
    int i = 0; 
    int j = 0;
    int iNo3 = 0;
    int iRet = 0;

    printf("Enter the number of rows: \n");
    scanf("%d", &iNo1);

    printf("Enter the number of columns: \n");
    scanf("%d", &iNo2);

    printf("Enter the number to find the frequency: \n");
    scanf("%d", &iNo3);

    Arr = (int**)malloc(iNo1 * sizeof(int*));
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

    printf("Enter the elements of the array:\n");
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    iRet = Frequency(Arr, iNo1, iNo2, iNo3);
    printf("Frequency of %d is: %d\n", iNo3, iRet);

    for(i = 0; i < iNo1; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}
