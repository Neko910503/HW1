#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,temp;

	printf("�п�J��ӼƦr�G"); scanf_s("%d %d", &a,&b);
	if (b > a) 
	{
		temp = a;
		a = b;
		b = temp;
	}
	c = a % b;
	
	if (c == 0)

		printf("%d�O%d������",a,b);

	if (c != 0)
		printf("%d���O%d������", a, b);


}