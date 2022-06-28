#include<stdio.h>

    int main(){
    float price = 15.113;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("%f" ,pptr);

    return 0;
}    