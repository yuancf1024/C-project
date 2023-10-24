int sum(int *a, int n);

int array[2] = {1, 2};

int main() {
    int val = sum(array, 2);
    return val;
}

/**
 * @brief 编译方式
 * 使用GNU编译系统构造示例程序
 * gcc -Og -o prog main.c sum.c
 * 
 * C的源程序main.c 翻译成一个ASCII码的中间文件main.i
 * 预处理 ： cpp main.c /tmp/main.i
 * 
 * 驱动程序运行C编译器cc1，将main.i翻译成一个ASCII汇编语言文件main.s
 * 编译 ： cc /tmp/main.i -Og -o /tmp/main.s
/usr/bin/ld: /tmp/ccfij5l3.o: in function `main':
main.c:(.text+0x15): undefined reference to `sum'
 * 
 * 汇编：驱动程序汇编器as，将main.s翻译成一个可重定位目标文件main.o
 * as -o /tmp/main.o /tmp/main.s
 * 
 * 链接：链接器ld 将main.o和sum.o及必要系统目标文件组合起来，创建可执行目标文件
 * ld -o prog /tmp/main.o /tmp/sum.o
 */