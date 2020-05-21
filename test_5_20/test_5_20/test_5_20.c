#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////enum str
////{
////	male,
////	famale,
////	secure
////};
////int main()
////{
////	//int arr[10] = 0;
////	int num = 10;
////	enum str  s = male;
////	printf("%d\n", famale);
////	printf("%d\n", male);
////	printf("%d\n", secure);
////	return 0;
////}
////int main()
////{
////	char arr1[] = "abc";
////	char arr2[] = { 'a', 'b', 'c' };
////	printf("%s\n", arr1);
////	printf("%s\n", arr2);
////	return 0;
////}
////int main()
////{
////	printf("\a\a\a\a\a\a\a\a\a\a\a\a\a");
////}
////int main()
////{
////	int input = 0;
////	printf("º”»Î");
////	printf("nihaohaohaoxuexia(1/0)?\n");
////	scanf("%d", &input);
////	if (input == 1)
////		printf("hao\n");
////	else
////		printf("ahfree\n");
////	return 0;
////
////}
////int main()
////{
////	printf("jiaru\n");
////	int line = 0;
////	while (line < 200)
////	{
////		line++;
////		printf("nvli\n");
////
////	}
////	return 0;
////}
////int main()
////{
////	char  num1 = 0;
////	char num2 = 0;
////	long num3 = 0;
////	scanf("%s%s", &num1, &num2);
////	num3 = num1 + num2;
////	printf("%s\n", num3);
////	return 0;
////}
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = ADD(num1, num2);
//	printf("%d", sum);
//	return 0;
//}
#include<stdio.h>
int max(int x, int y)
{
	
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("please input two figures:");
	scanf("%d%d", &a, &b);
	c = max(a, b);
	printf("%d\n", c);
	return 0;

}