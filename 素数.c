#include <stdio.h>
int main()
{
	int  k;
	void prime(int k);
	int flag = 1;
	char ch;
	while (flag)
	{
		printf("输入一个数判断他是否为素数");
		scanf_s("%d", &k);
		prime(k);
		printf("输入N结束判断否则继续");
		getchar();
		ch = getchar();
		if (ch == 'N' || ch == 'n')
			flag = 0;

	}
}
void prime(int k)
{
	int i;
	for (i = 2; i <= k / 2; i++)
		if (k % i == 0)
		{
			printf("%d is not prime", k);
			break;
		}
		else if (i == k / 2)
			printf("%d is prime", k);



}