#include<stdio.h>
#include<stdlib.h>
struct days
{
    int day;
    int month;
    int year;
}date;
int main(void)
{
        printf("input a day:\n");
         int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
         int i,dates=0;
        scanf("%d%d%d",&date.day,&date.month,&date.year);
       for(i=0;i<date.month;i++)
        dates=dates+months[i];
       dates+=date.day;
      if(date.year%4==0&&date.year%100!=0||date.year%400==0&&date.month>=3)
     dates=dates+1;
  printf("the day of %d\n",dates);
return 0;
}