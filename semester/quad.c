#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e;
float root1,root2;
printf("Enter The Vales of A ,B and C");
scanf("%f%f%f",&a,&b,&c);
e=b*b-4*a*c;
if(e>0)
{
d=sqrt(e); /* sqrt() is a Standard Library function Calculate Square root*/
root1=(-b+d)/(2*a);
root2=(-b-d)/(2*a);
printf("\nThe Root1=%f",root1);
printf("\nThe Root2=%f",root2);
}
else
printf("Roots are imaginary");
return 0;
}