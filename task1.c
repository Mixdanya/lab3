#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>
#include <Windows.h>

#define D 2.54
#define P  2.32166

int task1() {
	int num1;
	int num2;
	puts("введите первое число");
	scanf("%d", &num1);
	printf("Введено число %d \n", num1);
	puts("введите второе число");
	scanf("%d", &num2);
	printf("Введено число %d \n", num2);


	printf(" %d сложить %d = %d \n ", num1, num2, num1 + num2);
	printf(" %d вычесть %d = %d \n ", num1, num2, num1 - num2);
	printf(" %d умножить %d = %d \n ", num1, num2, num1 * num2);
	printf(" %d разделить %d = %d \n ", num1, num2, num1 / num2);
	printf(" %d остаток %d = %d \n ", num1, num2, num1 % num2);
	return 0;
}


int task2() {
	int dym;
	float result_d;
	float result_p;
	puts("введите число для рассчета");
	scanf("%d", &dym);
	result_d = D * dym;
	printf(" % d английских дюймов – это %.1f см ", dym, result_d);
	result_p = P * dym;
	printf(" % d испанских дюймов – это %.1f см ", dym, result_p);
	return 0;
}


int task3() {
	float a;
	float b;
	float umn;
	float summ;
	float razn;

	printf("введите число A \n");
	scanf("%f", &a);
	printf("введите число B \n");
	scanf("%f", &b);
	umn = a * b;
	summ = a + b;
	razn = a - b;

	puts("--------------------------------------------------------\n");
	printf("|%10s %10s|%10s %10s|%10s %10s|\n", "a*b", "", "a+b", "", "a-b", "");
	puts("------------------------------------------------------------\n");
	printf("|%10.f+%-10.f|%10.f+%-10.f|%10.f-%-10.f|\n", a, b, a, b, a, b);
	puts("-------------------------------------------------------------\n");
	printf("|%12.f         |%12.f         |%12.f         |\n", umn, summ, razn);
	return 0;
}


int main() {
	SetConsoleOutputCP(65001);
	task1();
	task2();
	task3();
}
