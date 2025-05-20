#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printAge(int* pAge) {
    printf("You are %d years old\n", *pAge);
}

int main() {
    // Pointer = a variable-like reference that holds a memory address to another variable
    //       * = indirection operator (value at address)

    int age = 21;
    int* pAge = NULL;
    pAge = &age;

    printf("Address of age: %p\n", &age);
    printf("Value of age: %d\n", age);
    printf("Size of age: %d bytes\n", sizeof(age));

    printf("Address of age: %p\n", pAge);
    printf("Value of age: %d\n", *pAge);        // Dereference
    printf("Size of pAge: %d bytes\n", sizeof(pAge));

    printAge(pAge);

    return 0;
}
