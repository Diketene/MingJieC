#include <stdio.h>

int str_char(const char s[]){
    int len = 0;
    int i;
    while (s[len]){
        len++;
    }
    for(i = 0; i < len; i++){
        if (s[i] == 'c'){
            return i;
        }
    }
    return -1;
}
int main(void){
    char str[128];
    
    printf("请输入一个字符串：");  scanf("%s", str);
    printf("测试：%d\n", str_char(str));

    return 0;

}