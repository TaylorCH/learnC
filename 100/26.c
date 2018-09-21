/* 利用递归方法求5!。*/

#include <stdio.h>

double calculate_factorial(int n);

int main()
{
	int n;
	double factorial;
	
	printf("Enter you number: ");
	scanf("%d", &n);
	factorial = calculate_factorial(n);
	printf("\n The factorial of %d is %lf.\n", n, factorial);
	
	return 0;
}

double calculate_factorial(int n) 
{
	double f;
	
	if (n == 1) 
		f = 1;
	else
		f =  n * calculate_factorial(n - 1);
	
	return f;
}
