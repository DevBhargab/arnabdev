#include<stdio.h>

    int main(){
    int i , n , sum = 0 , rem ;
    scanf("%d",&n);
    int temp = n;
    while (temp !=0)
    {
        /* code */
        rem = temp%10;
        sum +=rem ;
        temp = temp /10;
    }
        printf("the sum is %d",sum);
    
    return 0;
}