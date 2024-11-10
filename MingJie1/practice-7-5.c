#include <stdio.h>
#include "bits.h"

void print_bits(unsigned x){
    int i;
    for (i = int_bits()-1; i >= 0; i--){
        putchar(((x >> i)&1U)?'1':'0');
    }
}

unsigned set_n(unsigned x, int pos, int n){
    int mask = 0;
    int i;
    for(i = pos; i <= pos+n-1; i++){
        mask += 1 << i;
    }
    if(x & mask){
        return x ^ mask;
    }
    else{
        return x;
    }
}

unsigned reset_n(unsigned x, int pos, int n){
    int mask = 0;
    int i;
    for(i = pos; i <= pos+n-1; i++){
        mask += 1 << i;
    }
    if(x & mask){
        return x;
    }
    else{
        return x ^ mask;
    }
}

unsigned inverse_n(unsigned x, int pos, int n){
    int mask = 0;
    int i;
    for(i = pos; i <= pos+n-1; i++){
        mask += 1 << i;
    }
    return x ^ mask;   
}

int main(void){
    int pos1, pos2, n;
    unsigned a;

    printf("请输入一个非负整数a：");  scanf("%d", &a);
    printf("请由小到大输入从第几位到第几位对a进行操作：\n");
    printf("开始的位数：");  scanf("%d", &pos1);
    printf("结束的位数：");  scanf("%d", &pos2);

    n = pos2 - pos1 + 1;

    printf("\n数a的二进制表示为：                      ");  print_bits(a);
    printf("\n进行设1操作后的数为%d，二进制表示为：  ", set_n(a, pos1, n));  print_bits(set_n(a, pos1, n));
    printf("\n进行设0操作后的数为%d，二进制表示为：  ", reset_n(a, pos1, n));  print_bits(reset_n(a, pos1, n));
    printf("\n进行反转操作后的数为%d，二进制表示为： ", inverse_n(a, pos1, n));  print_bits(inverse_n(a, pos1, n));

    putchar('\n');

    return 0;

}