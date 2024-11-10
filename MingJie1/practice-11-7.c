#include <stdio.h>

char *str_toupper(char *s){
    if (s == NULL){
        return NULL;
    }
    char *d = s;
    while(*s){
        if (*s >= 'a' && *s <= 'z'){
            *s = (unsigned char)*s - (unsigned char)'a' + (unsigned char)'A';
        }
        s++;
    }
    return d;
}

char *str_tolower(char *s){
    if (s == NULL){
        return NULL;
    }

    char *d = s;
    while(*s){
        if (*s >= 'A' && *s <= 'Z'){
            *s = (unsigned char)*s - (unsigned char)'A' + (unsigned char)'a';
        }
        s++;
    }

    return d;
}

int main(void){
    char str1[] = "abCAdcE";
    char str2[] = "abCAdcE";

    printf("大写转换后为%s\n", str_toupper(str1));
    printf("小写转换后为%s\n", str_tolower(str2));

    return 0;
}