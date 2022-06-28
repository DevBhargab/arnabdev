#include<stdio.h>
int main()
{
struct student
{
int id;
char name[20];
char address[20];
}s[2];
int n,i;
printf("\n Enter how many records you want to insert");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n %d.Enter the ID---",i);
scanf("%d",&s[i].id);
printf("\n %d.Enter the Name---",i);
scanf("%s",s[i].name);
printf("\n %d.Enter the Address---",i);
scanf("%s",s[i].address);
}
printf("\n\nThe Student Record\n\n" );
printf("\tID\tName\tAddress\n\n");
for(i=1;i<=n;i++)
{
printf("\n\t%d\t%s\t%s",s[i].id,s[i].name,s[i].address);
}
return 0;
}