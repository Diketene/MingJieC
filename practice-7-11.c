#include <stdio.h>

int main(void){
    int i;
    float sum1 = 0.0;
    float sum2 = 0.0;
    float start = 0.0;
    float step = 0.01;

    for (i = 0; i <= 100; i++){
        sum1 += i/100.0;
        if (i > 0){
            start += step;
        }
        sum2 += start;
    }

    printf("原始float型递增的和是%f，int型转换为float型递增的和是%f\n", sum2, sum1);

    return 0;
}