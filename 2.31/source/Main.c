#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("number  square  cube\n");
	for(a=0;a<=10;a++)
	{
		b = pow(a, 2);
		c = pow(a, 3);
		if(a<=3)
		{
			printf("%d       %d       %d\n",a,b,c);
		}
		if (a >= 4 && a < 10)
		{
			printf("%d       %d      %d\n", a, b, c);
		}
		if (a == 10)
		{
			printf("%d      %d     %d\n", a, b, c);
		}
		
	}

	system("pause");
	return 0;

}
