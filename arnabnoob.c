#include <stdio.h>
int main() {
    int i = 0;
    while (i < 5) { // Corrected loop condition, so the loop runs 5 times
        int a, b, c, d, e, f, g, h;

        // Addition
        printf("Addition\n");
        printf("Enter the value of a: ");
        scanf("%d", &a);
        printf("Enter the value of b: ");
        scanf("%d", &b);
        printf("%d\n", a + b);

        // Subtraction
        printf("Enter the value of c: ");
        scanf("%d", &c);
        printf("Enter the value of d: ");
        scanf("%d", &d);
        printf("%d\n", c - d);

        // Multiplication
        printf("Enter the value of e: ");
        scanf("%d", &e);
        printf("Enter the value of f: ");
        scanf("%d", &f);
        printf("%d\n", e * f);

        // Division
        printf("Enter the value of g: ");
        scanf("%d", &g);
        printf("Enter the value of h: ");
        scanf("%d", &h);

        // Check for division by zero
        if (h != 0) {
            printf("%d\n", g / h);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }

        i++; // Increment the loop counter
    }
    return 0;
}
