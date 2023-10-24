extern int buf[]; // 引用外部定义的变量

int *bufp0 = &buf[0]; // 已初始化全局变量
int *bufp1; // 未初始化全局变量

void swap() {
    int temp; // 未初始化局部变量

    bufp1 = &buf[1];
    temp = *bufp0;
    *bufp0 = *bufp1;
    *bufp1 = temp;
}