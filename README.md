# OwnMath Library

## Overview
The OwnMath library provides a set of custom mathematical operations, including basic arithmetic, power, factorial, and trigonometric functions. This library allows users to perform various mathematical calculations easily.

## Directory Structure
├── build/ # Directory for CMake build files ├── inc/ # Directory for header files │ └── ownmath.h # Header file for OwnMath library ├── src/ # Directory for source files │ └── main.cpp # Example source file for testing the library ├── CMakeLists.txt # CMake configuration file └── README.md


## Functions

| Function Name       | Description                                               | Parameters                 | Return Type         |
|---------------------|-----------------------------------------------------------|----------------------------|----------------------|
| `sum`               | Calculates the sum of two numbers.                       | `double a, double b`       | `double`             |
| `sub`               | Calculates the subtraction of two numbers.               | `double a, double b`       | `double`             |
| `mul`               | Calculates the multiplication of two numbers.            | `double a, double b`       | `double`             |
| `divv`              | Calculates the division of two numbers.                  | `double a, double b`       | `double`             |
| `mod`               | Calculates the modulus of two numbers.                   | `long int a, long int b`   | `long int`          |
| `power`             | Calculates the power of a base number.                   | `double a, int b`          | `double`             |
| `factorial`         | Calculates the factorial of a non-negative integer.      | `int a`                    | `double`             |
| `abs`               | Calculates the absolute value of a number.               | `double a`                 | `double`             |
| `degreesToRadians`  | Converts degrees to radians.                              | `double degrees`           | `double`             |
| `sin`               | Calculates the sine of an angle using Taylor series.     | `double degrees`           | `double`             |
| `cos`               | Calculates the cosine of an angle using Taylor series.   | `double degrees`           | `double`             |
| `tan`               | Calculates the tangent of an angle.                      | `double degrees`           | `double`             |
| `ctg`               | Calculates the cotangent of an angle.                    | `double degrees`           | `double`             |

## Function Details

### `sum(double a, double b)`
Calculates the sum of two numbers.

### `sub(double a, double b)`
Calculates the subtraction of two numbers.

### `mul(double a, double b)`
Calculates the multiplication of two numbers.

### `divv(double a, double b)`
Calculates the division of two numbers. Returns 0 if the divisor is zero.

### `mod(long int a, long int b)`
Calculates the modulus of two numbers. Returns 0 if the divisor is zero.

### `power(double a, int b)`
Calculates the power of a number.

### `factorial(int a)`
Calculates the factorial of a non-negative integer. Returns -1 for negative input.

### `abs(double a)`
Calculates the absolute value of a number.

### `degreesToRadians(double degrees)`
Converts degrees to radians.

### `sin(double degrees)`
Calculates the sine of an angle using Taylor series.

### `cos(double degrees)`
Calculates the cosine of an angle using Taylor series.

### `tan(double degrees)`
Calculates the tangent of an angle. Returns 0 if the cosine is zero.

### `ctg(double degrees)`
Calculates the cotangent of an angle. Returns 0 if the tangent is zero.

## Example Usage

```cpp
#include "ownmath.h"
#include <iostream>

int main() {
    double angle = 30.0; // Example angle in degrees

    std::cout << "Sum: " << sum(3, 4) << '\n';
    std::cout << "Subtraction: " << sub(4.5, 6) << '\n';
    std::cout << "Multiplication: " << mul(1, 3) << '\n';
    std::cout << "Division: " << divv(1, 3) << '\n'; 
    std::cout << "Modulus: " << mod(12, 5) << '\n';
    std::cout << "Power: " << power(2, 3) << '\n';
    std::cout << "Factorial: " << factorial(5) << '\n';
    std::cout << "Absolute value: " << abs(-10.56) << '\n';
    std::cout << "sin(" << angle << ") = " << sin(angle) << '\n';
    std::cout << "cos(" << angle << ") = " << cos(angle) << '\n';
    std::cout << "tan(" << angle << ") = " << tan(angle) << '\n';
    std::cout << "cot(" << angle << ") = " << ctg(angle) << '\n';

    return 0;
}
```
# CMake Instructions
Navigate to the build directory:
```
cd build
```

Run CMake to configure the project:
```
cmake ..
```

Compile the project:
```
make
```
