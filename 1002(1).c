#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

int main()
{
	char n[100];
	char* ss[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	int sum = 0;
	int i = 0;
	int a = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	scanf("%s", &n);
	while (strlen(n) > i)
	{
		sum = sum + n[i] - '0';
		i++;
	}
	//printf("%d\n", sum);
	x = sum / 100;
	y = sum / 10 % 10;
	z = sum % 10;
	if (x == 0 && y != 0)
	{
		printf("%s ", ss[y]);
		printf("%s", ss[z]);
	}
	else if (x == 0 && y == 0)
	{
		printf("%s", ss[z]);
	}
	else
	{
		printf("%s ", ss[x]);
		printf("%s ", ss[y]);
		printf("%s", ss[z]);
	}
	return 0;
}