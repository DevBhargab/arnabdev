#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the nuber of row ");
    scanf("%d", &a);
    for (b = 1; b <= a; b++)
    {
        /* code */
        for (c = 1; c <= (a - b); c++)
        
            printf(" ");
            for (d = 1; d <= ((2 * b) - 1); d++)
            
                /* code */
                printf("*");

            

            /* code */
        
        printf("\n");
    }

    return 0;
}