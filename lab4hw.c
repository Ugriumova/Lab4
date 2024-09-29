#include <stdio.h>
#include <locale.h>
#define      N       52
float ras(float x)
{
	float res;
	res = N * (((4*x)-x)/3);
}
void main(void)

{
	setlocale(LC_ALL, "RUS");
	float x, res;
	//ввод данных
	puts("Введите количество денег, которые трятятся на сладости");
	scanf_s("%f", &x);
	//вызов функцию для нахождения значения
	res = ras(x);
	//вывод результата
	printf("Сбережения за год = %2.2f\n",res);
	system("pause");
}