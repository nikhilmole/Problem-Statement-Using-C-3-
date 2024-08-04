#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

void MinDigitInNode(PNODE First)
{
    while (First != NULL)
    {
        int iNum = First->data;
        int iMin = 9; 

        while (iNum > 0)
        {
            int iDigit = iNum % 10;
            if (iDigit < iMin)
            {
                iMin = iDigit; 
            }
            iNum = iNum / 10;
        }

        printf("Minimum digit in %d is: %d\n", First->data, iMin);
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    Display(Head);

    MinDigitInNode(Head);

    return 0;
}
