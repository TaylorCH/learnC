/* 
题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。
例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。 
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, k;
	
	for (i = 1; i <= 9; i++){
		for (j = 0; j <= 9; j++){
			for (k = 0; k <= 9; k++){
				if (100 * i +10 * j + k < pow(k, 3) || 100 * i +10 * j + k < pow(j, 3))
					break;			
				if (pow(i, 3) + pow(j, 3) + pow(k, 3) == 100 * i +10 * j + k )
					printf("%d is shuixianhua.\n", 100 * i +10 * j + k);
			}
		}
	}
	
	return 0;
}

