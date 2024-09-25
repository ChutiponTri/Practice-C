#include <stdio.h>

int main(){
    // Must provide maximum size of inner array
    double prices[][3] = { 
        {5.0, 10.0, 15.0}, 
        {25.0, 20.0} 
    };

    int numbers[2][3];

    numbers[0][0] = 4;
    numbers[0][1] = 5;
    numbers[0][2] = 6;
    numbers[1][0] = 7;
    numbers[1][1] = 9;
    numbers[1][2] = 81;

    int outer_size = sizeof(numbers) / sizeof(numbers[0]);
    int inner_size = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    for (int i=0; i<outer_size; i++){
        for (int j=0; j<inner_size; j++){
            printf("%d\n", numbers[i][j]);
        }
    }
}