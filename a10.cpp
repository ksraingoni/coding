#include<iostream>
using namespace std;

int main()
{   
    int i,a[20],j,n,temp;
    
    cout<<"enter size of array:-";
    cin>>n;
    for(i=0;i<n;i++){
       cout<<"enter array elements["<<i+1<<"]:";
       cin>>a[i];
        }

    
for(i=0;i<n;i++)
{  
    for(j=i+1;j<n;j++)
       
       if(a[j]<a[i])
       {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;

       }
    
}


cout<<" Ascending oreder is  :";
for(i=0;i<n;i++)
{

    cout<<"\t";
    cout<<a[i]  ;
}




return 0;





}








