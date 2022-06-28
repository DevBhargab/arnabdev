#include <stdio.h>

int main()
{
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("enter the obtained marks : %d   ", i+1);
        scanf("%d" , &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf(" the obtained marks of students %d is : %d\n", i+1 , marks[i]);
    }

    return 0;
}