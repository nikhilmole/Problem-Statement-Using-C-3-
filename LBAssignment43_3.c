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
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
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
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}
void ProDigit(PNODE First)
{
    int iDigit = 0;
    int iNum = 0;
    int iPro = 1;

    while(First != NULL)
    {
        iNum = First->data;
        iPro = 1;
        while(iNum > 0)
        {
            iDigit = iNum % 10;
            iPro = iPro * iDigit;
            iNum = iNum / 10;
        }
        printf("product is : %d\n",iPro);
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

    ProDigit(Head);

    return 0;
}