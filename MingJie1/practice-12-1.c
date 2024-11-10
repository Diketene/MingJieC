#include <stdio.h>
#define NAME_LEN 64

struct student{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

int main(void){
    struct student takao = {"Takao", 173, 86.2};
    printf("takao.name的地址是%p\n", takao.name);
    printf("takao.height的地址是%p\n", &takao.height);
    printf("takao.weight的地址是%p\n", &takao.weight);
    printf("takao.schols的地址是%p\n", &takao.schols);

    printf("%u\n",sizeof(float));

    return 0;
}