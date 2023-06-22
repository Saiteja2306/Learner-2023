#include<stdio.h>

typedef struct time
{
    int hour;
    int minute;
    int second;
}time;
time difference_between_time(time time1, time time2)
{
    time diff;
    diff.hour = time1.hour - time2.hour;
    diff.minute = time1.minute - time2.minute;
    diff.second = time1.second - time2.second;
    return diff;
}

int main()
{
    time t1 = {12, 30, 00};
    time t2 = {10, 00, 00};
    time diff = difference_between_time(t1, t2);
    printf("%d hour(s), %d minute(s) and %d second(s)\n", diff.hour, diff.minute, diff.second);
    return 0;
}