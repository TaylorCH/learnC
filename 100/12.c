/* 题目：判断101到200之间的素数。 */

#include <stdio.h>

#define M 101
#define N 200

int main()
{
	int i, j;
	
	for (i = M; i <= N; i++){
		for (j = 2; j * j <= i; j++)
		{
			if (i % j == 0)
				goto done;
		}
		printf("%d is prime number.\n", i);
		done: ;
	}
	
	return 0;
}
