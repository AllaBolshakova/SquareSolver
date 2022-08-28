#include "SquareEquationSolver.h"

enum {INF = 3};

bool IsZero(double x)
{
    const double MINIMUM = 1e-8;
    return (fabs(x) < MINIMUM);
}

int SquareSolver(double a, double b, double c, double* x1, double* x2)
{

    assert(isfinite(a));
    assert(isfinite(b));
    assert(isfinite(c));
    assert(x1 != NULL);
    assert(x2 != NULL);
    assert(x1 != x2);

    if (IsZero(a))
        return LinealSolver(b, c, x1);

    const double Diskr = b * b - 4 * a * c;
    if (Diskr < 0)
        return 0;

    const double SqrtOfDiskr = sqrt(Diskr);
    if (IsZero(Diskr))
    {
        *x1 = (- b) / (2 * a);
        return 1;
    }
    else
    {
        *x1 = (- b - SqrtOfDiskr) / (2 * a);
        *x2 = (- b + SqrtOfDiskr) / (2 * a);
        return 2;
    }
}


int LinealSolver(double b, double c, double* x1)
{
    assert(isfinite(b));
    assert(isfinite(c));
    assert(x1 != NULL);

    if (IsZero(b))
        return (IsZero(c)) ? INF : 0;
    else
    {
        *x1 = (- c) / b;
        return 1;
    }
}


void PrintSolution(int nRoots, double x1, double x2)
{
    assert(isfinite(x1));
    assert(isfinite(x2));

    switch (nRoots)
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
        case INF:
            printf("Бесконечно много корней");
            break;
        default:
            printf("Ошибка");
            break;
    }
}



