#include <stdio.h>
int fib(int n);
int main()
{
        fib(6);

    return 0;
}
int fib(int n)
{
    if (n == 0 || n == 1)
    {

        if (n == 0)
        { // base case

            return 0;
        }
        if (n == 1)
        {

            return 1;
        }
    }

    int fibNUM1 = fib(n - 1);
    int fibNUM2 = fib(n - 2);
    int fibN = fibNUM1 + fibNUM2;

    printf("fib of N is %d == %d\n", n, fibN);
    return fibN;
}
