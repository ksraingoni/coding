#include<iostream>
using namespace std;


class complex
{
    private:
        int real;
        int img;

     public:
     
         complex(int r=0,int i=0)
         {
             real=r;
             img=i;
         }
      
         complex operator+(complex x)
         {
                  
             complex temp;
             temp.real= real+x.real;
             temp.img= img+x.img;
             return temp;

         }


};



   int main()
    {
        complex c1(4,5);
        complex c2(5,5);
        complex c3;
        c3=c1+c2;
        
        cout<<"Hwww";
        return 0;

  }    



