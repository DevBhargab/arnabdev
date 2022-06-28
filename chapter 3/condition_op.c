#include <stdio.h>

int main()
{
    int a;
    printf("enter the number a\n");
    scanf("%d", &a);

    (a < 5) ? printf("a is less then 5 ") : printf("a is not less then 5 ");
    return 0;
}