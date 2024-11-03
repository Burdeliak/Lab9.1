#include <stdio.h>
#include <math.h> // ��� fabs

// ������� ��� ���������
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQR(x) ((x) * (x))

// ������ ��� ���������� ������ w ��� 5 < z < 10
#define EXPR1(x, z) (MIN(x, z) * MAX((x + z), (x * z)))

// ������ ��� ���������� ������ w ��� z <= 5 ��� z >= 10
#define EXPR2(x, z) (SQR(MAX(ABS(x - z), z)))

// ������� ��� ��������� ����������
#define PRINTI(w) puts("control output"); \
    printf(#w " = %d\n", (int)w)

#define PRINTR(w) puts("���������:"); \
    printf(#w " = %.2f\n", (float)w)

int main() {
    double x, z, w;

    // �������� �������� ������ � �����������
    printf("������ �������� x: ");
    scanf("%lf", &x);
    printf("������ �������� z: ");
    scanf("%lf", &z);

    // �������� ���������� ������� �� ����
    if (5 < z && z < 10) {
        w = EXPR1(x, z);
        PRINTR(w); // �������� ��������� ��� EXPR1 � ������ � ��������� ������
    }
    else if (z <= 5 || z >= 10) {
        w = EXPR2(x, z);
        PRINTR(w); // �������� ��������� ��� EXPR2 � ������ � ��������� ������
    }

    return 0;
}
