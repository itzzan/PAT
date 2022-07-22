#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

void num(int q) 
{
	char* ss[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
	if (q > 9) 
	{
		num(q / 10);
		printf(" ");
	}
	printf("%s", ss[q % 10]);
}

int main()
{
	char n[100];
	
	int sum = 0;
	int i = 0;
	scanf("%s", &n);
	while (strlen(n) > i)
	{
		sum = sum + n[i] - '0';
		i++;
	}
	if (sum == 0) 
	{
		num(0);
	}
	num(sum);
	
}