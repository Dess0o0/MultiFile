#include <iostream>
#include<set>

#include<string>
#include<Windows.h>

#ifdef WIN32

#include<clocale>

#endif // WIN32

#ifdef _HAS_CXX20

#endif // _HAS_CXX20

#include "Phisics.hpp"

int main()
{
#ifdef WIN32
    ::SetConsoleCP(CP_UTF8);
    ::SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "RUS");
#endif // WIN32

    std::wstring str;
    str = L"фвфывф";
    std::wcout << Velocity(1.,5.)<<' '<< FullEnergy(123);

    return 0;
}
