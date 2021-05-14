// simple class program 

#include<iostream>
using namespace std;

class x
{
    private: 
    int somedata;
    public:
        void setdata( int d){
        somedata=d;
        }
        void showdata()
        {
            cout<<"data is "<<somedata<<endl;
        }


};


int main()
{
   x s1,s2;
   s1.setdata(23);
   s2.setdata(654);

s1.showdata();
s2.showdata();
return 0;

}





