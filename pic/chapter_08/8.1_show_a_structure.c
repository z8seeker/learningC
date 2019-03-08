// 此程序展示一个结构体

#include <stdio.h>

int main (void)
{
    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 9;
    today.day = 25;
    today.year = 2015;

    printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, 
    today.year % 100);

    return 0;
}