#include <stdio.h>

int main()
{
    int a = 10;
    printf("please enter your age\n");
    scanf("%d", &a);

    if (a <= 11)
    {
        printf("i am 11");
    }

    else
    {
        printf("1 am not 11");
    }

    return 0;
}