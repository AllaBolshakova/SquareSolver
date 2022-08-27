#include<stdio.h>
#include<math.h>
#include<assert.h>

#ifndef SQUARE_EQUATION_SOLVER_HPP
#define SQUARE_EQUATION_SOLVER_HPP

/*!
��������� ����� ����������� ��������� �� ��� �������������
\ param [in] a, b, c - ��������� ����������� ���������
\ param [in] x1, x2 - ��������� �� ������, ��� �������� �������� ������
����������� ���������
*/
int SquareSolver(double a, double b, double c, double* x1, double* x2);

/*!
��������� ����� ��������� ��������� �� ��� �������������
\ param [in] b, c - ��������� ����������� ���������
\ param [in] x1 - ��������� �� ������, ��� �������� �������� �����
��������� ���������
*/
int LinealSolver(double b, double c, double* x1);

/*!
������� �� ����� ������� ����������� ��������� �� ��� �������������
\ param [in] nRoots - ���������� ������ ����������� ���������
\ param [in] x1, x2 - ����� ����������� ���������
*/
void PrintSolution(int nRoots, double x1, double x2);

/*!
����������, ����� �� ����� � ��������� ������ � ����������� ����� 0
\ param [in] x - ����� � ��������� ������
*/
bool IsZero(double x);

#endif
