#include <TXLib.h>
#include "SquareEquationSolver.h"
#include "UnitTestSquareEquationSolver.h"

int main(void)
{
    Tests();

    double a = 0, b = 0, c = 0;
    printf("Введите коэффициенты квадратного уравнения: ");
    int n = scanf("%lf %lf %lf", &a, &b, &c);

    while (n != 3)
    {
        while (getchar() != '\n');
        printf("Неверный формат ввода. Введите коэффициенты заново: ");
        n=scanf("%lf %lf %lf", &a, &b, &c);
    }

    double x1 = 0, x2 = 0;
    int nRoots = SquareSolver(a, b, c, &x1, &x2);
    PrintSolution (nRoots, x1, x2);
}

