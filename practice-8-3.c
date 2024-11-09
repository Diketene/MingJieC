#include <stdio.h>
#define swap(type, a, b) {/*函数式宏中的\标识了一行的结束，如果缩进，必须在每行的结尾添加*/\
    typeof(a) tmp = (a);\
    (a) = (b);\
    (b) = tmp;\
}

int main(void){
    int a = 5;
    int b = 4;

    swap(int, a, b);

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}