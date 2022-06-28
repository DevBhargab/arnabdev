#include<stdio.h>

    int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *pptr = &_age;

    printf("%u. %u, differnce = %u\n" , ptr , pptr , pptr - ptr);
    pptr = &age;
    printf("compersion is = %u \n" , ptr ==pptr);
    return 0;
}