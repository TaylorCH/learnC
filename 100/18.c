/* ��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ� */

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
