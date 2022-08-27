#include<stdio.h>
#include<math.h>
#include<assert.h>

#ifndef UNITTEST_SQUARE_EQUATION_SOLVER_HPP
#define UNITTEST_SQUARE_EQUATION_SOLVER_HPP

/*!
ѕодставл€ет в уравнение коэффициенты из набора тестов,
вычисл€ет количество не прошедших тестов
*/
void Tests(void);

/*!
ѕровер€ет правильность вычислени€ корней уравнени€ и их количество по его коэффициентам
\ param [in] a, b, c - параметры квадратного уравнени€
\ param [in] ExpnRoots - ожидаемое количество корней
*/
bool OneTest(double a, double b, double c, int ExpnRoots);

/*!
ѕодставл€ет корень в квадратное уравнение
\ param [in] a, b, c - параметры квадратного уравнени€
\ param [in] x - корень квадратного уравнени€
*/
bool IsSolution(double a, double b, double c, double x);


#endif
