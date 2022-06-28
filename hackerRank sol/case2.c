#include <stdio.h>

/*
    Complete the function void update(int *a,int *b). 
    It receives two integer pointers, int* a and int* b. 
    Set the value of a to their sum, and b to their absolute difference.
     There is no return value, and no return statement is needed. 
*/
void update(int *a,int *b) {
    // Complete this function    
    int add , sub ;
    
    add = *a+*b;
    sub = *a-*b;
   
    if (sub<0) {
    // statement
    sub =-sub;
    }
     *a = add;
    *b=sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}