#include <stdio.h>
#include <math.h>

int main(void){
    double a;
    double S;
    printf("请输入所计算正方形的边长：");  scanf("%lf", &a);
    S = pow(a , 2.0);
    printf("正方形的面积是%lf\n", S);

    return 0;
}