#include <stdio.h>

int main(void){
    FILE *fp;
    char str[128];
    char ch;
    int n = 0;

    printf("请输入要打开的文件名：");
    scanf("%s", str);

    if((fp = fopen(str, "r")) == NULL){
        printf("无法打开文件\n");
    }
    else{
        while((ch = fgetc(fp)) != EOF){
            n++;
        }
        fclose(fp);
    }

    printf("文件中的字符数为%d\n", n);

    return 0;
}