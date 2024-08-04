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

int SearchLastOcc(PNODE First, int No)
{
    int LastiPos = -1;
    int iCnt = 1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            LastiPos = iCnt;
        }
        First = First->next;
        iCnt++;
    }
    
    return LastiPos;
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

    iRet = SearchLastOcc(Head, 30);
    
    if(iRet != -1)
    {
        printf("Last Occurrence of 30 in linked list is : %d\n", iRet);
    }
    else
    {
        printf("The number 30 is not in the linked list.\n");
    }

    return 0;
}
