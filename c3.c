#include<stdio.h>   
#include<conio.h>

void main()
{
    int i,j,a[2][2],b[2][2],c[2][2];
    
    printf("enter elements of matrix A\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);

    }
    
    printf("enter matrix B elements\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&b[i][j]);
    } 

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)

        c[i][j]=a[i][j]+b[i][j];
    }
   
   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       printf("%d" ,c[i][j]);
       printf("\n");
   }


}