#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("«Î ‰»Î∫Ø ˝÷µx\n");
	int x = 0;
	scanf("%d", &x);
	int y = 0;
	if (x < 0)
	{
		y = -1;
	}
	else {
		if (x == 0)
		{
			y = 0;
		}
		else {
			y = 2 * x;
		}
	}
	printf("y=%d\n", y);
	return 0;
}
/*
	  =-1  x<0
   y= =0   x=0
	  =2x  x>0
	  */