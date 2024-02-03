

class Program408
{
    public static void main(String arg[])
    {
      SinglyLL obj =  new SinglyLL();

      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.Display();
    }
}
class node       //struct node
{
    public int data;
    public node next;  /// struct node *next

    public node(int no)
    {
        data = no;
        next = null;
    }
}   
class SinglyLL
{
   private node first;
   private int Count;

   public SinglyLL()
   {
    first=null;
    Count=0;
   }

public void InsertFirst(int no){}
public void InserLast(int no){}
public void InsertAtPos(int no, int ipos){}
public void DeleteFirst(){}
public void DeleteLast(){}
public void DeleteAtPos(){}
public void Display(){}
public int Count(){return Count;}

}