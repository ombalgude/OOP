
#include<iostream>
using namespace std;

template<class T>   //Function Template Declaration // T is a template argument that accepts different data types (int, float)   
       
       
        T selection_sort()        //Template function
        {
        T a[5];
        T temp;
        for(int i=0;i<5;i++)        //Accepting elements
            {
                cout<<"a["<<i<<"]=";
                cin>>a[i];
            }
           
   
         for(int i=0;i<5;i++)            //Sorting logic
         {
              for(int j=i+1;j<5;j++)
              {
                   if(a[i]>a[j])
                   {
                        temp=a[i];
                        a[i]=a[j];
                       a[j]=temp;
                }
            }
         }
         cout<<"Elements after sorting:\n"; //printing elements after sorting
         for(int i=0;i<5;i++)        
        {
            cout<<a[i]<<"\n";
        }
     }   // Ending of function template


int main()
{
       
       
    cout<<"Enter Integer elements for sorting...\n";
   
    selection_sort<int>();
   
    cout<<"Enter Floating elements for sorting...\n";
   
    selection_sort<float>();
}
