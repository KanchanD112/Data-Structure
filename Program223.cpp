#include<iostream>
using namespace std;


typedef struct node
{
 int data;
 struct node *next;

}NODE, *PNODE, **PPNODE;

class SinglyLL
{
  private:
    PNODE first;
    int Count;

public:
    SinglyLL()
    {
        cout<<"Inside constructor\n";
     first = NULL;
     Count = 0;
    }

    void InsertFirst(int no)
    {
   PNODE newn = NULL;

   newn = new NODE;
   newn->data = no;
   newn->next = NULL;

  if(first == NULL)  //if(Count == 0)
  {
    first = newn;
  }
  else
  {
  newn->next = first;
  first = newn;
  }
  Count++;

   }
    void InsertLast(int no)
    {
     PNODE newn = NULL;
  PNODE temp = first;
   newn = new NODE;
   newn->data = no;
   newn->next = NULL;

  if(first == NULL)  //if(Count == 0)
  {
    first = newn;
  }
  else
  {
  while(temp->next != NULL)
  {
   temp = temp->next;
  }
  temp->next =newn;
  }
  Count++;

    }
    
    void Display()
    {
    PNODE temp = first;
    while(temp!=NULL)    //type 1
    {
       cout<<"| "<<temp->data<<" | -> ";
       temp = temp->next;
    }
    cout<<"NULL \n";
    }
    void CountNode()
    {
        return Count;
    }


};

int main()
{

  SinglyLL obj;
  int iRet = 0;
  obj.InsertFirst(111);
  obj.InsertFirst(101);
 obj.InsertFirst(51);
  obj.InsertFirst(21);
   obj.InsertFirst(11);

 obj.InsertLast(121);
 obj.InsertLast(151);
 obj.InsertLast(201);
 obj.Display();

iRet = obj.CountNode;
cout<<"Number of elements in the linked list are : "<<iRet<<"\n";
    return 0;
}