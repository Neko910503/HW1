#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[2];
	int i, j, tmp;
	printf("�Ĥ@�ӼơG"); scanf_s("%d", &a[0]);
	printf("�ĤG�ӼơG"); scanf_s("%d", &a[1]);
	printf("�ĤT�ӼơG"); scanf_s("%d", &a[2]);
	for (i = 0; i < 3; i = i + 1)
	{
		for (j = i + 1; j < 3; j = j + 1)
		{
			if (a[i] > a[j])
			{
				//�ܼƥ洫
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	
	printf("�̤p:%d\n", a[0]);
	printf("�̤j:%d\n", a[2]);
	system("pause");
	return 0;
	
}