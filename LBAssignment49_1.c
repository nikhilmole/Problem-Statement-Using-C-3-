#include<stdio.h>
#include<stdlib.h>

void Transpose(int **Arr, int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int temp = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = i + 1; j < iCol; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[j][i];
            Arr[j][i] = temp;
        }
    }
}

void Display(int **Arr, int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
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

    printf("Enter the number of rows and columns (square matrix): \n");
    scanf("%d", &iNo1);
    iNo2 = iNo1;  

    Arr = (int**)malloc(iNo1 * sizeof(int*));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    for(i = 0; i < iNo1; i++)
    {
        Arr[i] = (int*)malloc(iNo2 * sizeof(int));
        if(Arr[i] == NULL)
        {
            printf("Unable to allocate the memory \n");
            return -1;
        }
    }

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    printf("Original Matrix:\n");
    Display(Arr, iNo1, iNo2);

    Transpose(Arr, iNo1, iNo2);

    printf("Transposed Matrix:\n");
    Display(Arr, iNo1, iNo2);

    for(i = 0; i < iNo1; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0;
}
