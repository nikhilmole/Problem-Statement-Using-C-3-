#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No) {
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if (*First == NULL) {
        *First = newn;
    } else {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First) {
    while (First != NULL) {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

void AddofDigits(PNODE First) {
    while (First != NULL) {
        int iSum = 0;
        int num = First->data;
        int iDigit = 0;

        while (num > 0) 
        {
            iDigit= num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }
        
        printf("Addition of digits in %d is: %d\n",First->data, iSum);
        First = First->next;
    }
}

int main() {
    PNODE Head = NULL;

    InsertFirst(&Head, 89);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 28); 
    InsertFirst(&Head, 11);

    Display(Head);

    AddofDigits(Head);

    return 0;
}
