#include<stdio.h>
#include<stdlib>

struct node
[
    int data;
    struct node *next;
];
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = No;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn.next = First;
        First = newn;
    }
}
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
}

void Plindrome(PNODE First)
{
    
}
int main()
{
    PNODE Head = NULL;
    
    return 0;
}