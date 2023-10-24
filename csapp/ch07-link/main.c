int sum(int *a, int n);

int array[2] = {1, 2};

int main() {
    int val = sum(array, 2);
    return val;
}

/**
 * @brief 编译方式
 * gcc -Og -o prog main.c sum.c
 * 
 * 预处理 ： cpp main.c /tmp/main.i
 * 编译 ： 
 */