//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define MONTHS 12
//
//
//char* month_list[MONTHS] = { "January","February","March","April","May","June","July","Auguest","September","October","November","December" };
//
//
//int day[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//
//
//typedef struct days_counts {
//	int days;
//	int counts;
//}DC;
//
//
//int sum_day(int arr[], int n);
//void sort_day(int arr[], int n);
//void print_arr(int arr[], int n);
//
//
//int main()
//{
//	int month, total;
//	int sort[MONTHS];
//	DC dict[MONTHS];
//	int day_size = 0;
//	int i, k;
//	printf("请输入月份（阿拉伯数字）：");
//	scanf("%d", &month);
//	if (month < 1 || month>12)
//	{
//		printf("月份输入有误，请输入1-12之间的数字，请重新运行输入！\n");
//		return 1;
//	}
//	printf("月份英语：%s,天数：%d\n", month_list[month - 1], day[month - 1]);
//
//
//	day[1] = 29;
//	total = sum_day(day, MONTHS);
//	printf("一年总天数：%d\n", total);
//
//
//	for (i = 0;i < MONTHS;i++)
//		sort[i] = day[i];
//	sort_day(sort, MONTHS);
//	print_arr(sort, MONTHS);
//
//
//	for (i = 0;i < MONTHS;i++)
//	{
//		for (k = 0;k < day_size;k++)
//			if (dict[k].days == sort[i])
//				break;
//		if (k < day_size)
//			dict[k].counts++;
//		else
//		{
//			dict[day_size].days = sort[i];
//			dict[day_size].counts = 1;
//			day_size++;
//		}
//	}
//
//
//	printf("{");
//	for (i = 0;i < day_size;i++)
//	{
//		printf("%d:%d", dict[i].days, dict[i].counts);
//		if (i < day_size - 1)
//			printf(",");
//	}
//	printf("}\n");
//	getchar();
//	getchar();
//	return 0;
//}
//
//
//int sum_day(int arr[], int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0;i < n;i++)
//		sum += arr[i];
//	return sum;
//}
//
//
//void sort_day(int arr[], int n)
//{
//	int i, j, temp;
//	for (i = 0;i < n;i++)
//		for (j = 0;j < n - 1 - i;j++)
//			if (arr[j] >= arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//}
//
//
//void print_arr(int arr[], int n)
//{
//	int i = 0;
//	printf("[");
//	for (i = 0;i < n;i++)
//		printf("%d，", arr[i]);
//	printf("]\n");
//}
