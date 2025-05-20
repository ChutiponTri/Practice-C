#include <stdio.h>

// Define an enumeration named 'Day' with constants representing days of the week
enum Day {
    Monday = 1,
    Tuesday = 2,
    Wednesday = 3,
    Thursday = 4,
    Friday = 5,
    Saturday = 6,
    Sunday = 7
};

// enum = a user defined type of named integer idenfifiers 
//        helps to make a program more readable

int main() {
    // Declare a variable of type 'Day' and assign it a value
    enum Day today = Wednesday;

    // Use a switch statement to perform actions based on the value of 'today'
    switch (today) {
    case Monday:
        printf("Today is Monday.\n");
        break;
    case Tuesday:
        printf("Today is Tuesday.\n");
        break;
    case Wednesday:
        printf("Today is Wednesday.\n");
        break;
    case Thursday:
        printf("Today is Thursday.\n");
        break;
    case Friday:
        printf("Today is Friday.\n");
        break;
    case Saturday:
        printf("Today is Saturday.\n");
        break;
    case Sunday:
        printf("Today is Sunday.\n");
        break;
    default:
        printf("Invalid day.\n");
        break;
    }

    return 0;
}
