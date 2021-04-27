#include<iostream>
using namespace std;

int  main()
{   
    int i,a[12],n;
  cout<<"enter size of array"<<endl;
   cin>>n;

 for(i=0;i<n;i++)
 {
    cin>>a[i];
 }

  for(i=0;i<n;i++)
 {
   cout<<  a[n-i-1];
 }

//   or
//  for(i=n-1;i>=0;i==)
//  {
//  cout<<a[i];
//  }
  return 0;
}













