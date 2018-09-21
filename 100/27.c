/* 利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。 */

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
