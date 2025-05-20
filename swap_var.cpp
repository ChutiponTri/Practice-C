#include <stdio.h>
#include <string.h>

int main() {
    // Example 1
    char x = 'x';
    char y = 'y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x is %c\ny is %c\n", x, y);

    // Example 2
    char water[15] = "water";
    char soda[15] = "soda";
    char tempee[15];

    strcpy(tempee, water);
    strcpy(water, soda);
    strcpy(soda, tempee);

    printf("water is %s\nsoda is %s\n", water, soda);
}
