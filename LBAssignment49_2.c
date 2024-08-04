#include<stdio.h>
#include<stdlib.h>

void ReverseRows(int **Arr, int iRow, int iCol)
{
    int i = 0, j = 0 , temp = 0;

    for (i = 0; i < iRow; i++)
    {
        int start = 0;
        int end = iCol - 1;

        while (start < end)
        {
            temp = Arr[i][start];
            Arr[i][start] = Arr[i][end];
            Arr[i][end] = temp;

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
    int i, j;
    int iNo1, iNo2;
    int **Arr = NULL;

    printf("Enter the number of rows: \n");
    scanf("%d", &iNo1);

    printf("Enter the number of columns: \n");
    scanf("%d", &iNo2);

    Arr = (int**)malloc(iNo1 * sizeof(int*));
    if (Arr == NULL)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    for (i = 0; i < iNo1; i++)
    {
        Arr[i] = (int*)malloc(iNo2 * sizeof(int));
        if (Arr[i] == NULL)
        {
            printf("Unable to allocate memory.\n");
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

    printf("Original Matrix:\n");
    Display(Arr, iNo1, iNo2);

    ReverseRows(Arr, iNo1, iNo2);

    printf("Matrix after reversing rows:\n");
    Display(Arr, iNo1, iNo2);

    for (i = 0; i < iNo1; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}
