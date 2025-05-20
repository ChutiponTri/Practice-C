#include <stdio.h>
#include <stdint.h>

int inc_func1(int x) {
    return x++;
}

void inc_func2(int* px) {
    (*px)++;
}
int inc_func3() {
    static int ax = 0;
    return ++ax;
}

int count = 0;
int main() {
    for (int i = 0;i < 10;i++) {
        count = inc_func1(count);
        inc_func2(&count);
        count = inc_func3();
        printf("%d\n", count);
    }
}