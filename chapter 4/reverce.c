/*
    Quick Quiz: Write a program to print n natural numbers in reverse order.
*/

#include<stdio.h>

    int main(){
    int n ;
    printf("the value of n is \n");
    scanf("%d" , &n);
    for (int i = n; i ; i--)
    {
        /* code */
        printf("reverse the number %d\n" , i);
    }
    

    return 0;
}