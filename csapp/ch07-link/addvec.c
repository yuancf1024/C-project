int addcnt = 0;

void addvec(int *x, int *y,
            int *z, int n) {
    int i;

    addcnt++;

    for (i = 0; i < n; i++) {
        z[i] = x[i] + y[i];
    }
}

/**
 * 创建静态库
 * gcc -c addvec.c multvec.c
 * ar rcs libvector.a addvec.o multvec.o
*/