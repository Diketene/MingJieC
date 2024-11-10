#include <stdio.h>

#define NUMBER 128

int main(void){
    char str[NUMBER];
    printf("请输入要打开的文件的名称：");  scanf("%s",str);

    FILE *fp;

    fp = fopen(str,"r");

    if(fp == NULL){
        printf("无法打开文件\n");
    }
    else{
        printf("成功打开了文件\n");
        fclose(fp);
    }

    return 0;
}