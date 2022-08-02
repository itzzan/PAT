#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//为什么换成20-90就对了，换成10和100就错
//反正就是结构体数组要搞的合适，不然还是错
struct school
{
	char name[20];
	char id[20];
	int score;
}student[100];


int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int max = 0;
	int min = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%s %s %d", &student[i].name, &student[i].id, &student[i].score);
		if (student[max].score < student[i].score)
		{
			max = i;
		}
		if (student[min].score > student[i].score)
		{
			min = i;
		}
	}
	printf("%s %s\n", student[max].name, student[max].id);
	printf("%s %s\n", student[min].name, student[min].id);
	return 0;
}