#include<iostream>
using namespace std;

int main()
{
      int a[20],n,num,i;
      cout<<"total number of elements in array =";
      cin>>n;
                       cout<<"enter array elements"<<endl;
       for( i=0; i<n; i++)
      { 

          cin>>a[i];
      }
     

     cout<<"enter element u want to serch";
     cin>>num;

     for(i=0;i<n;i++)
     {
         if(a[i]==num)
         cout<<"The element is at index"<<i;
        else
         cout<<"element is not present in array";

        break;

     }

return 0;





     



}