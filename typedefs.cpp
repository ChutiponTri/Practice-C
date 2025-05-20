#include <stdio.h>
#include <string.h>

// typedef gives datatype a nickname
typedef char user[20];

typedef struct {
    char name[25];
    char password[12];
    int id;
} Player;

int main() {
    user user1 = "Ton";

    Player player1 = { "Ton", "passwor", 123 };

    Player player2 = { "Bro", "Code", 5515 };

    printf("Name: %s\n", player1.name);       // string copy
    printf("Password: %s\n", player1.password);
    printf("ID: %d\n", player1.id);
    printf("Name: %s\n", player2.name);       // string copy
    printf("password: %s\n", player2.password);
    printf("ID: %d\n", player2.id);

    return 0;
}
