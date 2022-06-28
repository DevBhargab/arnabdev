#include<stdio.h>

    int main(){
    int a[5] = {12 , 15 , 14 ,18};
    int *ptr;
    ptr =&a[0];
    int i = 0;
    while (*ptr !='\0')
    {
        printf("\n address of a[%d]=== %u\n",i,ptr);
        printf("\n value is %d of a[%d]\n",i,*ptr);
        ptr++;
        i++;
    }
    

    return 0;
}