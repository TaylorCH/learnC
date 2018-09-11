/* 题目：利用条件运算符的嵌套来完成此题：
学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。 
*/

#include <stdio.h>

int main()
{
	int score;
	
	printf("Enter the score: ");
	scanf("%d", &score);
	
	if (score >= 90)
		printf("The rank is: A.");
	else if (score >= 60 && score <= 89)
		printf("The rank is: B.");
	else
		printf("The rank is: C.");
	
	return 0;
}
