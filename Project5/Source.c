#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define k -4

void main()
{
	setlocale(LC_ALL, "rus");
	float x, y, a, b;

	printf("������� X: \n");
	scanf("%f", &x);
	a = pow((k + x), 3);
	b = log10(fabs(k * x));
	y = pow(b, 2) + sqrt(fabs(a));
	printf(" a = %f,\n b = %f,\n y = %f\n", a, b, y);

	printf(" ������� ��������� (1 - ��, 0 - ���): %d", ((int)a % 3) && (((int)a % 2 && (int)b % 2) != 1) && ((int)b % 3) && ((int)y % 3));
}
