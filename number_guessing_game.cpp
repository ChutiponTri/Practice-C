#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MAX = 100;
    const int MIN = 1;
    int guesses = 0;
    int guess;
    int answer;

    srand(time(0));

    // Generate random number between MIN - MAX
    answer = rand() % MAX + MIN;

    do {
        printf("Enrter a guess : ");
        scanf("%d", &guess);
        if (guess > answer) {
            printf("Too High\n");
        }
        else if (guess < answer) {
            printf("Too Low\n");
        }
        else {
            printf("Correct\n");
        }
        guesses++;

    } while (guess != answer);

    printf("The answer is %d\n", answer);
    printf("You tried %d times\n", guesses);

    return 0;
}
