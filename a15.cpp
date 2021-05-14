#include<iostream>
using namespace std;

int main()
{
    void intfrac(float,float&, float&);
    float number,intpart,fracpart;
   
     do
     {
        cout<<"enter a real number:";
        cin>>number;
        intfrac(number,intpart,fracpart);
        cout<<"intergra part is "<<intpart<<endl;
        cout<<"fractional part is "<<fracpart<<endl;

     }while(number!=0.00);

    return 0;
}

void intfrac( float n, float& intp , float& fracp)
{
    long temp=static_cast<long>(n);
    intp = static_cast<float>(temp);
    fracp = n-intp;
}
