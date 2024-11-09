#include <stdio.h>

void put_string(const char *s){
    while (*s){
        putchar(*s);
        s++;
    }
}

int main(void){
    char *p = "ABC";
    printf("你输入了：");
    put_string(p);
    putchar('\n');

    return 0;
}