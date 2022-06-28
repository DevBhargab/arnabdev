#include<stdio.h>
    void passbyREF(int* n);
    int main(){
        int num = 5;
         passbyREF( &num); // address store is value;

        printf("the is %d\n" , num);
    return 0;
}
    void passbyREF(int* n)
{
    *n = (*n) * (*n);
    printf("the value is = %d\n" , *n);
}

