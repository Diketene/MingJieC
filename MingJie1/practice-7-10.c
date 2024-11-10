#include <stdio.h>

int main(void){
    int i;
    float x;
    float start = 0.0;
    float step = 0.01;

    for (i = 0; i <= 100; i++){
        x = i /100.0;
        if (i > 0){
            start += step;
        } 
        printf("x = %f    x = %f\n", x, start);
    }

    return 0;
}