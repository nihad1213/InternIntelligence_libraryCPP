#include "ownmath.h"
#include <iostream>

int main() {
    // Testing sum function 
    double Sum = sum(3, 4);
    std::cout << "Sum: " << Sum << '\n';
    
    // Testing sub function
    double Sub = sub(4.5, 6);
    std::cout << "Subtraction: " << Sub << '\n';

    // Testing mul function
    double Mul = mul(1, 3);
    std::cout << "Multiplication: " << Mul << '\n';

    // Testing divv function
    double Div = divv(1, 3);
    std::cout << "Division: " << Div << '\n'; 

    // Testing mod function
    long int Mod = mod(12, 5);
    std::cout << "Modulus: " << Mod << '\n';

    // Testing power function
    double Pow = power(2, 3);
    std::cout << "Power: " << Pow << '\n';

    // Testing factorial function
    double Fac = factorial(5);
    std::cout << "Factorial: " << Fac << '\n';

    // Testing abs function
    double Abs = abs(-10.56);
    std::cout << "Absolute value: " << Abs << '\n';

    // Testing trigonometric functions
    double angle = 30.0;

    double Sin = sin(angle);
    std::cout << "sin(" << angle << ") = " << Sin << '\n';

    double Cos = cos(angle);
    std::cout << "cos(" << angle << ") = " << Cos << '\n';

    double Tan = tan(angle);
    std::cout << "tan(" << angle << ") = " << Tan << '\n';

    double Ctg = ctg(angle);
    std::cout << "cot(" << angle << ") = " << Ctg << '\n';

    return 0;
}
