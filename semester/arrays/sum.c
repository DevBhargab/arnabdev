#include <stdio.h>

int main()
{
    int i, j, size, temp = 0;
    int arr[20];
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\n enter the elements arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("index %d is arry[%d]\n", i, arr[i]);
    }

     
    int arr1[20];
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\n enter the elements arr[%d]", i);
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("index %d is arry[%d]\n", i, arr1[i]);
    }
        int c[20];
    for ( i = 0; i < size; i++)
    {
        c[i] = arr[i]+arr1[i];
     printf("index %d is arry[%d]\n", i, c[i]);

    }
    return 0;

}

    