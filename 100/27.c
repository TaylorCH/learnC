/* ���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������ */

#include <stdio.h>

void print_reverse(void);

int main()
{
	char ch;
	printf("Enter some chars: \n");
	
	print_reverse();
	
	return 0;
}

void print_reverse(void)
{
	char ch;
	if ((ch = getchar()) != '\n') {
		print_reverse();
		printf("%c", ch);
	}
}
