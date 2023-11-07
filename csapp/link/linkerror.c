void foo(void);

int main() {
    foo();
    return 0;
}
/**
 * gcc -Wall -Og -o linkerror linkerror.c
 * 
/usr/bin/ld: /tmp/ccA5RqNj.o: in function `main':
linkerror.c:(.text+0x9): undefined reference to `foo'
collect2: error: ld returned 1 exit status
*/