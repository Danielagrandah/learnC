#include <stdio.h>

enum weekDays
{
    Monday,
    Tuesday,
    Wednesday,
    Thuersday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    enum weekDays today;
    today = Wednesday;
    printf("Day %d", today + 1);
    return 0;
}