#include <stdio.h>
#include <stdlib.h>  /*调小了得到末吉、凶、大凶的概率*/
#include <time.h>

int main(void){
    srand(time(NULL));
    int n = rand() % 7;
    switch(n){
        case 0:
        case 1:   puts("大吉"); break;
        case 2:
        case 3:   puts("中吉"); break;
        case 4:
        case 5:   puts("小吉"); break;
        case 6:
        case 7:   puts("吉");   break;
        case 8:   puts("末吉"); break;
        case 9:   puts("凶");   break;
        case 10:  puts("大凶"); break;
    }

    return 0;
}


 




