#include <stdio.h>

int result = 10;

int main() {
    int* p;
    printf("Address of pointer : %x\n", &p);
    printf("Pointer Value : %u\n", p);
    printf("Size of poiner : %d byte\n", sizeof(p));

    printf("\n");

    int i = 5;
    printf("Address of i : %x\n", &i);
    printf("i Value : %u\n", i);
    printf("Size of i : %d byte\n", sizeof(i));

    printf("\n");

    p = &i;
    printf("p store address i : %x\n", p);
    printf("address p still same : %x\n", &p);

    printf("\n");

    result = *p;
    printf("Result Now is : %d\n", result);
    printf("p is now pointing at %d\n", *p);

    return 0;
}