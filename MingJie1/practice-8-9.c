#include <stdio.h>
int main(void){
    int ch;
    int line_count = 0;

    while((ch = getchar()) != EOF){
        if(ch == '\n'){
            line_count ++;
        }
    }

    printf("\n行数为%d\n", line_count);

    return 0;
}