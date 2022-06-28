#include <stdio.h>

int main()
{
    int tax;
    int income;

    printf("please pay your tax\n");
    scanf("%f", &income);
    if (income >= 250000 && income <= 350000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income >= 500000 && income <= 100000)
    {
        tax = tax + 0.05 * (income - 500000);
    }
    if (income >= 10000000);
    {
        tax = tax + 0.05 * (income - 1000000);
    }

    printf("finaly pay your tax is %f\n",tax);
    return 0;
}

