/* 题目：输入某年某月某日，判断这一天是这一年的第几天？ */

#include <stdio.h>

int main()
{
	int year, month, day, 
		days_of_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, 
		*p_month = days_of_month;
	int i, num_days = 0;
	
	printf("Enter your date(year, month, day): ");
	scanf("%d, %d, %d", &year, &month, &day);
	
	if (year % 4 == 0 )
		p_month[1] = 29;
	
	for (i = 0; i < month - 1; i++)
		num_days += p_month[i];
	
	num_days += day;
	
	printf("Your date is %d days.\n", num_days);
	
	return 0;
}
