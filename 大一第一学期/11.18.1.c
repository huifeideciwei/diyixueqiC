#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	void enter_string(char str[80]);
	void delete_string(char str[], char ch);
	void print_string(char str[]);
	char c, str[80];
	enter_string(str);
	scanf("%c", &c);
	delete_string(str, c);
	print_string(str);
	return 0;
}