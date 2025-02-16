#include <stdio.h>
int main() {
    int a, b, c, d, e, f, g, h;

    printf("enter two numbers to add\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d\n", a + b);

    printf("enter two numbers to sub\n");
    scanf("%d", &c);
    scanf("%d", &d);
    printf("%d\n", c - d);

    printf("enter two numbers to multi\n");
    scanf("%d", &e);
    scanf("%d", &f);
    printf("%d\n", e * f);

    printf("enter two numbers to div\n");
    scanf("%d", &g);
    scanf("%d", &h);

    // Check if the divisor is not zero to avoid division by zero error
    if (h != 0) {
        printf("%d\n", g / h);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
