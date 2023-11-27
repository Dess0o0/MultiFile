#pragma once

#ifndef PHISICS_HPP
#define PHISICS_HPP

extern const double c; // ���������� ��������� ���������� ����������� � �������������
// ��� ������ ����������(extern)

double Velocity(double a, double t);

inline double FullEnergy(double mass)
{ // inline - ������������ �������. ���� ����������� �������� � ���������
	return mass * c;
}

template <typename Type>
Type ContertTime(double t)
{
	return Type(t);
}


#endif // !PHISICS_HPP
