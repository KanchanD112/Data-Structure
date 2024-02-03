#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int no)
{
 PNODE newn=NULL;
 PNODE temp =*Head;

 newn=(PNODE)malloc(sizeof(NODE));
 newn->data=no;
 newn->lchild=NULL;
 newn->rchild=NULL;

if(*Head==NULL)//BST(root) is empty
{
    *Head=newn;
}
else   //BST contains atleast one node
{
    while(1)//unconditional looop
    {
        if(no==temp->data)
        {
            printf("Unable to insert as data is already present\n");
            free(newn);
            break;
        }
        else if(no>temp->data)
        {

            if(temp->rchild==NULL)
            {
            temp->rchild=NULL;
             break;
            }
            temp= temp->rchild;
        }
        else if(no<temp->data)
        {
        if(temp->lchild==NULL)
        {
             temp->lchild=NULL;
             break;
        }
        temp= temp->lchild;
        }
    }
}
}

int main()
{

  PNODE first = NULL;
  Insert(&first,21);
  Insert(&first,11);
  Insert(&first,51);
    return 0;
}