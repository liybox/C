/*
题目：输入某年某月某日，判断这一天是这一年的第几天？

程序分析：
*/
#include <stdio.h>

int main()
{
    int year, month, day, Feb, sum = 0;
    printf("请输入年月日，格式为：年,月,日(2015,12,10)");
    scanf("%d,%d,%d", &year, &month, &day);
    if (year % 400 == 0)
    {
        Feb = 29;
    }
    else
    {
        Feb = 28;
    }

    switch (month)
    {
    case 12:
        sum += 30;

    case 11:
        sum += 31;

    case 10:
        sum += 30;

    case 9:
        sum += 31;

    case 8:
        sum += 31;

    case 7:
        sum += 30;

    case 6:
        sum += 31;

    case 5:
        sum += 30;

    case 4:
        sum += 31;

    case 3:
        sum += Feb;

    case 2:
        sum += 31;
        
    case 1:
        sum += day;
    }
    printf("这是该年的第%d天\n", sum);
    return 0;
}