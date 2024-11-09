#include <stdio.h>

int main(void){
    float a ;
    double b;
    long double c;

    printf("请输入a、b、c的值：\n");  
    printf("a:");  scanf("%f", &a);
    printf("b:");  scanf("%lf", &b);
    printf("c:");  scanf("%Lf", &c);

    printf("a = %f\n", a);
    printf("b = %lf\n", b);
    printf("c = %Lf\n", c);

    return 0;
}