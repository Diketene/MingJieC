#include <stdio.h>

void del_digit(char *str) {
    char *src = str; // 源指针
    char *dst = str; // 目标指针

    while (*src) {
        if (*src >= '0' && *src <= '9') {
            // 跳过数字
            src++;
        } else {
            // 将非数字字符复制到目标位置
            *dst = *src;
            dst++;
            src++;
        }
    }
    *dst = '\0'; // 添加字符串结束符
}

int main(void) {
    char s[] = "A11B2C";
    del_digit(s);
    printf("删去数字的字符串是: %s\n", s);

    return 0;
}