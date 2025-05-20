#include <stdio.h>

int main() {
    char c = 'C';
    int num = 1;
    float real = 3.14;
    long long big_int = 989898989ll;
    long long* p = &big_int;

    printf("Value of c: %c, Address: %p\n", c, &c);
    printf("Value of num: %d, Address: %p\n", num, &num);
    printf("Value of float: %f, Address: %p\n", real, (void*)&real);
    printf("Value of big int: %lld, Address: %p, %p\n", big_int, &big_int, p);
}