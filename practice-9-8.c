#include <stdio.h>

void put_stringr(const char s[]){
    int len = 0;
    int i;
    while (s[len]){
        len++;
    }
    for (i = len -1; i >= 0; i--){
        putchar(s[i]);
    }
}

int main(void){
    char str[128];
    printf("请输入一个字符串：");  scanf("%s", str);

    put_stringr(str);
    putchar('\n');

    return 0;
}