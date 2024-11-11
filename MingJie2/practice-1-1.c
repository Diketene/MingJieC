#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int n = rand() % 7;
    switch(n){
        case 0: puts("大吉"); break;
        case 1: puts("中吉"); break;
        case 2: puts("小吉"); break;
        case 3: puts("吉");   break;
        case 4: puts("末吉"); break;
        case 5: puts("凶");   break;
        case 6: puts("大凶"); break;
    }

    return 0;
}