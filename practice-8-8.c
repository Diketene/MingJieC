#include <stdio.h>

int gcd(int x, int y){
    if(x > y){
        if (y == 0){
            return x;
        }
        else{
            return gcd(y, x%y);
        }
    }
    else{
        if (x == 0){
            return y;
        }
        else{
            return gcd(x, y%x);
        }
    }
}

int main(void){
    int a, b;
    printf("请输入两个非负整数数的值：\n");
    printf("整数a：");  scanf("%d", &a);
    printf("整数b：");  scanf("%d", &b);

    printf("%d与%d的最大公约数是%d\n", a, b, gcd(a, b));

    return 0;
}