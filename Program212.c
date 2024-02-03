#include<Stdio.h>
#include<stdlib.h>

struct  node
{
  int data;
  struct node *next;  /* data */
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//void InsertFirst(PPNODE Head, int no)
void Push(PPNODE Head, int no)
{
 
}
//void DeleteFirst(PPNODE Head)
int Pop(PPNODE Head)
{

}

int Display(PNODE Head)
{
 printf("Element of stack are :\n");

 while(Head != NULL)
 {
     printf("| %d |\n",Head->data);
     Head = Head->next;
 }
}
int main()
{
  PNODE first = NULL;
 
    return 0;
}