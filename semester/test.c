#include<stdio.h>

    int main(){
    int i  , n , fact = 1 , sum = 0;
    printf("enter num\n");
    scanf("%d",&n);

    for (i = 0; i <=n; i++)
    {
        fact = fact*i;
        printf(" factorial id %d of %d" , i , fact);
        sum =sum+fact;

    }
        printf("factorial is %d\n",sum);
    
    return 0;
}