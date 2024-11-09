#include <stdio.h>

void adjust_point(int *n){
    if (*n > 100){
        *n = 100;
    }
    else if(*n < 0){
        *n = 0;
    }
}

int main(void){
    int a;
    printf("请输入一个整数：");  scanf("%d", &a);

    adjust_point(&a);

    printf("调整之后的值是%d.\n", a);

    return 0;
}