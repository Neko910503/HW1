#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;

	scanf_s("%d", &a);

	a = a % 2;

	if (a == 0)
	{
		printf("����");
	}

	if (a != 0)
	{
		printf("�_��");
	}
		
}