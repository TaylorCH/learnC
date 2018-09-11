/* 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。 */

#include <stdio.h>

int greatest_common_divisor(int a, int b);
int greatest_common_multiple(int a, int b);

int main()
{
	int a, b, gcd, gcm;
	
	printf("Enter your numbers: ");
	scanf("%d, %d", &a, &b);
	
	gcd = greatest_common_divisor(a, b);
	gcm = greatest_common_multiple(a, b);
	
	printf("The greatest common divisor is: %d\n", gcd);
	printf("The greatest common multiple is: %d\n", gcm);
	
	return 0;
}

int greatest_common_divisor(int a, int b)
{
	int tmp, r;
	if (a < b)
	{
		tmp = a;
		a 	= b;
		b 	= tmp;
	}
	
	r = a % b; 
	
	while(r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	
	return b;
}

int greatest_common_multiple(int a, int b)
{
	return a * b / greatest_common_divisor(a, b);
}







