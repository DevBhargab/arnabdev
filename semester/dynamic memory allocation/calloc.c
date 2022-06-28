#include<stdio.h>
#include<stdlib.h>

    int main(){
    int *ptr;
    ptr = (int*)calloc(6 , sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("enter the index value\n");
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("the index of ptr[%d] of value %d \n" , i,ptr[i]);
    }
    
        int *pptr;
        int n;
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
    {
        printf("enter the index value\n");
        scanf("%d",&pptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the index of ptr[%d] of value %d \n" , i,pptr[i]);
    }
    
    

    return 0;
}