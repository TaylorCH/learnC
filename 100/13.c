/* 
��Ŀ����ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ�������λ���������͵��ڸ��� ����
���磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η��� 
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

