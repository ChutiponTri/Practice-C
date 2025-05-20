#include <stdio.h>

int main() {
    int num = 10;
    int* ptr1 = &num;
    int** ptr2 = &ptr1; // Pointer to a pointer
    printf("num is : %d\n", num);
    printf("address is : %p\n\n", &num);
    printf("ptr1 is : %d\n", *ptr1);
    printf("address is : %p\n\n", &ptr1);
    printf("ptr2 is : %d\n", **ptr2);
    printf("address is : %p\n", &ptr2);
}