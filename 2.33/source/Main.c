#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, c, d, e, total;
	printf("請輸入一整天的總里程數:");
	scanf_s("%f", &a);
	printf("請輸入汽油一公升多少錢:");
	scanf_s("%f", &b);
	printf("請輸入平均一公升能行駛多少公里:");
	scanf_s("%f", &c);
	printf("請輸入一天的停車費:");
	scanf_s("%f", &d);
	printf("請輸入一天的通行費(過路費):");
	scanf_s("%f", &e);
	total = a / c * b + d + e;
	printf ("%f", total);
	system("pause");
	return 0;

}
