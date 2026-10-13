#include <stdio.h>
#include <locale.h>

 int main()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	puts("Нажмите Enter для продолжения...");
	getchar(); // ожидание нажатия Enter
	puts("Продолжение программы");
	return 0;
}