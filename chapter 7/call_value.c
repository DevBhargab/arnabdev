#include<stdio.h>
    void square(int n);
    int main(){
        int number = 4;
    square(number);
    printf("square is %d\n" , number);
    return 0;
}
    void square(int n){
        n = n*n;
        printf("the value is %d\n" , n);
    }
/*
    VIP = in c language only pass by value ; only copy of variable value is pass ;
    

*/