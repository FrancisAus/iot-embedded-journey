#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int numberOfDays(struct date copyDate);
bool leapYear(struct date copyDate);

int main(int argc,const char *argv[])
{
    struct date today,tomorrow;
    printf("pls input the date (mm/dd/yyyy): "); 
    scanf("%i %i %i",&today.month,&today.day,&today.year);

    if(today.day != numberOfDays(today))
    {
        tomorrow = (struct date){today.month,today.day+1,today.year};
    }
    else if(today.month == 12)
    {
        tomorrow = (struct date){1,1,today.year+1};
    }
    else
    {
        tomorrow = (struct date){today.month+1,1,today.year};
    }

    printf("tomorrow is %i/%i/%i\n",tomorrow.month,tomorrow.day,tomorrow.year);
    return 0;
}

int numberOfDays(struct date copyDate)
{
    int days;
    int regularYearDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    days = regularYearDays[copyDate.month-1];
    
    if(copyDate.month == 2 && leapYear(copyDate))
    {
        days++;
    }
    return days;
}

bool leapYear(struct date copyDate)
{
    int leap = false;
    if((copyDate.year % 4 == 0 && copyDate.year % 100 != 0) || (copyDate.year % 400 == 0))
    {
        leap = true;
    }
    return leap;
}