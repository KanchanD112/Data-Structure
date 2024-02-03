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

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
if((*Head == NULL) && (*Tail == NULL))
{
  return;
}
else if(*Head == *Tail)
{
 free(*Head);
 *Head = NULL;
 *Tail = NULL;
}
else   //ll contain more than 1 node
{
    (*Head)=(*Head)->next;
    free((*Tail)->next);
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head; //free((*Head)->prev);
}

}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
{
  return;
}
else if(*Head == *Tail)
{
 free(*Head);
 *Head = NULL;
 *Tail = NULL;
}
else
{
 (*Tail) = (*Tail)->prev;
    free((*Tail)->next);  //free((*Head)->prev);
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;

}
}

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
int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if(Head != NULL && Tail !=NULL)
    {
        do
        {
           iCnt++;
           Head = Head->next;

        } while(Head!= Tail->next);
        
    }return iCnt;
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{
int Size = 0, i=0;
PNODE newn = NULL;
PNODE temp = *Head;
Size = Count(*Head, *Tail);
if((ipos < 1) || (ipos > Size + 1))
{
printf("Invalid position\n");
return;
}

if(ipos == 1)
{
    InsertFirst(Head, Tail  , no);
}
else if(ipos == Size + 1)
{
    InsertLast(Head, Tail, no);
}
else
{
newn = (PNODE)malloc(sizeof(NODE));
newn->data = no;
newn->next = NULL;
newn->prev = NULL;

 for(i = 1;i<ipos-1;i++)
 {
    temp = temp -> next;
 }
 newn->next = temp->next;
 temp->next->prev = newn;
 temp->next = newn;
 newn->prev = newn;

}
}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{
    int Size = 0, i = 0;

PNODE temp = *Head;
Size = Count(*Head, *Tail);
if((ipos < 1) || (ipos > Size + 1))
{
printf("Invalid position\n");
return;
}

if(ipos == 1)
{
    DeleteLast(Head, Tail);
}
else if(ipos == Size )
{
    DeleteLast(Head, Tail);
}
else
{
    for(i=1;i<ipos-1;i++)
    {
          temp = temp -> next;
          }
temp->next = temp->next->next;
free(temp->next->prev);
temp->next->prev = temp;


}
}
int main()
{
  PNODE first = NULL;
  PNODE last = NULL;
  int iRet = 0;
  InsertFirst(&first,&last,51);
  InsertFirst(&first,&last,21);
  InsertFirst(&first,&last,11);

  InsertLast(&first,&last,101);
  InsertLast(&first,&last,111);
 InsertLast(&first,&last,121);

Display(first, last);
iRet = Count(first, last);
printf("number of nodes are :%d\n",iRet);

InsertAtPos(&first,&last,105,5);
Display(first, last);
iRet = Count(first, last);
printf("number of nodes are :%d\n",iRet);

DeleteAtPos(&first,&last,5);
Display(first, last);
iRet = Count(first, last);
printf("number of nodes are :%d\n",iRet);

DeleteFirst(&first,&last);
Display(first, last);
iRet = Count(first, last);
printf("number of nodes are :%d\n",iRet);

DeleteLast(&first,&last);
Display(first, last);
iRet = Count(first, last);
printf("number of nodes are :%d\n",iRet);


return 0;
}