/* ��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣� */

#include <stdio.h>

static const int num[4] = {1,2,3,4};

int main() 
{
	int i, j, k;
	
	for (i = num[0]; i <= num[3]; i++) {
		for (j = num[0]; j <= num[3]; j++) {
			for (k = num[0]; k <= num[3]; k++) {
				if (i != j && i != k && j != k)
					printf("%d, %d, %d\n", i, j, k);
			}
		}
	}
	
	return 0;
}
