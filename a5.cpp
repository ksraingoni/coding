#include<iostream>
using namespace std;


class rectangle
{
    private:
    int length;
    int breadth;

   public:
    void setlenght(int l)
    {
        if(l>=0)
        length=l;
        else
         {
        cout<<"entered lenght cant be negative"<<endl;
        length=0;
         }
    }
     
     void setbreadth(int b)
     {
         if(b>=0)
         breadth=b;
         else
         {
         cout<<"entered breadth cant be negative"<<endl;
         breadth=0;
         }
          
     }

     int getlenght()
     {
         return length;
     }

    int getbreadth()
     {
         return breadth;

     }
    
    int area()
    {
        return length*breadth;
    }
    
    int perimeter()
    {
        return 2*(length+breadth);
    }


};


int main()
{
    rectangle r;
      

    r.setlenght(8);
    r.setbreadth(-9);
        
    
    cout<<"area is"<<r.area();

    return 0;
}