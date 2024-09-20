#pragma once
#include <iostream>
#include <cmath> // For standard math functions

/**
 * sum - find sum of 2 numbers
 * @a: number 1
 * @b: number 2
 * @return: a + b 
 */
double sum(double a, double b) {
    return a + b;
}

/**
 * sub - find subtraction of 2 numbers
 * @a: number 1
 * @b: number 2
 * @return: a - b
 */
double sub(double a, double b) {
    return a - b;
}

/**
 * mul - find multiplication of 2 numbers
 * @a: number 1
 * @b: number 2
 * @return: a * b
 */
double mul(double a, double b) {
    return a * b;
}

/**
 * divv - find division of 2 numbers
 * @a: number 1
 * @b: number 2
 * @return: a / b
 */
double divv(double a, double b) {
    if (b == 0) {
        std::cout << "DIVISION BY ZERO ERROR" << std::endl;
        return 0; // Return 0 or handle as needed
    }
    return a / b;
}

/**
 * mod - find modulus of numbers
 * @a: number 1
 * @b: number 2
 * @return: a % b
 */
long int mod(long int a, long int b) {
    if (b == 0) {
        std::cout << "DIVISION BY ZERO ERROR" << std::endl;
        return 0; // Return 0 or handle as needed
    }
    return a % b;
}

/**
 * power - find power of number
 * @a: base number
 * @b: exponent
 * @return: a ^ b
 */
double power(double a, int b) {
    double result = 1;

    for (int i = 0; i < b; i++) {
        result *= a;
    }

    return result;
}

/**
 * factorial - find factorial
 * @a: number
 * @return: a * (factorial(a-1))
 */
double factorial(int a) {
    if (a < 0) {
        std::cout << "Number can't be less than 0" << std::endl;
        return -1;
    } else if (a == 0) {
        return 1;
    }
    return a * factorial(a - 1);
}

/**
 * abs - find absolute value of number
 * @a: number
 * @return: absolute value of a
 */
double abs(double a) {
    return (a > 0) ? a : -a;
}

/**
 * degreesToRadians - convert degrees to radians
 * @degrees: angle in degrees
 * @return: angle in radians
 */
double degreesToRadians(double degrees) {
    return degrees * (M_PI / 180.0);
}

/**
 * sin - calculate sine of an angle using Taylor series
 * @degrees: angle in degrees
 * @return: sin(degrees)
 */
double sin(double degrees) {
    double radians = degreesToRadians(degrees);
    double sinValue = 0.0;
    int terms = 10;

    for (int n = 0; n < terms; ++n) {
        double term = pow(-1, n) * pow(radians, 2 * n + 1) / factorial(2 * n + 1);
        sinValue += term;
    }

    return sinValue;
}

/**
 * cos - calculate cosine of an angle using Taylor series
 * @degrees: angle in degrees
 * @return: cos(degrees)
 */
double cos(double degrees) {
    double radians = degreesToRadians(degrees);
    double cosValue = 0.0;
    int terms = 10; // Number of terms for the Taylor series

    // Taylor series expansion for cos(x)
    for (int n = 0; n < terms; ++n) {
        double term = pow(-1, n) * pow(radians, 2 * n) / factorial(2 * n);
        cosValue += term;
    }

    return cosValue;
}

/**
 * tan - calculate tangent of an angle using sine and cosine
 * @degrees: angle in degrees
 * @return: tan(degrees)
 */
double tan(double degrees) {
    double sinValue = sin(degrees);
    double cosValue = cos(degrees);

    if (cosValue == 0) {
        std::cout << "TANGENT UNDEFINED (DIVISION BY ZERO)" << std::endl;
        return 0;
    }

    return sinValue / cosValue;
}

/**
 * ctg - calculate cotangent of an angle using tangent
 * @degrees: angle in degrees
 * @return: cot(degrees)
 */
double ctg(double degrees) {
    double tanValue = tan(degrees);

    if (tanValue == 0) {
        std::cout << "COTANGENT UNDEFINED (DIVISION BY ZERO)" << std::endl;
        return 0;
    }

    return 1 / tanValue;
}
