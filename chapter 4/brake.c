#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("the value is %d\n", i);
        if (i == 4)
        {
            /* code */
            break;
        }
        i++;

    } while (i < 10);
    return 0;
}