/* ��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��*/

#include <stdio.h>

void positive_integer_disintegrant(int n);

int main()
{
	int n;
	
	printf("Enter your number: ");
	scanf("%d", &n);
	
	positive_integer_disintegrant(n);
	
	return 0;
}

void positive_integer_disintegrant(int n)
{
	int i = 2, m = n;
	
	printf("%d = ", n);
	
	while (i <= m)
	{
		if (m % i == 0)
		{	
			printf("%d", i);
			m /= i;
			if (m > 1)
				printf(" * ");
		}
			
		if (m % i != 0)
			i++;
	}
	
	
	
//	for (m = n; m > 1;)
//	{
//		for (i = 2; i <= m; i++)
//		{
//			if (m % i == 0)
//			{
//				printf("%d", i);
//				break;
//			}
//		}
//		if ((m /= i) > 1)
//			printf(" * ");
//	}
}
