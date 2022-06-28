#include<stdio.h>

    int main(){
    int arr[20];
    int size , i ;
    printf("enter iput");
    scanf("%d",&size);
    for ( i = 0; i < size; i++)
    {
        /* code */
        printf("enter the value %d\n",i);
        scanf("%d",&arr[i]);
    }
    printf("display array\n");
    for ( i = 0; i < size; i++)
    {
        /* code */
        printf("arrays are [%d]=====> %d\n",i,arr[i]);
    }
    // part 2 find the biggest number
    int b ;
    b=arr[0];
    for ( i = 0; i <size; i++)
    {
        /* code */
        if (b<arr[i])
        b=arr[i];
        {
            printf("\n biggest nuber is %d",b);
        }
        

    }
    
    return 0;
}