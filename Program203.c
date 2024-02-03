#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) &&(*Tail == NULL)) //LL is empty
    {
      *Head = newn;
      *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head= newn;

    }

       (*Tail)->next = *Head;
       (*Head)->prev = *Tail;
}
void InsertLast(PPNODE Head, PPNODE Tail, int no)
{

    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head == NULL) &&(*Tail == NULL)) //LL is empty
    {
      *Head = newn;
      *Tail = newn;
    }
    else
    {
       
    }

       (*Tail)->next = *Head;
       (*Head)->prev = *Tail;
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{}
void DeleteFirst(PPNODE Head, PPNODE Tail)
{}
void DeleteLast(PPNODE Head, PPNODE Tail)
{}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{}
void Display(PPNODE Head, PPNODE Tail)
{}
int Count(PPNODE Head, PPNODE Tail)
{
    return 0;
}


int main()
{
  PNODE first = NULL;
  PNODE last = NULL;

return 0;
}