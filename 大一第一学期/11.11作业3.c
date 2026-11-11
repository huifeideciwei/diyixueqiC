#include<stdio.h>
int main()
{
	int m, sum=0;
	for (m = 101;m <= 201;m += 2)
		sum += m;
	printf("%d\n", sum);

	return 0;
}