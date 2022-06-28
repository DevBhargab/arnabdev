#include<stdio.h>

int main(){
    int n , temp , rem , arm =0;
    printf("enter the number\n");
    scanf("%d",&n);
    temp = n;

    while(temp !=0){
        rem = temp%10;
        arm += rem * rem * rem ;
        temp = temp/10;

    }
    if (arm == n)
    {
        /* code */
        printf("armstrong\n");
    }
    else
        printf("not arms\n");
    return 0;
    
}
