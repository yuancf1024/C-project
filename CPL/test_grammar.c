#include <stdio.h>

int main() {
    int b = 5;
    float x = 2.5, z = 1.4;
    x = z*b++, b = b*x, b++;
    printf("x = %f, z = %f, b = %d\n", x, z, b);
    return 0;
}