#include <stdio.h>

int main(void){
    char str[] = "ABC";
    str[0] = '\0';

    printf("str字符串现在是%s\n", str);

    return 0;
}