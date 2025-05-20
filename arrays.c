#include <stdio.h>

int main() {
    double prices[] = { 5.0, 10.0, 15.0, 25.0, 20.0 };
    double some[5];

    some[0] = 5.0;
    some[1] = 10.0;
    some[2] = 15.0;
    some[3] = 25.0;
    some[4] = 20.0;

    printf("%.2lf\n", prices[0]);
    printf("%.2lf\n", prices[1]);
    printf("%.2lf\n", some[1]);
}