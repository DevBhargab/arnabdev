#include<stdio.h>
int main()
{
int a,b, c;
printf("Enter the value of A ,B and C--------");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&b>c)
printf("\nThe Number %d is Biggest ",a);
else
if(b>a&&a>c)
printf("\nThe Number %d is Biggest ",b);
else
printf("\nThe Number %d is Biggest ",c);
    return 0;
}