#include <stdio.h>
void swap(int n, int m);
void hswap(int *n, int *m);

int main()
{
    int a = 5;
    int b = 2;
    // swap(a, b);
    hswap(&a , &b );
    int c;
    c = a;
    a = b; // a = 5 ;store;
    b = c;

    /*
    c = b;  b = 2 is store;
    b = a;
    a = c;

    */
    printf("swap value is a= %d\n & b = %d\n", a ,b);
    return 0;
}
void swap(int n, int m)
{
    int t;
    t = n;
    n = m;
    m = t;
    printf("the value is n = %d\n & m = %d\n", n, m);
}
// call by Reference 
void hswap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}