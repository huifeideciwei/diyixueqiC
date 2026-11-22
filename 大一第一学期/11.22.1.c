//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	double C, S, p;
//	printf("请输入三条边,空格隔开：");
//	//scanf("%lf,%lf,%lf",&a,&b,&c);
//	if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
//	{
//		printf("输入格式有误！请按3,4,5的格式输入（用中文逗号分割）。\n");
//		return 1;
//	}
//	if (a <= 0 || b <= 0 || c <= 0)
//	{
//		printf("变长必须是正数，请重新运行程序并输入。\n");
//		getchar();
//		getchar();
//		return 0;
//	}
//	if (a + b <= c || a + c <= b || b + c <= a)
//	{
//		printf("你输入的三条边不足以构成一个三角形，请重新输入。\n");
//		getchar();
//		getchar();
//		return 0;
//	}
//	C = a + b + c;
//	p = C / 2;
//	S = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("周长：%.2f\n", C);
//	printf("面积：%.2f\n", S);
//	getchar();
//	getchar();
//	return 0;
//}
