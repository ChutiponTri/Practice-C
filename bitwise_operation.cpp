#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // BITWISE OPERATORS = special operators used in bit level programming
    //                     (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift

    int x = 6;          // 0000 0110
    int y = 12;         // 0000 1100
    int z = 0;          // 0000 0000

    z = x & y;
    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);

    z = x << 2;
    printf("LEFT = %d\n", z);

    z = x >> 1;
    printf("RIGHT = %d\n", z);

    return 0;
}
