#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <locale.h>


/*
int main(void) {
    setlocale(LC_ALL, ".UTF8");
    char c;
    int i;
    float f;
    double d;


    printf("Введите символ : ");
    scanf(" %c", &c); 

    printf("Введите целое число : ");
    scanf("%d", &i);

    printf("Введите дробное число (обязательно с запятой): ");
    scanf("%f", &f);

    printf("Введите очень маленькое число в экспоненциальной форме (например, 5e-12): ");
    scanf("%lf", &d); 

    printf("\n Вывод данных\n");
    printf("Символ   %c\n", c);
    printf("Целое число   %d\n", i);
    printf("Дробное   %f\n", f);
    printf("Дробное   %e\n", d); 


    int celaya_chast = (int)f;         
    float drobnaya_chast = f - celaya_chast;
    printf("Задача 1а (вывести целую часть и дробную):\n");
    printf("  Целая часть: %d\n", celaya_chast);
    printf("  Дробная часть: %f\n", drobnaya_chast);

    printf("Задача 1б (вывести десятичных и 16 код для символа):\n");
    printf("  Десятичный код: %d\n", c);        
    printf("  Шестнадцатеричный код: %X\n", c); 

    double result_1_i = 1.0 / (double)i;
    printf("Задача 1в (десятичное число равное отношению 1 к введенному):\n");
    printf("  Результат выражения 1/%d равен: %lf\n", i, result_1_i);

    return 0;
};
*/

/*
int main(void) {
    setlocale(LC_ALL, ".UTF8");
    int a = 11;
    int b = 3;
    float y;
    int x;
    double z;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("Результат x (int): %d\n", x);
    printf("Результат y (float): %f\n", y);
    printf("Результат z (double): %lf\n", z);


    //   Во всех трёх случаях вывелось число  3.000000. Так как 'a' и 'b' изначально целые числа (int), операция 'a / b' выполняется как целочисленное деление. Компьютер считает 11 / 3 = 3 (остаток отбрасывается). Только ПОСЛЕ этого результат '3' неявно превращается во float и double,становясь 3.000000. Настоящая дробная часть потеряна в самом начале. 

    printf("С приведением переменной (float)a / b: %f\n", (float)a / b);
    printf("С приведением переменной (double)a / b: %lf\n", (double)a / b);

    printf("Со скобками вокруг выражения (float)(a / b): %f\n", (float)(a / b));

    //1. При '(float)a / b' приоритет операции приведения типов выше, чем у деления. Переменная 'a' сначала становится дробным числом 11.0. Затем дробное 11.0 делится на целое 3, благодаря чему деление становится вещественным. Результат точный: 3.666667.
    //2. При '(float)(a / b)' скобки заставляют компьютер сначала выполнить деление. Внутри скобок целое 11 делится на целое 3, получается целое 3. Затем это число 3 принудительно превращается во float. Результат: 3.000000.
    

    return 0;


};

*/


/*
int main(void) {
    setlocale(LC_ALL, ".UTF8");

    int n;
    printf("Ваше число: ");
    scanf("%d", &n);

    int last = n % 10;      
    int first = n / 100; 
    int middle = (n / 10) % 10;

    int sum = first + middle + last;            
    int reverse = last * 100 + middle * 10 + first;

    printf("Последняя цифра: %d, первая: %d, сумма цифр: %d, наоборот: %d\n", last, first, sum, reverse);

    return 0;
};
*/



int main(void) {

    setlocale(LC_ALL, ".UTF8");

    int A, B, C;
    int is_ideal;

    printf("Введите три параметра кислотности (A, B и C) через пробел: ");
    scanf("%d %d %d", &A, &B, &C);

    is_ideal = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("Лунка идеальна для посадки семян? (1 - да, 0 - нет): %d\n", is_ideal);

    return 0;

};

