#include <stdio.h>

int main(){
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    int arr_size = sizeof(prices) / sizeof(prices[0]);
    printf("Size of array is %d\n", arr_size);

    for (int i=0; i<arr_size; i++){
        printf("%.2lf\n", prices[i]);
    }
}