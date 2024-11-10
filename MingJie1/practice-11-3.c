#include <stdio.h>

char *str_copy(char *d, const char *s){
    char *t = d;

    while (*d++ = *s++){
        ;
    }

    return t;
}

int main(void){
    char p[4] = "ABC";
    char s[4] = {0};

    printf("p = \"%s\"\n", p);

    printf("复制的是：");  scanf("%s", s);

    printf("复制了：\"%s\"\n", str_copy(p, s));

    return 0;
}