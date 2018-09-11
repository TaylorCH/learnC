/* 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。 */

#include <stdio.h>
#include <math.h>

int main()
{
	int i, a, N, sum = 0;
	
	printf("Enter your a: ");
	scanf("%d", &a);
	printf("Enter your N: ");
	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
	{
		sum += pow(10, i)* a * (N - i );
	}
	
	printf("Sum of your numbers: %d", sum);
	
	return 0;
}
