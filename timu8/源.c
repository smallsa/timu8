/*写一个函数能够把一组学生成绩信息按总分进行排序，测试之*/
#include <stdio.h>
#define SIZE 2
struct student
{
	char name[30];
	int id;
	float grade;
}stu[SIZE];
void sort();
int main()
{
	int n;
	for (n = 0; n < SIZE; n++)
	{
		scanf_s("%s", &stu[n].name,30);
		scanf_s("%d", &stu[n].id);
		scanf_s("%f", &stu[n].grade);
	}
	printf("结果为：\n");
	sort();
	for (n = 0; n < SIZE; n++)
		printf("%s %d %5.2f\n", stu[n].name, stu[n].id, stu[n].grade);
	return 0;
}
void sort()
{
	int i, j;
	float t;
	for (i = 0; i < SIZE-1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (stu[j].grade < stu[j + 1].grade)
			{
				t = stu[j].grade;
				stu[j].grade = stu[j + 1].grade;
				stu[j + 1].grade = t;
			}
		}
	}
}
