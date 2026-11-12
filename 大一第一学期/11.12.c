#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	void hanno_step(int n, char A, char B, char C);
	int m;
	scanf("%d", &m);
	hanno_step(m, 'A', 'B', 'C');
	return 0;
}
void hanno_step(int n, char A, char B, char C)
{
	if (n == 1)
		printf("%c->%c\n", A, C);
	else
	{
		hanno_step(n - 1, A, C, B);
		printf("%c->%c\n", A, C);
		hanno_step(n - 1, B, A, C);
	}
}