# pragma once
#include <iostream>

/**
 * sum - find sum of 2 number
 * @a: number 1
 * @b: number 2
 * @return: a + b 
 */
double sum(double a, double b) {
    return a + b;
}

/**
 * sub - find subtract of 2 number
 * @a: number 1
 * @b: number 2
 * @return a - b
 */
double sub(double a, double b) {
    return a-b;
}

/**
 * mul - find multiply of 2 number
 * @a: number 1
 * @b: number 2
 * @return: a * b
 */
double mul(double a, double b) {
    return a * b;
}

/**
 * divv - find division of 2 number
 * @a: number 1
 * @b: number 2
 * @return: a / b
 */
double divv(double a, double b) {
    if (b == 0) {
        std::cout << "DIVISION BY ZERO ERROR";
    }

    return a / b;
}

/**
 * mod - find modulus of number
 * @a: number 1
 * @b: number 2
 * @return: a % b
 */
long int mod(long int a, long int b) {
    if (b == 0) {
        std::cout << "DIVISION BY ZERO ERROR";        
    }
    return a % b;
}


/**
 * pow - find power of number
 * @a: base number
 * @b: power
 * 
 * @return a ^ b
*/
double power(double a, int b) {
    double result = 1;

    for (int i = 0; i < b; i++) {
        result = result * a;
    }

    return result;
}

/**
 * factorial - find factorial
 * @a: number
 * 
 * @return: a * (factorial(a-1))
 */
double factorial(int a) {
    if (a < 0) {
        std::cout << "Number can't be less than 0";
        return -1;
    } else if (a == 0) {
        return 1;
    }

    return a * factorial(a - 1);
}

/**
 * abs - find absolute value of number
 * @a: number
 * @return: if a > 0 then a; if a < 0 then a * (-1)
 */
double abs(double a) {
    if (a > 0) {
        return a;
    } else {
        a = a * (-1);
        return a;
    }
}



