#include <stdio.h>
#include "vector.h"

int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2];

int main() {
    addvec(x, y, z, 2);
    printf("z = [%d %d]\n", z[0], z[1]);
    return 0;
}

/**
 * 静态链接
 * 编译方式1:
 * gcc -c main2.c
 * gcc -static -o prog2c main2.o ./libvector.a
 * 
 * 编译方式2:
 * gcc -c main2.c
 * gcc -static -o prog2c main2.o -L. -lvector
 * 
 * 错误编译方式：
 * gcc -static ./libvector.a main2.c
/usr/bin/ld: /tmp/ccz2HvvT.o: in function `main':
main2.c:(.text+0x2c): undefined reference to `addvec'
collect2: error: ld returned 1 exit status
 * 
 * 动态链接
 * 编译
 * gcc -shared -fpic -o libvector.so addvec.c multvec.c
 * 链接
 * gcc -o prog21 main2.c ./libvector.so
*/