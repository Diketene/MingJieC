#include <stdio.h>

int main(void){
    int n ;
    printf("输入n的值：");  scanf("%d", &n);
    int a[n];
    for(int i = 0; i < 10; i++){
        printf("a[%d]的地址是%p\n", i, a+i);
    }
    
    return 0;
}