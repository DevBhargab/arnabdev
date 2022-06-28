#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;
    printf("ptr =%u\n", ptr);
    ptr++;
    printf("ptr =%u\n", ptr);
    //     ptr--;

    // printf("ptr =%u\n", ptr);


    // float _age = 22;
    // float *pptr = &_age;
    // printf("ptr =%u\n", pptr);
    // pptr++;
    // printf("ptr =%u\n", pptr);
    //     pptr--;

    // printf("ptr =%u\n", pptr);


    // char agee = 'a';
    // char *ppptr = &agee;
    // printf("ptr =%u\n", ppptr);
    // ppptr++;
    // printf("ptr =%u\n", ptr);
    //     ppptr--;

    // printf("ptr =%u\n", ppptr);


    return 0;
}
/*
    for int / float = 4 byte
    char = 1 byte
*/