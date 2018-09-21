/*
Çó1+2!+3!+...+20!µÄºÍ¡£
*/

#include <stdio.h>
#include <stdlib.h>

#define N 20

//long int my_factorial(int num);

int main()
{
	int i;
	double mul = 1, sum = 0;
	
	for (i = 1; i <= N; i++) {
		mul *= i;
		sum += mul;
	}
	
	printf("The sum of the sequence is %g\n", sum);
	
	return 0;	
}
