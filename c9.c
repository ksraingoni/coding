#include<stdio.h>
#include<conio.h>

void main()
{
    int num,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    
    while(num!=0)
    { 
        num=num/10;
        count++;
        
    }
       printf("number of digits in given intizer = %d",count);
       getch();

}