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
       (*Tail)->next = newn;
       newn->prev = (*Tail);
       (*Tail) = newn;
    }

       (*Tail)->next = *Head;
       (*Head)->prev = *Tail;
}
void InsertAtPos(PNODE Head, PNODE Tail, int no, int ipos)
{}
void DeleteFirst(PNODE Head, PNODE Tail)
{}
void DeleteLast(PNODE Head, PNODE Tail)
{}
void DeleteAtPos(PNODE Head, PNODE Tail, int ipos)
{}
int Display(PNODE Head, PNODE Tail)
{
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("| %d | <=>",Head->data);
            Head = Head->next;
        
        } while (Head != Tail->next);
        
    }
}
int Count(PPNODE Head, PPNODE Tail)
{
    return 0;
}


int main()
{
  PNODE first = NULL;
  PNODE last = NULL;

  InsertFirst(&first,&last,51);
  InsertFirst(&first,&last,21);
  InsertFirst(&first,&last,11);

  InsertLast(&first,&last,101);
  InsertLast(&first,&last,111);
 InsertLast(&first,&last,121);

Display(first,last);

return 0;
}