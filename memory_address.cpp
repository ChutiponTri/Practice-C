#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Memory = An array of bytes within RAM (street)
    // Memory Block = A single unit (byte) within memory, used to hold some value (person)
    // Memory Address = The address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d Bytes\n", sizeof(a));
    printf("%d Bytes\n", sizeof(b));
    printf("%d Bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    return 0;
}
