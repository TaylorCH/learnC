/* 题目：输入三个整数x,y,z，请把这三个数由小到大输出。 */

#include <stdio.h>

int main()
{
	int	p[3],
		*min = p, 
		*mid = p + 1, 
		*max = p + 2,
		*tmp = NULL;
	
	printf("Enter your numbers(x, y, z): ");
	scanf("%d%d%d", min, mid, max);
	
	(*min > *mid) ? (tmp = min, min = mid, mid = tmp): (tmp = tmp);
	(*min > *max) ? (tmp = min, min = max, max = tmp): (tmp = tmp);
	(*mid > *max) ? (tmp = mid, mid = max, max = tmp): (tmp = tmp);

//	if (*min > *mid) 
//		tmp = min, min = mid, mid = tmp;
//	
//	if (*min > *max) 
//		tmp = min, min = max, max = tmp;
//	
//	if (*mid > *max) 
//		tmp = mid, mid = max, max = tmp;
		
	printf("Sort by the value: %d, %d, %d\n", *min, *mid, *max);
	
	return 0;
}
