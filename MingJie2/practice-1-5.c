#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));

    int a, b;
    int diff;

    do{
        a = rand()%500;
        b = rand()%500;

    }while(a < b);

    diff = a - b;

    int max_stage = diff/10; 

    int ans = rand()%(diff + 1) +b;

    /*之后便是猜数游戏的流程了，很平凡，不再写了，1-6、1-7、1-8都不再从头写了*/

    return 0;
}