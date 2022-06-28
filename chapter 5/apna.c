#include <stdio.h>
void namaste();
void bonjour();

int main()
{
    // namaste();
    // bonjour();

    printf("enter your nationality\n");
    char ch;
    scanf("%c", &ch);

    if (ch == 'i')
    {
        /* code */
        namaste();
    }
    else
    {
        bonjour();
    }

    return 0;
}

void namaste()
{
    printf("Namaste\n");
}
void bonjour()
{
    printf("bonjour\n");
}
