#include<stdio.h>

    int main(){
    int a = 5;
    int *ptr = &a;
    int **pptr = &ptr;

    printf("the value is %d\n" , **pptr);
    printf("the value is %p\n" , &pptr);
    return 0;
}

/*
    always remeber ( * ) =.> is for value 
                    ( & ) => is for address;
*/
