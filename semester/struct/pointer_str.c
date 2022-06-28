#include<stdio.h>

void main()
{
int ptr;
struct student
{
int roll;
char name[20];
char address[20];
char trade[10];
}*s1;
ptr=&s1;

printf("\n Enter the Roll Number,Name,Address,Trade---");
scanf("%d%s%s%s",&s1->roll,s1->name,s1->address,s1->trade);
printf("\n%d %s %s %s",s1->roll,s1->name,s1->address,s1->trade);

}