#include <stdio.h>
#include <stdlib.h>

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
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

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

int SearchFirstOcc(PNODE First, int No)
{
    int iPos = 1;

    while (First != NULL)
    {
        if (First->data == No)
        {
            return iPos;
        }
        First = First->next;
        iPos++;
    }
    return -1; 
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 70);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 40);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);

    Display(Head);

    iRet = SearchFirstOcc(Head, 30);
    if (iRet != -1)
    {
        printf("First occurrence of 30 is at position: %d\n", iRet);
    }
    else
    {
        printf("30 is not found in the linked list.\n");
    }

    return 0;
}
