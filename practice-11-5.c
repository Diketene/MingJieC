#include <stdio.h>

int str_chnum(const char *s){
    int count = 0;
    while (*s){
        if (*s == 'c'){
            count++;
        }
        s++;
    }

    return count;
}

int main(void){
    char str[5] = "cccD";
    printf("字符串\"%s\"中有%d个c.\n", str, str_chnum(str));

    return 0;
}