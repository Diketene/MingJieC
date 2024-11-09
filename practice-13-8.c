#include <stdio.h>

int main(void){
    char str1[128];
    char str2[128];
    char ch;
    FILE *fpr;
    FILE *fpw;

    printf("请输入要复制的文件名：");    scanf("%s", str1);
    printf("请输入要复制到的文件名：");  scanf("%s", str2);

    if ((fpr = fopen(str1, "r")) == NULL){
        printf("无法打开文件%s\n", str1);
    }
    else{
        if((fpw = fopen(str2, "w")) == NULL){
            printf("无法打开文件%s\n", str2);
        }
        else{
            while((ch = fgetc(fpr)) != EOF){
                putchar(ch);
                fputc(ch, fpw);
            }
            fclose(fpw);
        }
        fclose(fpr);
    }

    return 0;
}