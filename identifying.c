/* Forth */ 
#include <stdio.h>
#include <stdlib.h>

void iii(int a[])
{	
	int t;
	t = a[0];
	a[0] = a[1];
	a[1] = t;
}

main()
{
	int i, j, k;
	float ii;
	char ch1, ch2;
	
	char t = '1';
	printf("%c\n%d\n", t, (int) t );
	
	
	
	int aa[2] = {1,2};
	printf("%d\n%d\n", aa[0], aa[1]);
	iii(aa);
	printf("%d\n%d\n", aa[0], aa[1]);
	
	
	int m[3][4] = { 1,1,1,1,
					1,1,1,1,
					1,1,1,1 };
	
	
	
	
	scanf("%c", &ch1);
	printf("%d", (int) ch1);
	
	
	
//	do
//	{
//		scanf("%c", &ch);
//	} while (ch != '\n');
	
//	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
//	scanf("%f", &ii);
//	printf("%f", ii);
//	printf("%d %d %d\n", i, j, k);
//	scanf("%d a%d /%d",&i,&j,&k);
//	printf("%d %d %d", i, j, k);
	
	
	return 0;
}
