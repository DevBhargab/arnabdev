/*
 write a code where all the student have minimum 50% in their semester exam
 */

#include <stdio.h>

int main()
{
    int marks[5];
    printf("the obtained marks in math\n");
    scanf("%d", &marks[0]);
    printf("the obtained marks in physics\n");
    scanf("%d", &marks[1]);
    printf("the obtained marks in programming\n");

    scanf("%d", &marks[2]);
    printf("the obtained marks in programming lab class\n");

    scanf("%d", &marks[3]);
    printf("the obtained marks in physics lab\n");

    scanf("%d", &marks[4]);
    printf("the obtained marks in mechanical lab\n");

    int c = ( marks[0] + marks[1] + marks[2] + marks[3] + marks[4] )/ 5;
    printf("the grand total is %d\n" , c);

    if (marks[5] >= 50 || marks[0] < 50 || marks[1] < 50 || marks[2] < 50 || marks[3] < 50 || marks[4] < 50)
    {
        /* code */
        printf("you are pass the exam\n");
    }
    else
    {
        printf("please clear your suppli exam\n");
    }

    return 0;
}