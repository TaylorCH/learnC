/* 题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。 */

/* 题目有歧义 ， 答案不对*/ 

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
