#include<iostream>
using namespace std;

int main()
{
    int c[20],max=0,min=0,n,i;
    cout<<"enter total number of elements in array";
    cin>> n ;
    
   cout<<"enter elements in array";

   for(i=0;i<n;i++){
   cin>>c[i];
   }
  
   min=max=c[0];

    for(i=1;i<n;i++)
 {   
   if(max<c[i])
   {
       max=c[i];
   }
    
    if(min>c[i])
    {
        min=c[i];
    }
 }
   
   cout<<"max number is :"<< max<<endl;
   cout<<"min number is :"<< min;
   
 
   return 0;







}


