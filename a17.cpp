#include<iostream>
using namespace std;

int fac(int i,int n);
int main()
{        
    int i,j,n,fact=1;
    for(i=1;i<=n;i++)
    {
            cout<<"enter a number :";
    cin>>n;

        fac(i,n);                
          cout<<"factorial of a number is:"<<i<<"\t"<<fact<<endl;

    }

    return 0;

}

int fac(int i,int n)
{    
    int j,n,fact=1;
    for(int j=1;j<=n;j++)
    {
        fact=fact*j;
        return fact;
    }

}