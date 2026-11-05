#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, num=0;
	int a[4][4];
	for (x = 0;x < 4;x++)
		for (y = 0;y < 4;y++)
			scanf("%d", &a[x][y]);
	for (x = 0;x < 4;x++)
		for (y = 0;y < 4;y++)
			if (x == 0 || x == 3 || y == 0 || y == 3)
			num = a[x][y] + num;
	/*for (x = 1;x < 3;x++)
		for (y = 1;y < 3;y++)
			num = num - a[x][y];*/
	printf("%d", num);

	return 0;
}