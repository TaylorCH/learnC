/* ��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ����� */

#include <stdio.h>

int main()
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	
	printf("Enter your string: \n");
	while ((c = getchar()) != '\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letters++;
		else if (c >= '0' && c <= '9')
			digits++;
		else if (c == ' ')
			spaces++;
		else
			others++;
	}
	
	printf("Letters are: %d\n", letters);
	printf("Spaces are: %d\n", spaces);
	printf("Digits are: %d\n", digits);
	printf("Others are: %d\n", others);
	
	return 0;
}

