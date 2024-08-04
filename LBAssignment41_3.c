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
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*First == NULL) 
    {
        *First = newn;
    } else 
    {
        newn->next = *First;
        *First = newn;
    }
}

int LLAddition(PPNODE First) 
{
    PNODE temp = *First;
    int iAdd = 0;

    while (temp != NULL) 
    {
        iAdd = iAdd + temp->data;
        temp = temp->next;
    }
    return iAdd;
}

void Display(PNODE First) 
{
    while (First != NULL) 
    {
        printf("|%d|->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 70);
    InsertFirst(&Head, 60);
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 40);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);


    Display(Head);

    iRet = LLAddition(&Head);
    printf("Addition of all elements: %d\n", result);

    return 0;
}
