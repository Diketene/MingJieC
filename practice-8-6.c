#include <stdio.h>

int factorical(int n){
    int i;
    int mul = 1;
    for(i = 0; i < n; i++){
        mul *= (i + 1);
    }
    return mul;
}

int main(void){
    int n;
    printf("请输入一个数：");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorical(n));

    return 0;
}