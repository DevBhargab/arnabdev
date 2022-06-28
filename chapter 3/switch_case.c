#include <stdio.h>

int main()
{
    int rating;
    printf("please share your rating(1-5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("I am not happy from your hotel servis so 1\n");
        break;

        
    case 2:
        printf("your hotel service is not very bad\n");
        break;
    case 3:
        printf("your hotel servis is good\n");
        break;
    case 4:
        printf("your hotel sevice is very good\n");
        break;
    case 5:
        printf("your hotel service is osm\n");
        break;
    default:
        printf("invald rating\n");
        break;
    }

    return 0;
}