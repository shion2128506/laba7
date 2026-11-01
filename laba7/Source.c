#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

void task1();
void task2();
void task3();

int main()
{
	setlocale(LC_ALL, "RUS");
	task1();
	task2();
	task3();
}

void task1()
{
    char c;
    printf("Введите символ: ");
    scanf("%c", &c);

    switch (c) 
    {
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':

        printf("Это цифра\n");
        break;

    default:
        printf("Это другой символ\n");
        break;
    }
}
void task2()
{
    float x, y;
    char c;

    printf("Введите выражение типа число знак число: ");
    scanf("%f %c %f", &x, &c, &y);

    switch (c) 
    {
    case '+':
        printf("= %f\n", x + y);
        break;

    case '-':
        printf("= %f\n", x - y);
        break;

    case '*':
        printf("= %f\n", x * y);
        break;

    case '/':
    if (y == 0) 
    {
        printf("Ошибка: деление на ноль!\n");
    }
    else 
    {
        printf("= %f\n", x / y);
    }
        break;

    case '^':
        printf("= %f\n", pow(x, y));
        break;

    default:
        printf("Ошибка: неизвестная операция!\n");
        break;
    }
}
void task3()
{
    char ch;
    printf("Нажмите любую цифровую клавишу: ");
    ch = _getch();

    printf("%c\n", ch);

    // если ввели '5' (код 53), то 53 - 48 = 5
    int num = ch - '0';

    switch (num) {
    case 0:
        printf("Вы нажали цифру 0\n");
        break;
    case 1:
        printf("Вы нажали цифру 1\n");
        break;
    case 2:
        printf("Вы нажали цифру 2\n");
        break;
    case 3:
        printf("Вы нажали цифру 3\n");
        break;
    case 4:
        printf("Вы нажали цифру 4\n");
        break;
    case 5:
        printf("Вы нажали цифру 5\n");
        break;
    case 6:
        printf("Вы нажали цифру 6\n");
        break;
    case 7:
        printf("Вы нажали цифру 7\n");
        break;
    case 8:
        printf("Вы нажали цифру 8\n");
        break;
    case 9:
        printf("Вы нажали цифру 9\n");
        break;
    default:
        printf("Вы нажали не цифровую клавишу\n");
        break;
    }
}