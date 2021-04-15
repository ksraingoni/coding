#include<iostream>
using namespace std;

int main()
{
   int month,day,totaldays,i;
   int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   cout<<"enter month(1 to 12): " ;
   cin>>month;
   cout<<"enter day: ";
   cin>>day;
   totaldays=day;

   for(i=0;i<month;i++)
       totaldays=totaldays+ days_per_month[i];
   cout<<"number of days from the starting of the year to give day is: "<<totaldays;
   

return 0;

}

