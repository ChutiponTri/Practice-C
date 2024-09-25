#include <stdio.h>
#include <string.h>

union abc {
    char str[3]; // Increase the size to hold "Yo" including null terminator
    int i;
} abc;

int main() {
    printf("Size of abc is %lu\n", sizeof(abc));

    // Assign "Yo" to str member
    strcpy(abc.str, "Yo");

    // Print "Yo" from str member and i from i member
    printf("%s %d\n", abc.str, abc.i);

    return 0;
}
