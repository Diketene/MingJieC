#include <stdio.h>

void rev_string(char s[]){
    int len = 0;
    int i;
    while (s[len]){
        len++;
    }
    for (i = 0; i < len/2; i++){
        char tmp = s[len-i-1];
        s[len-i-1] = s[i];
        s[i] = tmp;
    }
    for (i = 0; i < len; i++){
        putchar(s[i]);
    }
}

int main(void){
    char str[128];
    printf("请输入一个字符串：");  scanf("%s", str);
    printf("逆序输出：");   
    rev_string(str);

    putchar('\n');

    return 0;

}