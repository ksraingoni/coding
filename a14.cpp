
// showing an error!!


#include<iostream>
using namespace std;

struct distance
{
   int feet;
   float inches;
};


int main()
{
     distance d1, d2;
    cout<<"enter feet: ";cin>> d1.feet;
    cout<<"enter inches "; cin>> d1.inches;

    cout<<"\n enter feet :";
    cin>>d2.feet;
    cout<<"enter inches: ";
    cin>>d2.inches;

    cout<<"\n d1= ";
           cout<<d1.feet<<"\'-"<<d1.inches<<"\"";
    cout<<"\n d2= ";
       cout<<d2.feet<<"\'-"<<d2.inches<<"\"";

    cout<<endl;
    return 0;
}























