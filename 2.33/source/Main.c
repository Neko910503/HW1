#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, c, d, e, total;
	printf("�п�J�@��Ѫ��`���{��:");
	scanf_s("%f", &a);
	printf("�п�J�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &b);
	printf("�п�J�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &c);
	printf("�п�J�@�Ѫ������O:");
	scanf_s("%f", &d);
	printf("�п�J�@�Ѫ��q��O(�L���O):");
	scanf_s("%f", &e);
	total = a / c * b + d + e;
	printf ("%f", total);
	system("pause");
	return 0;

}
