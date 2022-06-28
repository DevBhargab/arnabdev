#include<stdio.h>
#include<string.h>

    int main(){
    struct person
    {
        char name[20] ;
        int age ;
        float size;
        char sex ;

    };
    union bio
    {
        struct person rec ;
    };
    union bio b;
    b.rec.name;
    scanf("%s",&b.rec.name);
    b.rec.age = 20;
    b.rec.sex = 'M';
    b.rec.size = 5.7;

    printf("person information\n");
    printf("\n person name %s",b.rec.name);
    printf("\n age %d",b.rec.age);
    printf("\n sex %c",b.rec.sex);
    printf("\n size %f",b.rec.size);

    
    
    return 0;
}