#include <stdio.h>
#include <string.h>
#define N 6
#define CHR 128

void get_strary(char s[][CHR],int n){
    char chr;
    int j = 0;
    for (int i = 0; i < n; i++){
        while (((chr = getchar()) != '\n') && (chr != EOF)){
            s[i][j] = chr;
            j++;
        }
        s[i][j] = '\0';
    j = 0;
    }
}

void put_strary(const char s[][CHR], int n){
    int i;
    for (i = 0; i < n; i++){
        if (strcmp(s[i], "$$$$$") == 0){
            break;
        }
        else{
            printf("s[%d] = \"%s\"\n", i, s[i]);
        }
    }
}

int main(void){
    char str[N][CHR] = {0};
    get_strary(str, N);
    putchar('\n');
    put_strary(str, N);

    return 0;
}