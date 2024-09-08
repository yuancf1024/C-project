#include <stdio.h>

/**
 * 复制输入到输出 v1
 **/

int main() {
    int c;

    //c = getchar();
    while ((c = getchar()) != EOF) {
        putchar(c);
        //c = getchar();
        if (c == 4) {
            // 打印EOF
            //putchar(EOF);
        }
    }        
    printf("EOF=%d\n", EOF);    
    return 0;
}