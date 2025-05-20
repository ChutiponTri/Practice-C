#include <stdio.h>

// Function definition for swap function
int swap(int* a, int* b) {
    int temp;
    temp = *a;  // Store the value pointed to by a in temp
    *a = *b;    // Assign the value pointed to by b to the memory location pointed to by a
    *b = temp;  // Assign the value stored in temp to the memory location pointed to by b
    return *a != *b;  // Return 1 if the values at a and b are different after swapping, 0 otherwise
}

int main() {
    int x = 10, y = 20;  // Initialize two integer variables x and y with values 10 and 20, respectively
    printf("Before swapping: x = %d, y = %d\n", x, y);  // Print the values of x and y before swapping
    printf("Adress of : x = %x, y = %x\n", &x, &y);

    // Call the swap function passing the addresses of x and y
    int a;
    a = swap(&x, &y);
    printf("%d\n", a);

    printf("After swapping: x = %d, y = %d\n", x, y);  // Print the values of x and y after swapping
    printf("Adress of : x = %x, y = %x\n", &x, &y);

    return 0;  // Indicate successful completion of the program
}
