#include <stdio.h>

main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int* ptr = arr; // Points to the first element of 'arr'
    printf("%d", *(ptr + 2)); // Prints the value of the third element of 'arr' (i.e., 3)
}