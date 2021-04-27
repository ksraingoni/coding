#include<iostream>
using namespace std;

class student
{
  private:

      string name;
      int roll;
      int m1,m2,m3;

   public:

   student(int r, string n,int a, int b, int c)
   {
       roll=r;
       name=n;
       m1=a;
       m2=b;
       m3=c;

   }

  char grade()
  {
    float avg=(m1+m2+m3/3);
    {
      if(avg>=60)
      {
          return 'a';  
      }
     
      else if(avg<60 && avg >=40)
     {
         return 'b';
     }
     else {
     return 'c';
     }
     }
  }

};

int main()
{

   string n;
   int r,total;
   int a,b,c;
   float avg;
       student s(r,n,a,b,c);
    cout<<"enter name:-";
    cin>>n;
   cout<<"enter roll number:";
    cin>>r;
    cout<<"enter marks of three subjects"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    
      total=a+b+c;
    cout<<"total of 3 subj is"<<total<<endl;
    cout<<"grade is"<<s.grade()<<endl;

    return 0;

}








