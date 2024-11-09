#include <stdio.h>

char *str_chr(const char *s){
    while (*s){
        if (*s == 'c'){
            return (char *)s;
        }
        else {
            s++;
        }
    }
    return NULL;
}

int main(void){
    char a[128] = {0};
    printf("请输入一个字符串：");  scanf("%s", a);
    printf("str_chr函数检测出字符串\"%s\"中第一个c的地址是%p\n", a, str_chr(a));

    return 0;
}