//Customised Database Management System

class Program418
{
    public static void main(String Arg[])
    {
     DBMS obj = new DBMS();

     obj.InsertIntoTable(1,"Amit","Pune",89);
     obj.InsertIntoTable(2,"Pooja","Mumbai",95);
     obj.InsertIntoTable(3,"Rahul","Satara",80);
     obj.InsertIntoTable(1,"Neha","Pune",78);

    }
}
class node
{

  public int Rno;
  public String Name;
  public String City;
  public int Marks;
  public node next;

  public node next;

  public node(int A, String B, String C, int D)//constructor
   {
     Rno = A;
     Name = B;
     City = C;
     Marks = D;
     next = null;
   }
}
class DBMS
{
    private node first;

     public DBMS()
     {
        first = null;
        System.out.println("DBMS initialised successfully...");
        System.out.println("Student Table gets created successfully...");
     }

    //Insertlast ch logic
    public void InsertIntoTable(int Rno, String name, String City, int Marks)
    {
     node newn = new node(Rno,Name,City,Marks);

     node temp = first;
     while(temp.next != null)
     {
         temp = temp.next;
     }
     temp.next = newn;

     System.out.println("One record gets inserted successfully...");
    }
}