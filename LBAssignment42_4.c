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
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Secondmaxnumber(PNODE First)
{
    int max = First->data;
    int second_max = -1;
    
    PNODE temp = NULL;

    temp = First->next;

    if (First == NULL || First->next == NULL) 
    {
        return -1;
    }

    while (temp != NULL)
    {
        if (temp->data > max)
        {
            second_max = max;
            max = temp->data;
        }
        else if ((temp->data > second_max) && (temp->data < max))
        {
            second_max = temp->data;
        }
        temp = temp->next;
    }

    return second_max;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    Display(Head);

    iRet = Secondmaxnumber(Head);

    if (iRet != -1) 
    {
        printf("Second maximum number is: %d\n", iRet);
    } else 
    {
        printf("There are less than 2 elements in the list.\n");
    }

    return 0;
}
