#include <stdio.h>
#define SIZE 100
int main()
{
	void fun(char a[], char b[]);
	char a[SIZE];
	char b[SIZE];
	scanf_s("%s", a, SIZE);
	fun(a, b);
	return 0;



}
void fun(char a[], char b[])
{
	int number = 0;
	for (int i = 0; i < SIZE; i++)
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
			b[number++] = a[i];
	for (int i = 0; i < number; i++)
		printf("%c", b[i]);
}