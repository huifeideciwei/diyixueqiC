#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
unsigned long long move_count = 0;
int main()
{
	void hanno_step(int n, char A, char B, char C);
	int m;
	scanf("%d", &m);
	hanno_step(m, 'A', 'B', 'C');
	printf("移动次数：%llu\n", move_count);
	return 0;
}
void hanno_step(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c->%c\n", A, C);
		move_count++;
	}
	else
	{
		hanno_step(n - 1, A, C, B);
		printf("%c->%c\n", A, C);
		move_count++;
		hanno_step(n - 1, B, A, C);
	}
}