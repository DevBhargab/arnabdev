#include<stdio.h>
    int sum(int a , int b);
    int main(){
    int c;
    c = sum(2 , 15);
        printf("The value is %d\n" , c);    // advance type
    return 0;
}

    int sum(int a , int b){
        int result ; 
        result = a+ b ;
        return result ;
    }