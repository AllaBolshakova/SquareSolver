#include<stdio.h>
#include<math.h>
#include<assert.h>

#ifndef SQUARE_EQUATION_SOLVER_HPP
#define SQUARE_EQUATION_SOLVER_HPP

/*!
Вычисляет корни квадратного уравнения по его коэффициентам
\ param [in] a, b, c - параметры квадратного уравнения
\ param [in] x1, x2 - указатели на ячейки, где хранятся значения корней
квадратного уравнения
*/
int SquareSolver(double a, double b, double c, double* x1, double* x2);

/*!
Вычисляет корни линейного уравнения по его коэффициентам
\ param [in] b, c - параметры квадратного уравнения
\ param [in] x1 - указатель на ячейку, где хранится значение корня
линейного уравнения
*/
int LinealSolver(double b, double c, double* x1);

/*!
Выводит на экран решение квадратного уравнения по его коэффициентам
\ param [in] nRoots - количество корней квадратного уравнения
\ param [in] x1, x2 - корни квадратного уравнения
*/
void PrintSolution(int nRoots, double x1, double x2);

/*!
Определяет, лежит ли число с плавающей точкой в окрестности точки 0
\ param [in] x - число с плавающей точкой
*/
bool IsZero(double x);

#endif
