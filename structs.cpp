#include <stdio.h>
#include <string.h>

// Define a structure named 'Person' to represent information about a person
struct Player {
    char name[15];
    float gpa;
};

int main() {
    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Spongebob");
    player1.gpa = 4.0;

    strcpy(player2.name, "Patrick");
    player2.gpa = 5.0;

    printf("Name: %s\n", player1.name);       // string copy
    printf("GPA: %f\n", player1.gpa);
    printf("Name: %s\n", player2.name);       // string copy
    printf("GPA: %f\n", player2.gpa);

    return 0;
}
