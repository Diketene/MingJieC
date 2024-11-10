#include <stdio.h>

void swap(int *n1, int *n2){
    int tmp = *n2;
    *n2 = *n1;
    *n1 = tmp;
}

void sort3(int *n1, int *n2, int *n3){
    if (*n1 > *n2){
        swap(n1 , n2);
    }
    if (*n2 > *n3){
        swap(n2 , n3);
    }
}

int main(void){
    int a, b, c;
    printf("请输入三个整数：\n"); 
    
    printf("整数A：");  scanf("%d", &a);
    printf("整数B：");  scanf("%d", &b);
    printf("整数C：");  scanf("%d", &c);

    sort3(&a, &b, &c);

    printf("这三个数升序排序为%d, %d, %d.\n",a, b, c);

    return 0;
}