#include <stdio.h>

int main()
{
    int a[20];
    int size, b, i;

    printf("enter the number");
    scanf("%d", &size);
    for (int i = 0; i <= size; i++)
    {
        /* code */
        printf("enter the number a[%d]", i);
        scanf("%d", &a[i]);
    }
    printf("\n display in arrays");
    for (int i = 0; i <= size; i++)
    {
        /* code */
        printf("\n a[%d] -----> %d\n", i, a[i]);
    }
    b = a[0];
    for (int i = 0; i < size; i++)

    {
        /* code */
        if (b < a[i])
            b = a[i];
    }
    printf("max value is %d", b);

    return 0;
}
