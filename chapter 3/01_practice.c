#include<stdio.h>

    int main(){
    int physics, chemistry,math,english;
    float total;

    printf("enter your physics marks\n");
    scanf("%d",&physics);
    printf("ent&er your chemistry marks\n");
    scanf("%d",&chemistry);
    printf("en&ter your math marks\n");
    scanf("%d",&math);
    printf("en&ter your english marks\n");
    scanf("%d",&english);

    total= (physics+chemistry+math+english)/4;

    if ((total<40) ||physics<33||chemistry<33||math<33||english<33)
    {
        printf("your total percentage is %f and you are fail/n",total);
    }
    else{
        printf("your total percentage is %f and you are pass/n",total);
    }

    return 0;
}