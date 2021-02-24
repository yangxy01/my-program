#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	while (~scanf("%f %f %f", &a, &b, &c))
	{
		if (a + b>c)
		{
			if (a == b && a == c && b == c)
				printf("Equilateral triangle!\n");
			else if (a == b || b == c || a == c)
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
		{
			printf("Not a triangle!\n");
		}
	}
	return 0;
}