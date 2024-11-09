#include <stdio.h>
#define NUMBER 5

void bsort(int a[], int n){
    int i,j;
    for(i = 1; i < n-1 ; i++){
        for(j = 0; j < n-i ; j++){
            if (a[j] > a[j+1]){
                int tmp;
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

int main(void){
    int i;
    int a[NUMBER];
    printf("请输入五个学生的身高：");

    for(i = 0; i < NUMBER; i++){
        printf("学生%d：\n", i+1);  scanf("%d", &a[i]);
    }

    bsort(a, NUMBER);

    for(i = 0; i < NUMBER; i++){
        printf("%d号：%d\n", i + 1, a[i]);  
    }

    return 0;
}