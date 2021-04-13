#include<iostream>
using namespace std;
 // class 

 
 class rectangle
 {
     public:
     
     int lenght;
     int breadth;

     int area()
     {
         return lenght * breadth ;
     }
     
     int perimeter()
     {
         return 2*(lenght+breadth);
     }

 };

 int main()
 {
     rectangle r1,r2;
     r1.lenght=10;
     r1.breadth=12;
     r2.lenght=4;
     r2.breadth=2;

     cout<<"area of r1 is: " << r1.area()<<endl;
     cout<<"area of r2 is: "<< r2.area()<<endl;
     cout<<"perimeter of a r1 is :"<<r1.perimeter()<<endl;
     cout<<"perimetr of r2 is :"<< r2.perimeter()<<endl;

     return 0;

 }
 
  






