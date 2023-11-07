#include <stdio.h>
void f(void);

int y = 15212;
int x = 15213;

int main() {
    f();
    printf("x = 0x%x y = 0x%x \n",
            x, y);
    return 0;
}

/**
 * gcc -Wall -Og -o foobar5 foo5.c bar5.c
*/