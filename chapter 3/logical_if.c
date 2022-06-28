#include <stdio.h>

int main()
{
    int age;
    
    printf("tell me your age \n", age);
    scanf("%d", &age);

    if (age <= 45 && age >= 18 )
    { 
        printf("you  come to my party  \n", age);
    }
    else
    {
        printf("you can'tcome to my party", age);
    }

    return 0;
}


// #include<stdio.h>

//     int main(){
//      int age;
//     int vippass=5;                               special case of vippass add 
//     vippass= 15;
//     printf("tell me your age \n", age);
//     scanf("%d", &age);

//     if (age <= 45 && age >= 18 ||vippass ==15 )
//     {
//         printf("you  come to my party\n", age);
//     }
//     else
//     {
//         printf("you can'tcome to my party", age);
//     }


//     return 0;
// }