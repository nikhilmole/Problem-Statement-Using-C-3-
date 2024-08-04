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
    newn->next = NULL;
    newn->data = No;

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
void MaxDigitInNode(PNODE First)
{
    int iMax = 0;
    int iNum = 0;
    int iDigit = 0;

    while(First != NULL)
    {   
        iNum = First->data;
        while(iNum > 0)
        {
            iDigit = iNum % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iNum = iNum / 10; 
        }
        printf("%d\t",iMax);
        First = First->next;
    }
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,419);
    InsertFirst(&Head,532);
    InsertFirst(&Head,250);
    InsertFirst(&Head,11);

    Display(Head);

    MaxDigitInNode(Head);

    return 0;
}