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

    if(*First == NULL) 
    {
        *First = newn;
    } else 
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

void PerfectNum(PNODE First) 
{
    while(First != NULL) 
    {
        int num = First->data;
        int iSum = 1;

        for(int i = 2; i <= num / 2; i++) 
        {
            if(num % i == 0) 
            {
                iSum = iSum + i;
            }
        }

        if((iSum == num) && (num != 1)) 
        {
            printf("%d is a perfect number.\n", num);
        }

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

    PerfectNum(Head);

    return 0;
}
