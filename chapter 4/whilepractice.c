/*
Write a program to print natural numbers from 10 to 20 when the initial loop counter i is initialized to 0.

The loop counter need not be int, it can be a float as well.
*/

#include<stdio.h>

    int main(){
    int i = 0;
    while (i <= 20)

    {   if (i >= 10)
    {
        /* code */
        printf("%d\n" , i );
    }
        i++;
        
    }
    
    return 0;
}