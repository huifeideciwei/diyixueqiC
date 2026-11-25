#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

    void aver(float (*p)[4], int n);
    void printn(float (*p)[4], int n);
    float arr[3][4] = { {1,4,7,8}, {5,2,3,6}, {9,7,5,3} };
    int x;
    float (*p)[4] = arr;
    scanf("%d", &x);
    aver(p, 3);
	
    printn(p, x);
    return 0;
}
void aver(float (*p)[4], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 4; j++)
            sum += *(*(p + i) + j);
    printf("平均值：%.2f\n", sum / (n * 4));
}
void printn(float (*p)[4], int n)
{
    int i = n - 1;
    for (int j = 0; j < 4; j++)
        printf("%.2f ", *(*(p + i) + j));
    printf("\n");
}