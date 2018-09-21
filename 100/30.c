/* 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count_digits(long int n);
int *reverse_split_number(long int n);

long int join_to_decimal_number(int *p, int digits);

int main()
{
	long int n, reverse_number;
	int i, digits, *p;
	
	printf("Enter you number: ");
	scanf("%ld", &n);
	
	digits = count_digits(n);
	p = reverse_split_number(n);
	reverse_number = join_to_decimal_number(p, digits);
	
	printf("\n");
	if (reverse_number == n)
		printf("%ld is a palindrome.", n);
	else
		printf("%ld is not a palindrome.", n);
	
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

long int join_to_decimal_number(int *p, int digits)
{
	int i, number = 0;
		
	for (i = 0; i < digits; i++) {
		number += pow(10, digits - 1 - i) * (*(p + i));
	}
	
	return number;
}




