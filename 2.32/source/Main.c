#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	float a, b, c;
	printf("�п�J�A������(����)�G"); scanf_s("%f", &a);
	printf("�п�J�A���魫(����)�G"); scanf_s("%f", &b);
	c = b / pow(a, 2);
	printf("�A��BMI:%f\n", c);
	if (c <= 18.5) 
	{
		printf("Underweight\n");
	}
	if (c > 18.5 && c <= 25) 
	{
		printf("Normal\n");
	}
	if (c > 25 && c <= 30)
	{
		printf("Overweight\n");
	}
	if (c > 30)
	{
		printf("Obese\n");
	}
	system("pause");
	return 0;

}
