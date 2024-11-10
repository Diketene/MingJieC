#include <stdio.h>
#define N 2

void rev_string(char s[][128], int n){
    for(int i = 0; i < n; i++){
        int len = 0;
        while (s[i][len]){
            len++;
        }
        for(int j = 0; j < len/2; j++){
            char tmp = s[i][len -1 -j];
            s[i][len -1 -j] = s[i][j];
            s[i][j] = tmp;
        }
    }
}

int main(void){
    char str[N][128];
    printf("请输入字符串：\n");

    for(int i = 0; i < N; i++){
        printf("s[%d] = ",i);
        scanf("%s", str[i]);
    }

    rev_string(str, N);
    printf("对每个字符串进行逆序输出：\n");

    for(int i = 0; i < N; i++){
        printf("s[%d] = \"%s\"\n", i, str[i]);
    }

    return 0;
}