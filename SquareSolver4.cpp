#include<TXLib.h>
#include<stdio.h>
#include<math.h>
int NumberOfRoots(double a, double b, double c, double* x1, double* x2);
int LinealSolver(double b, double c, double* x1);
int main(void)
{
    double a, b, c, x1, x2;
    printf("Введите коэффициенты квадратного уравнения: ");
    int n = scanf("%lf %lf %lf", &a, &b, &c);
    printf("%d", n);
    if (n != 3)
    {
        scanf("%lf %lf %lf", &a, &b, &c);
    }
    x1 = 0;
    x2 = 0;
    switch (NumberOfRoots(a, b, c, &x1, &x2))
    {
    case 0:
        printf("Нет корней");
        break;
    case 1:
        printf("Ответ: %lf", x1);
        break;
    case 2:
        printf("Ответы: %lf, %lf", x1, x2);
        break;
    case 3:
        printf("Бесконечно много корней");
        break;
    default:
        break;
    }
}
int NumberOfRoots(double a, double b, double c, double* x1, double *x2)
{
    if (a == 0)
        return LinealSolver(b, c, x1);
    else
    {
        double diskr = b * b - 4 * a * c;
        if (diskr < 0)
            return 0;
        else if (diskr == 0)
        {
            *x1 = (- b) / (2 * a);
            return 1;
        }
        else
        {
            *x1 = (- b - sqrt(diskr)) / (2 * a);
            *x2 = (- b + sqrt(diskr)) / (2 * a);
            return 2;
        }
    }
}
int LinealSolver(double b, double c, double* x1)
{
    if (b == 0)
    {
        if (c == 0)
            return 3;
        else
            return 0;
    }
    else
    {
        *x1 = c / b;
        return 1;
    }
}
