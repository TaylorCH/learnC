/* ��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ� */

/* ��û��pow Ҳ���� */

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
