#include <stdio.h>

int main()
{
    float price[3];
    printf("the price of product 0:\n");
    scanf("%f", &price[0]);
    printf("the price of product 1:\n");
    scanf("%f", &price[1]);
    printf("the price of product :\n");
    scanf("%f", &price[2]);

    printf("the total price is %f\n", (price[0] + price[1] + price[2]) / 3);
    printf("the tax of product 0 %f\n", price[0] + 0.018 * price[0]);
    printf("the tax of product 1 %f\n", price[1] + 0.018 * price[1]);
    printf("the tax of product 2 %f\n", price[2] + 0.018 * price[2]);

    return 0;
}