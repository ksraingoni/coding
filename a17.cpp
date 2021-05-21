#include<iostream>
using namespace std;

int main()
{
    int i,fact=1,j,n,temp=0;
    cout<<"enter a number";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++){
        fact=fact*j;
        }        
        
        temp=fact;

        
    cout<<"fact of given num is"<<i << fact<<endl;

    }
}