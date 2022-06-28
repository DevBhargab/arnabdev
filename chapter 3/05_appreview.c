#include <stdio.h>

int main()
{
    int rating;
    printf("please rate my app 1-5\n");
    scanf("%d",& rating);

    switch (rating)
    {
    case 1:
        printf("please fix bugs of your app\n");
        break;
    case 2:
        printf("please upgarde your app content\n");
        break;
    case 3:
        printf("please fix app opening bugs\n");
        break;
    case 4:
        printf("your app is good but improve your conmtent");
        break;
    case 5:
        printf("your app is very good & helpful\n");
        break;

    default:
        printf("your app is very bad & remove it form play store / app store\n");
        break;
    }

    return 0;
}