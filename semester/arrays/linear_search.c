#include<stdio.h>
int main (){

    int arr[20] , i , ele , m;
    printf("enter the element\n");
    scanf("%d",&m);
    for ( i = 0; i <m; i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("searching elememt");
        scanf("%d",&ele);
    for ( i = 0; i < m; i++)
    {
        if(arr[i] == ele){
           
            break;
        }

    }
        if(i <m)
            printf("element is found %d",i);
            else
                printf("elememt is not found");
    
    
    
}