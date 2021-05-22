#include<iostream>
using namespace std;

int main()
{
    int a,b,i,j,fact=1;
    cout<<"enter a starting  number";
    cin>>a;

    cout<<"enter last number in range";
    cin>>b;


    for(i=a;i<=b;i++)
    {   
        fact=1;
        for(j=1;j<=i;j++){
        fact=fact*j;
        }        
        

    cout<<"fact of given num is"<<i << fact<<endl;

    }
}