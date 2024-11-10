#include <stdio.h>

int main(void){
    char a[][5] = {"PAUL", "X", "MAC"};
    char *p[] = {"PAUL", "X", "MAC"};

    printf("数组a的大小 = %u\n", sizeof(a));
    printf("数组a的元素个数 = %u\n",sizeof(a)/sizeof(*a));
    printf("数组p的大小 = %u\n", sizeof(p));
    printf("指针数组p的元素个数 = %u\n", sizeof(p)/sizeof(*p));

    return 0;
}