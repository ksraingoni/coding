#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i,j=1;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
   {
       j=j*i;
   } printf("the fact of given num is %d",j);
   getch();
}