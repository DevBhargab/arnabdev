#include<stdio.h>

    int main(){
    char name[20];
    int i , n , marks;
    FILE *fp=fopen("first.txt","w");
    printf("records");
    scanf("%d",&n);
    fprintf(fp,"%d",n);
    i=1;
    while (i<=n)
    {
        /*  */
        printf("enter the name and marks\n");
        scanf("%s %d",&name,&marks);
        fprintf(fp,"%d      %s" , marks , name);
        i++;
    }
    fclose(fp);
        fp=fopen("first.txt","r");
        if(fp == NULL)
            printf("file is not open\n");
        else{

            printf("STUDENT RECORDS\n");
            printf("--------------------------\n");
            printf("name                marks");
            printf("\n---------------------");
            i=1;
            while (i<=n)
            {
                fscanf(fp,"%s",&name);
            fscanf(fp,"%d",&marks);
            printf("%s name and %d marks\n",name,marks);
            i++;
            }
        }
            fclose(fp);

    
        return 0;
}