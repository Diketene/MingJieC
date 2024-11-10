#include <stdio.h>
#include "bits.h"

void print_bits(unsigned x){
    int i;
    for (i = int_bits()-1; i >= 0; i--){
        putchar(((x >> i)&1U)?'1':'0');
    }
}

unsigned set(unsigned x, int pos){
    int mask = 1 << pos;
    if (x & mask){
        return x;
    }
    else{
        return x ^ mask;
    }
    
}

unsigned reset(unsigned x, int pos){
    int mask = 1 << pos;
   if (x & mask){
       return x ^ mask;
   } 
   else{
       return x;
   }
}

unsigned inverse(unsigned x, int pos){
    int mask = 1 << pos;
    return x ^ mask;
}

int main(void){
    unsigned a;
    int pos;
    printf("请输入一个非负整数a的值：");  scanf("%d", &a);
    printf("请输入要进行操作的位数：");  scanf("%d", &pos);

    printf("\n                                   数a的二进制表达是：");  print_bits(a);

    printf("\n对数a的第%d位为进行设1操作后的值为%d，其二进制表达为：", pos, set(a, pos));
    print_bits(set(a,pos));

    printf("\n对数a的第%d位为进行设0操作后的值为%d，其二进制表达为：", pos, reset(a, pos));
    print_bits(reset(a, pos));

    printf("\n对数a的第%d位为进行取反操作后的值为%d，其二进制表达为：", pos, inverse(a, pos));  
    print_bits(inverse(a, pos));

    putchar('\n');

    return 0;
}