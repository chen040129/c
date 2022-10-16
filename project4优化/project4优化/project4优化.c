#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x = 0;
	printf("«Î ‰»Îx÷µ");
	scanf("%d", &x);
	int y = 0;
	int z = 0;
	if (x < 0) { z = 0; }
	else { z = 1; };
	switch (z)
	{
	case 0:
		y = -1;
		break;
	case 1:
		y = 2 * x;
		break;
	}
	printf("y=%d", y);
	return 0;
}