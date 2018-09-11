/* 
题目：古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？（输出前40个月即可）
*/

#include <stdio.h>

#define M 40

int main()
{
	int sum_bearing = 2, sum_bore = 0,
		*p_bearing = &sum_bearing, *p_bore = &sum_bore, *p_new = NULL, i;
	
	
	for (i = 0; i <= M; i++)
	{
		p_new = p_bore;
		*p_bearing += *p_bore;
		p_bore = p_bearing;
		p_bearing = p_new;
		
		printf("The numbers of rabits: %d\n", (*p_bearing + *p_bore));
	}
	
	return 0;
}
