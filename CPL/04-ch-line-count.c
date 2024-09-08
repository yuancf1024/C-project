#include <stdio.h>

int main() {
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF) {
        ++nl;
    }
    printf("");
    return 0;
}