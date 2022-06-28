#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10][10],b[10][10],c[10][10],r1,c1,i,j,k;
printf("enter the number of row=");
scanf("%d",&r1);
printf("enter the number of column=");
scanf("%d",&c1);
printf("enter the first matrix element=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix element=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("multiply of the matrix=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=0;
for(k=0;k<c1;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
}
//for printing result
for(i=0;i<r1;i++)
{for(j=0;j<c1;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}