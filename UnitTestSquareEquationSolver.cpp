#include <TXLib.h>
#include "UnitTestSquareEquationSolver.h"
#include "SquareEquationSolver.h"

enum {INF = 3};

bool IsSolution(double a, double b, double c, double x)
{
    assert(isfinite(a));
    assert(isfinite(b));
    assert(isfinite(c));
    assert(isfinite(x));

    return IsZero(a*x*x + b*x + c);
}

bool OneTest(double a, double b, double c, int ExpnRoots)
{
    double x1 = 0, x2 = 0;
    int nRoots = SquareSolver(a, b, c, &x1, &x2);

    if (nRoots != ExpnRoots)
    {
        printf("Ошибка: nRoots=%d, ожидалось %d корней", nRoots, ExpnRoots);
        return false;
    }

    if ( (nRoots == 1) && !(IsSolution(a, b, c, x1)) )
    {
        printf("Ошибка: nRoots=%d, x=%lg", nRoots, x1);
        return false;
    }

    if ( (nRoots == 2) && !(IsSolution(a, b, c, x1) && IsSolution(a, b, c, x2)) )
    {
        printf("Ошибка: nRoots=%d, x1=%lg, x2=%lg\n", nRoots, x1, x2);
        return false;
    }

    printf("Тест пройден\n");
    return true;
}

void Tests(void)
{
    int NotOkTests = 0;
    double ValuesOfA[10] = {0,   0,  0,  0, 1, 1,  1, 10,  2,  -1};
    double ValuesOfB[10] = {0,   0,  3,  2, 0, 2, -5, -7, -1,   8};
    double ValuesOfC[10] = {0,  10,  0, -4, 4, 1,  6,  1, -3, -12};
    int    ExpnRoots[10] = {INF, 0,  1,  1, 0, 1,  2,  2,  2,   2};

    for (int i = 0; i < 10; i ++ )
    {
        if (!(OneTest (ValuesOfA[i], ValuesOfB[i], ValuesOfC[i], ExpnRoots[i])))
            NotOkTests += 1;
    }

    printf("Не прошли %d тестов\n", NotOkTests);
}

void TestsFromFile(void)
{
    FILE * DataFile = fopen("DataFile.txt", "r");

    if (DataFile == NULL)
    {
        printf("Ошибка\n");
        return;
    }
    int NotOkTests = 0;
    double a = 0, b = 0, c = 0;
    int ExpRoots = 0;

    while (fscanf(DataFile, "%lf %lf %lf %d\n", &a, &b, &c, &ExpRoots) != EOF)
    {
        if (!(OneTest (a, b, c, ExpRoots)))
            NotOkTests += 1;
    }

    printf("Не прошли %d тестов\n", NotOkTests);
    return;
}



