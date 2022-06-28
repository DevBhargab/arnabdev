#include<stdio.h>

int main(){
    int a , b  ;
    int *ptr , *pptr;
    printf("display it\n");
    scanf("%d %d" ,&a , &b);
    
    ptr=&a;
    pptr=&b;

printf("the address of %d ===> %u\n",a,ptr);
 printf("the address of %d ===> %u\n",b,pptr);
printf("the value  of %d ===> %u\n",a,*ptr);
 printf("the value  of %d ===> %u\n",b,*pptr);

 int *const pptr1 = 20;
 printf("the address %u\n",pptr1);
  printf("the address %u\n",&pptr1);




}