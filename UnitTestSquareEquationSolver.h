#include<stdio.h>
#include<math.h>
#include<assert.h>

#ifndef UNITTEST_SQUARE_EQUATION_SOLVER_HPP
#define UNITTEST_SQUARE_EQUATION_SOLVER_HPP

/*!
Подставляет корень в квадратное уравнение
\ param [in] a, b, c - параметры квадратного уравнения
\ param [in] x - корень квадратного уравнения
*/
bool IsSolution(double a, double b, double c, double x);

/*!
Проверяет правильность вычисления корней уравнения и их количество по его коэффициентам
\ param [in] a, b, c - параметры квадратного уравнения
\ param [in] ExpnRoots - ожидаемое количество корней
*/
bool OneTest(double a, double b, double c, int ExpnRoots);

/*!
Подставляет в уравнение коэффициенты из набора тестов,
вычисляет количество не прошедших тестов
*/
void Tests(void);

/*!
Подставляет в уравнение коэффициенты из набора тестов из файла,
вычисляет количество не прошедших тестов
*/
void TestsFromFile(void);

#endif
