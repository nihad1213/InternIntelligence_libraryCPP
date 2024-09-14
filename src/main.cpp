#include "ownmath.h"
#include <iostream>

int main() {
    // Testing sum function 
    double Sum = sum(3, 4);
    std::cout << Sum << '\n';
    
    // Testing sub function
    double Sub = sub(4.5, 6);
    std::cout << Sub << '\n';

    // Testing mul function
    double Mul = mul(1, 3);
    std::cout << Mul << '\n';

    // Testing divv function
    double Div = divv(1, 3);
    std::cout << Div << '\n'; 

    // Testing mod function
    int Mod = mod(12, 5);
    std::cout << Mod << '\n';

    // Testing power function
    double Pow = power(2, 3);
    std::cout << Pow << '\n';

    // Testing factiroal function
    double Fac = factorial(5);
    std::cout << Fac << '\n';

    // Testinf abs function
    double Abs = abs(-10.56);
    std::cout << Abs << '\n';

    return 0;
} 