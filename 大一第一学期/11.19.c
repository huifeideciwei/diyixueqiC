//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	void displace(int arr[], int n);
//	int i, arr[10];
//	printf("请输入10个数字\n");
//	for (i = 0;i < 10;i++)
//		scanf("%d", &arr[i]);
//	displace(arr, 10);
//	printf("接下来输出交换后的值\n");
//	for (i = 0;i < 10;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//void displace(int arr[], int n)
//{
//	int i, j, mid, t;
//	mid = (n + 1) / 2;
//	for (i = 0;i < mid;i++)
//	{
//		j = n - 1 - i;
//		t = arr[i];
//		arr[i] = arr[j];
//		arr[j] = t;
//	}
//	return;
//}