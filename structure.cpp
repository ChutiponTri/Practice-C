#include <stdio.h>
#include <string.h>

// Define a structure named 'Person' to represent information about a person
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a variable 'person1' of type 'struct Person'
    struct Person person1;

    // Assign values to the members of 'person1'
    strcpy(person1.name, "YO");
    person1.age = 22;
    person1.height = 178.0;

    // Access and print the values of the members of 'person1'
    printf("Name: %s\n", person1.name); // string copy
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    return 0;
}
