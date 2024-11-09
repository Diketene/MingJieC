#include <stdio.h>

int str_chnum(const char s[]){
    int len = 0;
    int i;
    int c = 0;
    while (s[len]){
        len++;
    }
    for (i = 0; i < len; i++){
        if (s[i] == 'c'){
            c++;
        }
    }
    return c;

}

int main(void){
    char str[128];

    printf("请输入一个字符串：");
    scanf("%s", str);

    printf("字符串中有%d个c\n", str_chnum(str));

    return 0;
}