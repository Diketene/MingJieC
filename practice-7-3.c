#include <stdio.h>

unsigned rrotate(unsigned x, int n){
    return x >>= n;
}

unsigned lrotate(unsigned x, int n){
    return x <<= n;
}

int main(void){
    unsigned a;
    int n;
    printf("请输入一个非负整数a的值："); scanf("%d", &a);

    do{
        printf("请输入左移和右移的位数：");  scanf("%d", &n);

    }while(n < 0);

    printf("\n数a右移%d位后的值为%d", n, rrotate(a, n));
    printf("\n数a左移%d位后的值为%d\n", n, lrotate(a, n));

    return 0;
}