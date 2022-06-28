#include<stdio.h>

    int main(){
    // int a[] = {12 , 1 , 65 , 7};
    // int i = 0;
    // int *ptr ;
    // ptr =&a[0];
    // while (*ptr!=0)
    // {
    // printf("\n\nthe address of a[%d]=%u\n",i,ptr);
    // printf("\nthe value of a[%d]=%d\n",i,*ptr);
    // ptr++;
    // i++;
    // }

    int b = 5;
    int *pptr ;
    pptr = &b;
    printf("%d value of %u\n",b,pptr);
    printf("the value is %d of %d",b,*pptr);
    

    return 0;
}