/*
题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。 
*/

#include <stdio.h>
#include <stdlib.h>

#define NUMERATOR_FIRST 2
#define NUMERATOR_SECOND 3
#define DENUMERATOR_FIRST 1
#define DENUMERATOR_SECOND 2
#define NUM_TERMS 20

int *fibonacci_generator(int first, int second, int num_trems);

int main()
{
	int i, *p_numerator, *p_denumerator;
	
	float sum = 0.0;
		
	p_numerator = fibonacci_generator(2, 3, NUM_TERMS);
	p_denumerator = fibonacci_generator(1, 2, NUM_TERMS);
	
	for(i = 0; i < NUM_TERMS; i++) {
		sum += ((float) p_numerator[i]) / p_denumerator[i];
	}
	
	printf("The sum of sequence is %f\n", sum);
	
	return 0;
}

int *fibonacci_generator(int first, int second, int num_trems) {
	int i, *p_fbnac;
	
	p_fbnac = (int *)malloc(sizeof(int) * num_trems);
	*p_fbnac = first;
	*(p_fbnac + 1) = second;
	
	for (i = 2; i < num_trems; i++) {
		*(p_fbnac + i) = *(p_fbnac + i - 1) + *(p_fbnac + i - 2);
	}
	
	return p_fbnac;
}

