#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time getNextSecond(struct time now);

int main(int argc, const char* argv[])
{
    struct time testTimes[] = {
        {11,59,59},{1,29,59},{23,59,59}
    };

    for(int i=0;i<3;i++)
    {
        printf("time is %.2d:%.2d:%.2d\n",
            testTimes[i].hours,testTimes[i].minutes,testTimes[i].seconds);
    
    testTimes[i] = getNextSecond(testTimes[i]);
    printf("next time is %.2d:%.2d:%.2d\n",
        testTimes[i].hours,testTimes[i].minutes,testTimes[i].seconds);
    }

    return 0;
}

struct time getNextSecond(struct time now)
{
    now.seconds++;
    if(now.seconds == 60)
    {
        now.seconds =0;
        now.minutes++;
        
        if(now.minutes == 60)
        {
            now.minutes = 0;
            now.hours++;
            
            if(now.hours == 24)
            {
                now.hours = 0;
            }
        }
    }
    return now;
}