#include<stdio.h>

int main(){
    // Naive way to create 4 ints
    // int marks1, marks2, marks3, marks4;
    // marks1 = 34;
    // marks2 = 45;
    // marks3 = 67;
    // marks4 = 87;
    int sum[4];
    sum[0] = 34;
    sum[1] = 45;
    sum[2] = 34;
    sum[3] = 67;
        printf("the value %d\n" , sum[3]);

    int marks[5]; // allocate space for 4 integers

    printf("Enter the value of marks for student 1: ");
    scanf("%d", &marks[0]);
    printf("Enter the value of marks for student 2: ");
    scanf("%d", &marks[1]);
    printf("Enter the value of marks for student 3: ");
    scanf("%d", &marks[2]);
    printf("Enter the value of marks for student 4: ");
    scanf("%d", &marks[3]);
    printf("Enter the value of marks for student 5: ");
    scanf("%d", &marks[4]);


    printf("You have entered %d %d %d %d and %d\n", marks[0], 
            marks[1], marks[2], marks[3],marks[4]);
    return 0;
}