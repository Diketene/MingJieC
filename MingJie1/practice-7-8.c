#include <stdio.h>

int main(void){
    float a;
    double b;
    long double c;

    printf("float型浮点数a的长度是%d\n",sizeof(a));
    printf("double型浮点数b的长度是%d\n",sizeof(b));
    printf("long double型浮点数的长度是%d\n", sizeof(c));

    return 0; 
}