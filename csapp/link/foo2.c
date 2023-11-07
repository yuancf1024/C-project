int x = 15213;

int main() {
    return 0;
}

/**
 * gcc foo2.c bar2.c
/usr/bin/ld: /tmp/ccZgAL1v.o:(.data+0x0): multiple definition of `x'; /tmp/ccVTtN2R.o:(.data+0x0): first defined here
/usr/bin/ld: /tmp/ccZgAL1v.o: in function `main':
bar2.c:(.text+0x0): multiple definition of `main'; /tmp/ccVTtN2R.o:foo2.c:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status
*/