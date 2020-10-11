#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,temp;

	printf("請輸入兩個數字："); scanf_s("%d %d", &a,&b);
	if (b > a) 
	{
		temp = a;
		a = b;
		b = temp;
	}
	c = a % b;
	
	if (c == 0)

		printf("%d是%d的倍數",a,b);

	if (c != 0)
		printf("%d不是%d的倍數", a, b);


}