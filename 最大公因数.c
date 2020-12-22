#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m, n, r;
	scanf("%d%d", &m, &n);
	if (m < n)
		r = m, m = n, n = r;
	while (r = m % n)
	{
		r = m % n;
		m = n, n = r;
	}
	printf("最大的公约数为%d", n);
}