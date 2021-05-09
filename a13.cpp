#include<iostream>
using namespace std;

int main()
{
     int i,j,n;
     cout<<"enter N value:";
     cin>>n;

     for(i=1;i<=n;i++)
     {
         cout<<"\n";
         for(j=n;j>=i;j--)
         {
             cout<<i;
         }
     }
    
 return 0;

}










