#include <stdio.h>

void put_stringn(const char s[], int n){
    int i;
    int j = 0;
    for(i = 0; i < n; i++){
        while(s[j]){
            putchar(s[j++]);
        }
        j = 0;
    }
}

int main(void){
    int a;
    char str[128];
    printf("请输入一个字符串：");  scanf("%s", str);
    printf("请输入要重复的次数：");  scanf("%d", &a);

    put_stringn(str, a);
    putchar('\n');

    return 0;
}