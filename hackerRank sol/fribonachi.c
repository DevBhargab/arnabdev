#include<stdio.h>
int main(){

    int n,a ,b;
    scanf("%d %d %d" , &a , &b , &n);
    int count =2;

        while (count<=n){
            int temp= b;
            b = b + a;
            a = temp;
            count++;
        }
        printf("the value is %d\n" , b);

}