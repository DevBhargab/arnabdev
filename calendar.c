#include <stdio.h>
#include <stdlib.h>

int calendar_system(int year){

  int d;
  d = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;
  return d;
}

int main()
{

   int year,month,day,daysInMonth,weekDay=0,starting_days;
   printf("\nEnter your desired year:");
   scanf("%d",&year);

   char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
   int month_day_values[]={31,28,31,30,31,30,31,31,30,31,30,31};

   if((year%4==0&&year%100!=0)||year%400==0)
       month_day_values[1]=29;

   starting_days=calendar_system(year);

   for(month=0;month<12;month++){

      daysInMonth=month_day_values[month];
      printf("\n\n---------------%s-------------------\n",months[month]);
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

      for(weekDay=0;weekDay<starting_days;weekDay++)
        printf("     ");

      for(day=1;day<=daysInMonth;day++){
        printf("%5d",day);

        if(++weekDay>6){
            printf("\n");
            weekDay=0;
        }
        starting_days=weekDay;
      }

   }


}
