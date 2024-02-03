

class Program407
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
}   
class SinglyLL
{
   private node first;
   private int count;
}