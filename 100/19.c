/* ��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.����ҳ�1000���ڵ����������� */

/* ��Ŀ������ �� �𰸲���*/ 

#include <stdio.h>

#define N 1000


int main()
{
	int i, j, m, sum_of_factors;
	
	for (i = 2; i <= N; i++) {
		m = i;
		sum_of_factors = 1;
		for (j = 2; j <= m; (j = m % j != 0 ? j + 1 : j)){
			if (m % j == 0)
				sum_of_factors += j;
				m /= j;
		}
		if (sum_of_factors == i)
			printf("%d is a prefect number.", i);
	}
	
	return 0;
}
