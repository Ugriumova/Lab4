#include <stdio.h>
#include < locale.h >
int main()

{
	setlocale(LC_CTYPE, "RUS");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c%i%.2f%.9lf",&c,&i,&f,&d);

	char c1;
	int i1;
	float f1;
	double d1;
	printf("Введите тип char\n");
	scanf_s("%c", &c1);
	printf("Введите тип int\n");
	scanf_s("%d", &i1);
	printf("Введите тип float\n");
	scanf_s("%f", &f1);
	printf("Введите тип double\n");
	scanf_s("%lf", &d1);
	printf("Целая часть вещ. числа - %d,дробная часть вещ. числа - %lf\n", (int) f, f - (int) f);
	printf("Десятичная - %x,шестнадцатиричная - %d\n", (int)c, (int)c);
	printf("%d\n", 1/i);
}
int two()
{
	setlocale(LC_CTYPE, "RUS");
	int a = 11;
	int b = 3;
	int x = a / b;
	float y = a / b; 
	double z = a / b;
	printf("x = %d, y = %f, z = %lf\n", x, y, z);
	printf("%f,%lf\n", (float)a/b,(double)a/b);
}