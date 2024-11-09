#include <stdio.h>

void null_string(char s[]){
    s[0] = '\0';
}

int main(void){
    char str[128];
    printf("请输入一个字符串：");  scanf("%s", str);
    
    null_string(str);

    printf("测试：\"%s\"\n",str);

    return 0;
}