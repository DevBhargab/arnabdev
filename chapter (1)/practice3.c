// #include<stdio.h>

//     int main(){                                          type (1)
//     int principle=100, rate=5, years=8;
//     int simpleinterest = (principle * rate * years);

//     printf("the value of simpleinterest is %d\n",simpleinterest);
//     return 0;
// }                            
                    

#include<stdio.h>

    int main(){
    int principle,rate,years;
    printf("principle\n");
    scanf("%d", &principle);                                //type(2)
    printf("rate\n");
    scanf("%d",&rate);
    printf("years\n");
    scanf("%d",&years);

    int simpleinterest = (principle * rate * years);

    printf("the value of simpleinterest is %d\n",simpleinterest);

    return 0;
}