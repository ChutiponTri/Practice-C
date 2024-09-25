#include <stdio.h>
#include <string.h>

// Define a structure named 'Person' to represent information about a person
struct Student {
    char name[15];
    float gpa;
};

int main() {
    struct Student student1 = {"Spongebob", 3.0};
    struct Student student2 = {"Patrick", 2.5};
    struct Student student3 = {"Sandy", 4.0};
    struct Student student4 = {"Squidward", 2.0};

    struct Student student_array[] = {student1, student2, student3, student4};
    int size = sizeof(student_array) / sizeof(student_array[0]);

    for (int i=0; i<size; i++){
        printf("Name: %-12s\t", student_array[i].name);       // string copy
        printf("GPA: %.2f\n", student_array[i].gpa);
    }

    return 0;
}
