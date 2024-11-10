#include <stdio.h>
#define NUMBER 128

int main(void){
    char str[NUMBER];
    printf("请输入要删除文件的名称：");  scanf("%s", str);

    FILE *fp = fopen(str, "w");

    if(fp == NULL){
        printf("未找到对应的文件\n");
    }
    else{
        printf("已删除文件中的内容\n");
    }

    return 0;
}