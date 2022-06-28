#include <stdio.h>
// function to calculate square of a number

int pptr(int c);
int main()
{
    pptr(1);
    
    
    return 0;
}


int pptr(int c)
{
   int b = 2;
    int *ptr = &b;
    printf("%d\n", b);
    printf("%d\n", *ptr);
    printf("%p\n", &ptr);
    printf("%p\n", &b);
}
