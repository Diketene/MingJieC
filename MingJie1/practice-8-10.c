#include <stdio.h>

int main(void){

    int i, ch;
    int j;
    int cnt[10] = {0};

    while((ch = getchar()) != EOF){
        if (ch >= '0' && ch <= '9'){
            cnt[ch -'0']++;
        }
    }
    putchar('\n');
    for(i = 0; i < 10; i++){
        if(cnt[i] > 0){
            printf("%d:", i);
            for(j = 0; j < cnt[i]; j++){
                putchar('*');
            }
            putchar('\n');
        }
        else{
            printf("%d:",i);
            putchar('\n');
        }

    }

    return 0;
}
