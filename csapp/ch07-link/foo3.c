#include <stdio.h>

void f(void);

int x = 15213;

int main() {
    f();
    printf("x = %d\n", x);
    return 0;
}

/**
 * gcc -o foobar3 foo3.c bar3.c
*/