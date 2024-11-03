#include <stdio.h>
#include <math.h> // для fabs

// Макроси для обчислень
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQR(x) ((x) * (x))

// Макрос для обчислення виразу w при 5 < z < 10
#define EXPR1(x, z) (MIN(x, z) * MAX((x + z), (x * z)))

// Макрос для обчислення виразу w при z <= 5 або z >= 10
#define EXPR2(x, z) (SQR(MAX(ABS(x - z), z)))

// Макроси для виведення результатів
#define PRINTI(w) puts("control output"); \
    printf(#w " = %d\n", (int)w)

#define PRINTR(w) puts("результат:"); \
    printf(#w " = %.2f\n", (float)w)

int main() {
    double x, z, w;

    // Запитуємо значення змінних у користувача
    printf("Введіть значення x: ");
    scanf("%lf", &x);
    printf("Введіть значення z: ");
    scanf("%lf", &z);

    // Виконуємо обчислення залежно від умов
    if (5 < z && z < 10) {
        w = EXPR1(x, z);
        PRINTR(w); // Виводимо результат для EXPR1 у форматі з плаваючою точкою
    }
    else if (z <= 5 || z >= 10) {
        w = EXPR2(x, z);
        PRINTR(w); // Виводимо результат для EXPR2 у форматі з плаваючою точкою
    }

    return 0;
}
