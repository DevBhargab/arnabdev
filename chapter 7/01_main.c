#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n", _age);

    //adress of the memory block;
    printf("%p\n",&ptr );
    // printf("%u\n",&ptr);
    printf("%p\n" , ptr);
    printf("%p\n" ,&age);

    return 0;
}

/*
    Delecraton of pointers

    int *ptr;
    char *ptr;
    float *ptr;

    Format Specifier

printf("%p", &age); // location of age in a memory block 

printf("%p", ptr); location of age where "& age " is swap in memory block of & age;

printf("%p", &ptr); //  location  of age now stored in ptr;

    ALWAYS POINTER IN MEMORY BLOCK IS NOT SPECIFIC 

    IN JAVA => CONTINUOUS MEMORY ALLOCATION;
*/