#include<iostream>
using namespace std;
#include<string>


int main()
{

    string s1= "my name is krishna pal singh";
    string s2= "  studying in ksrm";
    string s3;
    int n;
   s3=s1 + s2;
    n= s1.find("singh");
    cout<<"singh found at"<<n<<endl;
    cout<<s3<<endl;

    return 0;
    

}
