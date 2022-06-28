#include<stdio.h>

    int main(){
    int a[20],i,ele,n;
printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter array elements");
for(i=0;i<n;++i)
{
scanf("%d",&a[i]);
}
printf("Enter element to search:");
scanf("%d",&ele);
for(i=0;i<n;++i)
{
if(a[i]==ele)
break;
}
if(i<n)
printf("Element found at index %d",i);
else
printf("Element not found");
return 0;
}