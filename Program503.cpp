#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;
            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            cout<<"Elements of the array are : "<<endl;
            int iCnt = 0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }
      
      //Note :Array should be sorted
      void BubbleSortEfficient()
      {
        int iTemp=0;
        int i =0;
        int j=0;
        bool bflag = false;
            //1   2     3
        for(i=0;i<iSize;i++)  //outer
        {       
            cout<<"Data after pass : "<<(i+1)<<"\n";

            bflag=false;
            //1     2        3
            for(j=0;j<iSize-i-1;j++)  //inner
            {
                if(Arr[j] <Arr[j+1])
                {
                    iTemp = Arr[j];
                    Arr[j] = Arr[j+1];
                    Arr[j+1]=iTemp;

                    bflag=true;
                }
            }
            if(bflag==false)
            {
                break;
            }
            Display();
        }
        
      }

};  // End of class

int main()
{
    int iLength = 0;
    int iRet = 0;
   int iValue = 0;
   bool bRet = false;
    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();
  
  aobj->BubbleSortEfficient();

  aobj->Display();
    delete aobj;

    return 0;
}