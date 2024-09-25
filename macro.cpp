#include <stdio.h>

// Define a macro to represent the value of PI
#define PI 3.14159

// Define a macro to compute the square of a number
#define SQUARE(x) (x * x)

// Define a macro to compute the maximum of two numbers
#define MAX(x, y) (x > y ? x : y)   // if (x > y -> return x) else (return y) 

int main() {
    // Using the PI macro
    double radius = 2.0;
    double area = PI * SQUARE(radius);
    printf("Area of the circle: %f\n", area);

    // Using the SQUARE macro
    int num = 5;
    printf("Square of %d: %d\n", num, SQUARE(num));

    // Using the MAX macro
    int a = 10, b = 20;
    printf("Maximum of %d and %d: %d\n", a, b, MAX(a, b));

    return 0;
}
