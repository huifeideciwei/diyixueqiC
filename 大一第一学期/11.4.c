#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, x, y, min;
	int a[10];
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);
	for(i=0;i<10;i++)
	{
		min = i;
		for (x = i + 1;x < 10;x++)
		{
			if (a[x] <= a[min])
				min = x;
		}
		if (min != i)
		{
			y = a[i];
			a[i] = a[min];
			a[min] = y;
		}
	}
	for (i = 0;i < 10;i++)
		printf("%d ", a[i]);
	return 0;
}