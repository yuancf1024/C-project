#include <stdio.h>
void f(void);

int x;

int main() {
    x = 15213;
    f();
    printf("x = %d\n", x);
    return 0;
}

/**
 * gcc -o foobar4 foo4.c bar4.c
*/