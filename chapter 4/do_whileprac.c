#include<stdio.h>

    int main(){
    int a = 4;
    printf("the value of n is \n");
    int n ;
    scanf("%d" , & n);

    do {
        printf("the real number is %d\n" , n);
        n++;
    }while(n <= 10);
    
    return 0;
}