#include<stdio.h>
#include<stdlib.h>

//structure declaration
struct Node
{
int data;        //4 bytes
struct node *next;  //8 bytes

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE; 

void InsertFirst(PPNODE Head, int No)
{
PNODE newn = NULL;
newn = (PNODE)mallac(sizeof(NODE));

newn->data = No;
newn->next = NULL;

}

int main()
{
 PNODE First = NULL;

InsertFirst(&First, 51);
InsertFirst(&First, 21);
InsertFirst(&First, 11);
    return 0;
}