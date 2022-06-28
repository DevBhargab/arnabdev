#include<stdio.h>

    int main(){
    int age = 22;       // STEP 1:- data type wth variable assign
    int *ptr = &age;    // STEP2:- data type * pointer variable = {& adress of data 1}
    int _age= *ptr;
    
    
    printf("%d\n" , _age);
    printf("%d\n" ,age);
        printf("%p\n" ,&age);

    printf("%d\n", *ptr);
    printf("%d\n" ,*(&age));
    printf("%p\n", &ptr );
    return 0;
}


