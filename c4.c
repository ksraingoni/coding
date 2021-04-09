#include<stdio.h>
#include<conio.h>

void main()
{
   int x,r,rev= 1,temp;
   temp=x;
   printf("enter a number");
   scanf("%d",&x);

   while(x !=0)
   {
        r=x%10;
       rev= rev*10+r;
       x/=10;

   } 
   if(temp==rev)
   
       printf("number is palindrome number");
    else printf("not a palindrome");
    

   getch();
}
   


