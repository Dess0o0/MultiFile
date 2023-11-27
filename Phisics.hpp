#pragma once

#ifndef PHISICS_HPP
#define PHISICS_HPP

extern const double c; // объ€вление глобаьных переменный раздел€ютс€ с определени€ми
// Ёто пример обь€влени€(extern)

double Velocity(double a, double t);

inline double FullEnergy(double mass)
{ // inline - встраиваема€ функци€. тело об€зательно хранитс€ в заголовке
	return mass * c;
}

template <typename Type>
Type ContertTime(double t)
{
	return Type(t);
}


#endif // !PHISICS_HPP
