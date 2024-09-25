#include <stdio.h>

int main(){
    int num = 10;
    int *p = &num;
    printf("Address of num %x\n", &num);
    printf("Value if num %d\n", num);
    printf("Address of Pointer %p\n", &p);
    printf("Value of Pointer %p\n", p);
    printf("Value of num pointed %d\n", *p);
}