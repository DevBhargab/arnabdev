#include<stdio.h>
    void display();
    void hello();
    int main(){
    
        hello();
        printf("how are you bro\n");
        display();
    return 0;
}

    void hello(){
        printf("hello arnab\n");
    }

    void display(){
        int a = 120;
        int b = 20;

        printf("the value is %d\n" , a+b);
    }