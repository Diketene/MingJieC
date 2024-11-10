#include <stdio.h>

void ary_set(int v[], int n, int val){
    int i;

    for( i = 0; i < n; i++){
        v[i] = val;
    }
}

int main(void){
    int a[2] = {0};

    ary_set(&a[2], 2, 99);

    for (int i = 0; i < 4; i++){
        printf("a[%d] = %d\n", i ,a[i]);
    }

    return 0;  /*会导致访问没有分配内存的地址，由于期望在0字节的地址写入4字节大小的数据，从而导致内存溢出*/
}