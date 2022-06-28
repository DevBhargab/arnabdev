#include<stdio.h>

    int main(){
    int a,b;
    printf("enter the number%d\n");
    scanf("%d",& a);

    if (a % 2==0)
    {
        printf("%d is even\n",a);
    }

    else
    {
        printf("%d is odd\n",a);
    }

   

 int age;

    printf("tell me your age \n", age);
    scanf("%d", &age);

    if (age >= 25)
    {
        printf("you  come to my party", age);
    }
    else
    {
        printf("you can'tcome to my party", age);
    }

    return 0;
}