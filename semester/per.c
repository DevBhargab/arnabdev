#include<stdio.h>

int main()
{
int n,i,per=0;
printf(" Enter the no to be checked ");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
per=per+i;
}
if(per==n)
printf("\n It is a Perfect no");
else
printf("\n It is not a perfect no");
return 0;
}