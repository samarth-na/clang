#include <stdio.h>

// Metomacro to create a function-like macro
#define CREATE_FUNCLIKE_MACRO(name, ...) name(__VA_ARGS__)

// Function-like macro created by the metomacro
#define SQUARE(...) CREATE_FUNCLIKE_MACRO(SQUARE_IMPL, __VA_ARGS__)
#define LEST 10

// Implementation of the SQUARE macro
#define SQUARE_IMPL(x) ((x) * (x))

// Object-like macro
#define PI_VALUE 314159

int main() {
    int x = 5;
    int y = SQUARE(x); // Expands to ((x) * (x))
    printf("Square of %d is %d\n", x, y);

    double circle_area = ((double)PI_VALUE / 100000.0) * x * x;
    printf("Area of a circle with radius %d is %.2f\n", x, circle_area);

    return 0;
}
