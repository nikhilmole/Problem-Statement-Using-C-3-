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

    if (newn == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

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
    while(First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int MaxNum(PPNODE First)
{
    PNODE temp = *First;

    int iMax = temp->data;

    while(temp != NULL)
    {
        if(temp->data > iMax)
        {
            iMax = temp->data;
        }
        temp = temp->next;
    }

    return iMax;
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 240);
    InsertFirst(&Head, 320);
    InsertFirst(&Head, 230);
    InsertFirst(&Head, 110);

    Display(Head);

    int max = MaxNum(&Head);
    printf("Maximum number in the list: %d\n", max);
    
    return 0;
}
