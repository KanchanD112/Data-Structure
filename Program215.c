#include<Stdio.h>
#include<stdlib.h>

struct  node
{
  int data;
  struct node *next; 
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//void InsertLast(PPNODE Head, int no)
void Enqueue(PPNODE Head, int no)
{
PNODE newn = NULL;
PNODE temp = *Head;
newn = (PNODE)malloc(sizeof(NODE));
newn->data = no;
newn->next = NULL;

if(*Head == NULL)
{
    *Head = newn;
}
else
{
  while(temp->next != NULL)
  {
    temp = temp -> next;
  }
  temp->next = newn;
}
}
//void DeleteFirst(PPNODE Head)
int Dequeue(PPNODE Head)
{
int value = 0;
PNODE temp = *Head;
if(*Head == NULL)
{
    printf("QUEUE IS EMPTY..");
    return value;
}
else
{
    value = (*Head)->data;
    *Head = (*Head)->next;
    free(temp);
}
return value;
}
int Display(PNODE Head)
{
 printf("Element of stack are :\n");

 while(Head != NULL)
 {
     printf("| %d |\n",Head->data);
     Head = Head->next;
 }printf("\n");
}
int main()
{
  PNODE first = NULL;
  int iRet = 0;
  Enqueue(&first ,11);
   Enqueue(&first ,21);
    Enqueue(&first ,51);
     Enqueue(&first ,101);
      Enqueue(&first ,111);

      Display(first);

iRet = Dequeue(&first);
printf("Removed element from queue is : %d\n",iRet);

iRet = Dequeue(&first);
printf("Removed element from queue is : %d\n",iRet);
return 0;

}