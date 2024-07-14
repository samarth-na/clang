#include <stdio.h>

// Metomacro to create a function-like macro
#define CREATE_FUNCLIKE_MACRO(name, ...) name(__VA_ARGS__)

// Function-like macro created by the metomacro
#define SQUARE(...) CREATE_FUNCLIKE_MACRO(SQUARE_IMPL, __VA_ARGS__)
#define LEST 10

// Implementation of the SQUARE macro
#define SQUARE_IMPL(x) ((x) * (x))

#define CUBE_IMPL(x) ((x) * (x) * (x))
// Object-like macro
#define PI_VALUE 314159

int main() {

    double x = 5;
    int y = SQUARE(x); // Expands to ((x) * (x))
    printf("Square of %f is %d\n", x, y);

    x = 10;
    y = SQUARE(x); // Expands to ((x) * (x))
    printf("Square of %f is %d\n", x, y);

    x = 20;
    y = CUBE_IMPL(x); // Expands to ((x) * (x) * (x)) aka x^3
    printf("Cube of %f is %d\n", x, y);
    printf("Square of %f is %d\n", x, y);

    double circle_area = ((double)PI_VALUE / 100000.0) * x * x;
    printf("Area of a circle with radius %f is %.2f\n", x, circle_area);

    return 0;
}
