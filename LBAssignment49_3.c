#include<stdio.h>
#include<stdlib.h>

void ReverseCol(int **Arr, int iRow, int iCol)
{
    int i = 0; 
    int temp = 0;
    int j = 0;
    int start = 0;
    int end = 0;

    for(i = 0; i < iCol; i++)
    {
        start = 0;
        end = iRow -1;

        while(start < end)    
        {
            temp = Arr[start][i];
            Arr[start][i] = Arr[end][i];
            Arr[end][i] = temp;

            start++;
            end--;
        }
    }
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
    int iNo1 = 0;
    int iNo2 = 0;
    int **Arr = NULL;

    printf("Enter the number of rows : \n");
    scanf("%d",&iNo1);

    printf("Enter the number of column : \n");
    scanf("%d",&iNo2);

    Arr = (int**)malloc(iNo1 * sizeof(int*));
    if(Arr == NULL)
    {
        printf("Unable to alocate the memory \n");
        return -1;
    }

    for(i = 0; i < iNo1; i++)
    {
        Arr[i] = (int*)malloc(iNo2 * sizeof(int));
        if(Arr[i] == NULL)
        {
            printf("Unable to alocate the memory \n");
            return -1;
        }
    }
    printf("Please enter the elements : \n");
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    printf("Actual matrix \n");

    Display(Arr, iNo1, iNo2);

    ReverseCol(Arr, iNo1, iNo2);

    printf("Reverse column matrix\n");
    Display(Arr, iNo1, iNo2);

    return 0;
}