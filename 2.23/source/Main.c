#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[2];
	int i, j, tmp;
	printf("材计"); scanf_s("%d", &a[0]);
	printf("材计"); scanf_s("%d", &a[1]);
	printf("材计"); scanf_s("%d", &a[2]);
	for (i = 0; i < 3; i = i + 1)
	{
		for (j = i + 1; j < 3; j = j + 1)
		{
			if (a[i] > a[j])
			{
				//跑计ユ传
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	
	printf("程:%d\n", a[0]);
	printf("程:%d\n", a[2]);
	system("pause");
	return 0;
	
}