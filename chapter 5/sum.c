#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("the value of a is \n");
    scanf("%d", &a);

    printf("enter the value of b is \n"); /*
                                              void cannot be initialized;
                                              so we use int always;
                                          */
    scanf("%d", &b);

    int s = sum(a, b);
    printf("sum is %d\n", s);

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}