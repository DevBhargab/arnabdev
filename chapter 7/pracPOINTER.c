#include<stdio.h>

    int main(){
    int x ;
    int *ptr ;              /* we store ptr value , in x variable like 0; 

                            */
    ptr = &x;
  *ptr = 0;
  
    printf("x= %d\n", x);
    // printf("%p\n" , ptr);
    printf("*ptr = %d\n" , *ptr);

*ptr += 5;
//    *ptr = x+5;       old style method

 printf("x=% d\n", x);
    // printf("%p\n" , ptr);
    printf("*ptr = %d\n" , *ptr);

        (*ptr++);
        printf("x = %d\n", x);
        printf("*ptr = %d\n" ,*ptr);
    return 0;
}