#include<iostream>
using namespace std;
#include<process.h>

int main()
{
    unsigned long num;
    int i ;
    cout<<"enter a number:";
    cin >>num ;

    for(i=2;i<=num/2;i++)
    {
         if(num%i==0){
         cout<<"number is not prime number",num;
         exit(0);
         }
         cout<<"number is prime number";
         break; 
    }
        
       
 return 0;
}
