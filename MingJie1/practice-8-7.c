#include <stdio.h>

int combination(int n, int r){
    if(r == 0 || r == n){
        return 1;
    }
    else if(r == 1){
        return n;
    }
    else{
        return combination(n-1, r-1) + combination(n-1, r);
    }
}

int main(void){
    int a,b;
    printf("请输入要计算的组合数(n >= r)：\n");
    printf(" n = ");  scanf("%d", &a);
    printf(" r = ");  scanf("%d", &b);

    printf("组合数C_{%d}^{%d}的值是%d\n", a, b, combination(a, b));

    return 0;
}