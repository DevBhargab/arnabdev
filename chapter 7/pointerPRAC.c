#include <stdio.h>
void pptr(int i);
int main()
{
        // pptr(int c);

    int a = 2;
    int *p = &a;
    printf("%d\n", *p); // the value of a is pass by pointer 
    printf("%p\n", &p);// this is &p locatioon in memory block
    printf("%d\n", a);// the value of a
        printf("%p\n" , &a);// this is the loctaion of a in memory block


    return 0;
}
void pptr(int i){
  

}