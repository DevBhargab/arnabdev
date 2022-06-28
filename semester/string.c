#include<stdio.h>
#include<string.h>
int main()
{
char a[20];int b,i;
printf("\n Enter a string---->");
scanf("%d", &a);
printf("\n %s",a);
i=0;
while(a[i]!='\0')
{
if(a[i]==' ')
b++;
i++;
}
printf("\n\nThe number of words of the string is----->%d",b+1);
    return 0;
}