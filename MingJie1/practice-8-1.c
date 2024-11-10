#include <stdio.h>
#define DIFF(x, y) ((x) - (y))

int main(void){
    double x, y;
    printf("请输入x和y的值：\n");
    printf("x = ");  scanf("%lf", &x);
    printf("y = ");  scanf("%lf", &y);

    printf("x与y的差值是%lf", DIFF(x, y));

    return 0;
}