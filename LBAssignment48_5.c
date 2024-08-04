#include<stdio.h>
#include<stdlib.h>

void SwapRow(int **Arr, int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int temp = 0;

    for(i = 0; i < iRow-1; i = i+2)
    {
        for(j = 0; j < iCol; j++)
        {
            temp = Arr[i][j];
            Arr[i][j] = Arr[i+1][j];
            Arr[i+1][j] = temp;
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
            printf("%d\t",Arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int **Arr = NULL;
    int i = 0;
    int j = 0;
    int iNo1 = 0;
    int iNo2 = 0;

    printf("Enter the numbetr of rows : \n");
    scanf("%d",&iNo1);

    printf("Entert the number of coloumns : \n");
    scanf("%d",&iNo2);

    Arr = (int**)malloc(iNo1 * sizeof(int*));
    if(Arr==NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }
    
    for(i = 0; i < iNo1; i++)
    {
        Arr[i] = (int*) malloc(iNo2 * sizeof(int));
        if(Arr[i] == NULL)
        {
            printf("Unable to allocate the memory\n");
            return -1;
        }
    }

    printf("Enter the number of elements : \n");
    for(i = 0; i < iNo1; i++)
    {
        for(j = 0; j < iNo2; j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }
    
    printf("Original array:\n");
    Display(Arr, iNo1, iNo2);

    SwapRow(Arr, iNo1, iNo2);

    printf("Array after swapping rows:\n");
    Display(Arr, iNo1, iNo2);

    for(i = 0; i < iNo1; i++)
    {
        free(Arr[i]);
    }
    free(Arr);

    return 0 ;
}