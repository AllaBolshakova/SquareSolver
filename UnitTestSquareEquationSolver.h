#include<stdio.h>
#include<math.h>
#include<assert.h>

#ifndef UNITTEST_SQUARE_EQUATION_SOLVER_HPP
#define UNITTEST_SQUARE_EQUATION_SOLVER_HPP

/*!
����������� ������ � ���������� ���������
\ param [in] a, b, c - ��������� ����������� ���������
\ param [in] x - ������ ����������� ���������
*/
bool IsSolution(double a, double b, double c, double x);

/*!
��������� ������������ ���������� ������ ��������� � �� ���������� �� ��� �������������
\ param [in] a, b, c - ��������� ����������� ���������
\ param [in] ExpnRoots - ��������� ���������� ������
*/
bool OneTest(double a, double b, double c, int ExpnRoots);

/*!
����������� � ��������� ������������ �� ������ ������,
��������� ���������� �� ��������� ������
*/
void Tests(void);

/*!
����������� � ��������� ������������ �� ������ ������ �� �����,
��������� ���������� �� ��������� ������
*/
void TestsFromFile(void);

#endif
