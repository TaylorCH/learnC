/* 题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？ */

/* 答案没用pow 也不错 */

#include <stdio.h>
#include <math.h>

#define N 10
#define HIGH 100

int main()
{
	int i;
	float sum = 100.00, high;
	
	for (i = 2; i <= N; i++)
	{
		sum += pow(0.5, i - 1) * HIGH * 2;
	}
	
	high = pow(0.5, N) * HIGH;
	
	printf("The ten is %f\n", sum);
	printf("The ten is %f\n", high);
	
	return 0;
}
