int main() {
    return 0;
}

/**
 * gcc foo1.c bar1.c
/usr/bin/ld: /tmp/cc0RkZC0.o: in function `main':
bar1.c:(.text+0x0): multiple definition of `main'; /tmp/ccAchl7b.o:foo1.c:(.text+0x0): first defined here
collect2: error: ld returned 1 exit status
*/