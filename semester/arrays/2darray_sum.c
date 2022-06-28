#include<stdio.h>

    int main(){
    int r,c1,i,j,a[10][10],b[10][10],c[10][10] , d[10][10] ,e[10][10];
printf("Enter the number of rows and columns of matrix 1 \n");
scanf("%d%d", &r, &c1);
printf("Enter the elements of first matrix \n");
for (i = 0; i < r; i++)
for (j = 0; j < c1; j++)
scanf("%d", &a[i][j]);
printf("Enter the elements of second matrix\n");
for (i = 0; i < r; i++)
for (j = 0 ; j < c1; j++)
scanf("%d", &b[i][j]);
printf("Sum of entered matrices:-\n");
for (i = 0; i < r; i++)
{
for (j = 0 ; j < c1; j++)
{
// c[i][j] = a[i][j] + b[i][j];
d[i][j] += a[i][j] * b[i][j];
// e[10][10] = a[i][j] - b[i][j];
// printf("%d\t", c[i][j]);
printf("%d\t", d[i][j]);
// printf("%d\t", e[i][j]);
}
printf("\n");
}
return 0;
}

