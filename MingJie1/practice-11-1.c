#include <stdio.h>

int main(void){
    char *p = "456" + 1;

    printf("p[0] = %c\n", p[0]);  /*相当于将指针p指向的位置后移了一位*/

    return 0;
}