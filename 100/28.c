/*
��Ŀ����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ
�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
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
