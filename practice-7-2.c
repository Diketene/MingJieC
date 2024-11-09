#include <stdio.h>
#include "bits.h"

void print_bits(unsigned x){
    int i;
    for (i = int_bits()-1; i >= 0; i--){
        putchar(((x >> i)&1U)?'1':'0');
    }
}

int main(void){
    unsigned a;
    unsigned b, c;
    unsigned bit;

    printf("请输入一个数：");  scanf("%d", &a);
    printf("请输入左移和右移的位数："); scanf("%d", &bit);

    b = a >> bit;
    c = a << bit;

    printf("\n%d的二进制表示是：");  print_bits(a);
    printf("\n%d左移%d位后为：",a, bit);  print_bits(b);
    printf("\n%d右移%d位后为：",a, bit);  print_bits(c);

    printf("\n%d是%d的%d倍",a, b, a/b);
    printf("\n%d是%d的%d倍\n",c, a, c/a);

    return 0;
    
}