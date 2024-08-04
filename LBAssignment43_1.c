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
};
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}
void RevEle(PNODE First)
{
    int iDigit = 0;

    while(First != NULL)
    {
        int rev = 0;
        int iNum = First->data;
        while (iNum > 0)
        {
            iDigit = iNum % 10;
            rev = (rev * 10) + iDigit;
            iNum = iNum / 10;
        }
        printf("Reverse number is : %d\n",rev);
        First = First->next;
    }

}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 11);

    Display(Head);

    RevEle(Head);

    return 0;
}