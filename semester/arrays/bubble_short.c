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
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size - 1) - i; j++)
        {
            
            if (arr[j] < arr[j + 1])
            {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("after bubble");
    for (i = 0; i < size; i++)
    {
        printf("\n arr[%d] ====> %d", i, arr[i]);
    }

    return 0;
}