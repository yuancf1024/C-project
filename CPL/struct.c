#include <stdio.h>

// 采用结构定义坐标
struct point {
    int x;
    int y;
};

/*声明等价
struct {...} x, y, z;
int x, y, z;
*/

// 定义点 pt
struct point pt;

// 自动结构赋值初始化 maxpt
struct point maxpt = {320, 200};

// 定义矩形
struct rect {
    struct point pt1;
    struct point pt2;
};

// 声明屏幕结构
struct rect screen;

/* makepoint函数：通过x，y坐标构造一个点*/
struct point makepoint(int x, int y) {
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}

struct point middle;

int main() {
    printf("输出最大点坐标：\n");
    printf("%d, %d\n", maxpt.x, maxpt.y);

    printf("计算原点到点maxpt的距离：\n");
    // 伪代码
    double dist, sqrt(double);
    dist = sqrt((double) maxpt.x * maxpt.x + (double) maxpt.y * maxpt.y);
    printf("%f\n", dist);

    printf("makepoint函数的使用：\n");
    screen.pt1 = makepoint(0, 0);
    int XMAX = 1000, YMAX = 2000;
    screen.pt2 = makepoint(XMAX, YMAX);
    middle = makepoint((screen.pt1.x + screen.pt2.x) / 2, 
                        (screen.pt1.y + screen.pt2.y) / 2);
    printf("%d, %d\n", middle.x, middle.y);

    
    return 0;
}