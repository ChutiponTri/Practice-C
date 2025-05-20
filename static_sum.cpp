#include <stdio.h>

int sumA(int a) {
    static int sum = 0;
    return sum + a;
}

int sumB(int b) {
    int sum = 0;
    return sum + b;
}

int main() {
    int ans = sumA(1);
    ans += sumA(2);
    ans += sumB(3);
    ans += sumB(4);
    printf("%d", ans);
}