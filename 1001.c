#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 0;
    int cnt = 0;
    scanf("%d", &a);
    while (a > 1)
    {
        if (a % 2 == 0) {
            a = a / 2;
            cnt++;
        }
        else {
            a = (a * 3 + 1) / 2;
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}