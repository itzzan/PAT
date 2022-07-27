#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include <string.h>

//首先先给输入，总共有几个，然后就是循环输入
//然后就是判断
//首先不能有别的字符，除了 P A T 三个
//答案正确的是xPATx，x只有两种情况。1. 空字符。2. 含A的字符
//根据提示三，使用上述两条，可以判断出正确的结果为。
//P前面含A的字符个数 * P与T之间含A的字符个数 = P后面含A的字符个数
//所以说就是需要搞出有几个

void judge()
{
	int flag = 0;
	int left = 0;
	int mid = 0;
	int right = 0;
	int x = 0;
	int p = 0;
	int q = 0;
	int P = 0;
	int A = 0;
	int T = 0;
	char ss[100];
	scanf("%s", ss);

	int len = strlen(ss);
	for (x = 0; x < len; x++)//判断字符串里面是不是有别的字符
	{
		if ((ss[x] != 'P') && (ss[x] != 'A') && (ss[x] != 'T'))
		{
			flag = 0;
			break;
		}
		else if (ss[x] == 'P')
		{
			left = x;
			p = x;
			P++;
		}
		else if (ss[x] == 'T')
		{
			right = len - 1 - x;
			q = x;
			T++;
		}
		else if (ss[x] == 'A')
		{
			A++;
		}
	}
	if (q > p)
	{
		mid = q - p - 1;
	}
	else
	{
		mid = p - q - 1;
	}

	if (left * mid != right || P > 1 || T > 1)
	{
		flag = 0;
	}
	else
	{
		flag = 1;
	}
	if (q - p <= 1)
	{
		flag = 0;
	}
	if (flag == 1)
		printf("YES\n");
	else
		printf("NO\n");
}

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		judge();
	}
	return 0;
}



