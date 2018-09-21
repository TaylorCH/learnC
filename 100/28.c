/*
题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。请问第五个人多大？
*/

#include <stdio.h>

int cal_age(int persons, int init_age);

int main()
{
	int num_person, age_of_first, age;
	
	printf("Enter the number of person: ");
	scanf("%d", &num_person);
	printf("Enter the age of the first person: ");
	scanf("%d", &age_of_first);
	
	age = cal_age(num_person, age_of_first);
	printf("\nThe age of the last person is %d.\n", age);	
	
	return 0;
}

int cal_age(int persons, int init_age)
{
	int age;
	
	if (persons == 1)
		age = init_age;
	else if (persons >= 2)
		age = cal_age(persons - 1, init_age) + 2;
	
	return age;
	
}
