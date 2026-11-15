#include <stdio.h>

struct date
    {
        int month;
        int day;
        int year;
    };

int main(int argc,const char *argv[])
{
    struct date today;

    today = (struct date){11,15,2026}; 

    struct date day;
    day = today;
    day.year = 2027;

    struct date *pDate = &today;
    
    // today.month = 11;
    // today.day = 15;
    // today.year = 2026;

    printf("today is %i/%i/%i\n",today.month,today.day,today.year);
    printf("day is %i/%i/%i\n",day.month,day.day,day.year);
    printf("pDate is %p\n",pDate);

    return 0;
}