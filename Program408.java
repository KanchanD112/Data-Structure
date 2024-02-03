

class Program408
{
    public static void main(String arg[])
    {
      SinglyLL obj =  new SinglyLL();
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
   private int count;

   public SinglyLL()
   {
    first=null;
    count=0;
   }
}