

class Program411
{
    public static void main(String arg[])
    {
        int iRet=0;
      SinglyLL obj =  new SinglyLL();

      obj.InsertFirst(51);
      obj.InsertFirst(21);
      obj.InsertFirst(11);

      obj.Display();
      iRet = obj.Count();
      System.out.println("Number of elements are"+iRet);

      obj.InserLast(101);
      obj.InserLast(111);
      obj.InserLast(121);

      obj.Display();
      iRet = obj.Count();
      System.out.println("Number of elements are"+iRet);

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

public void InsertFirst(int no)
{
   node newn = new node(no);

   if(first == null)   // LL is empty
   {
     first = newn;
   }
   else 
   {
   newn.next =first;
   first = newn;
   }
 Count++;
}
public void InserLast(int no)
{
    node newn = new node(no);

   if(first == null)   // LL is empty
   {
     first = newn;
   }
   else 
   {
    node temp = first;

    while(temp.next!=null)
    {
        temp = temp.next;
    }
    
    temp.next=newn;
   }
 Count++;
}
public void InsertAtPos(int no, int ipos){}
public void DeleteFirst(){}
public void DeleteLast(){}
public void DeleteAtPos(){}
public void Display()
{
    node temp = first;

    System.out.println("Elements of the Linked list are : ");

    while(temp!=null)
    {
    System.out.print("| "+temp.data +" |->");
    temp= temp.next;
    }
    System.out.println("null");
}
public int Count()
{
    return Count;
}

}