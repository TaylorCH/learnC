/* 给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。 */

#include <stdio.h>
#include <stdlib.h>

int count_digits(long int n);
int *reverse_split_number(long int n);

int main()
{
	long int n;
	int i, digits, *p;
	
	printf("Enter you number: ");
	scanf("%ld", &n);
	
	digits = count_digits(n);
	p = reverse_split_number(n);
	
	printf("The digits of your number is %d.", digits);
	printf("\nThe reverse of number:\n");
	for (i = 0; i < digits; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
	
	return 0;
}

int count_digits(long int n)
{
	int digits = 1;
	
	while ((n /= 10) != 0)
		digits++;
	
	return digits;
}

int *reverse_split_number(long int n)
{
	int i, digits, *p;
	long int num = n;
	
	digits = count_digits(n);
	p = (int *)malloc(sizeof(int) * digits);
	
	for (i = 0; i < digits; i++) {
		*(p + i) = (int) (num % 10);
		num /= 10;
	}
	
	return p;
}






