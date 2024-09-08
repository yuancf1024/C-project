#include <stdio.h>

/*  当 fahr=0，20，。。。，200时，分别
    打印华氏温度与摄氏温度对照表
*/

#define LOWER 0     // 转换表的最小值下限
#define UPPER 300   // 转换表的上限
#define STEP 20     // 步长

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /*温度表的下限*/
    upper = 300; /*温度表的上限*/
    step = 20; /*步长*/

    fahr = lower;

    /*打印标题*/
    char f[] = "fahr";
    char c[] = "celsius";
    printf("%3s\t%6s", f, c);

    printf("\n");

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }

    // 摄氏温度转华氏度
    // 打印标题
    printf("%6s\t%3s\n", c, f);

    for (celsius = UPPER; celsius >= LOWER; celsius-=STEP) {
        printf("%6.1f\t%3.0f\n", celsius, (celsius*(9.0/5.0))+32.0);
    }
    return 0;
}