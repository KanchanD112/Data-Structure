#include<stdio.h>
#include<stdlib.h>

//structure declaration
struct node
{
int data;        //4 bytes
struct node *next;  //8 bytes

};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE; 

void InsertFirst(PPNODE Head, int No)
{
    //step 1: Allocate memory for node
PNODE newn = NULL;
newn = (PNODE)malloc(sizeof(NODE));

//ste[ 2: Initialize the node
newn->data = No;
newn->next = NULL;

//step 3: Check whether Linked list is empty or not
if(*Head == NULL)   //LL is empty
{
 *Head = newn;
}
else    //LL contains atleast 1 node in it
{
  newn -> next = *Head;
  *Head = newn;
}
}

int main()
{
 PNODE First = NULL;

InsertFirst(&First, 51);//InsertFirst(60,51)
InsertFirst(&First, 21);//InsertFirst(60,21)
InsertFirst(&First, 11);//InsertFirst(60,51)
    return 0;
}