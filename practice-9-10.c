#include <stdio.h>

void del_digit(char s[]){
    int len = 0;
    while (s[len]){
        len++;
    }
    for (int i = 0; i < len; i++){
        if (s[i] >= '0' && s[i] <= '9'){
            for (int j = i; j <len; j++){
                s[j] = s[j + 1];
            }
        }
    }
}

int main(void){
    int len = 0;
    char str[128];
    printf("请输入一个字符串：");  scanf("%s",str);
    del_digit(str);
    printf("删除数字后的字符串是%s\n",str);

    return 0;
}