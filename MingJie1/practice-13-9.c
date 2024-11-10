#include <stdio.h>
#include <ctype.h>

int main(void){
    char str1[128];
    char str2[128];
    char ch;
    FILE *fpr;
    FILE *fpw;

    printf("请输入要复制的文件：");  scanf("%s", str1);
    printf("请输入要复制到的文件：");scanf("%s", str2);

    if((fpr = fopen(str1, "r")) == NULL){
        printf("无法打开文件%s\n", str1);
    }
    else{
        if((fpw = fopen(str2, "w")) == NULL){
            printf("无法打开文件%s\n", str2);
        }
        else{
            while((ch = fgetc(fpr))!= EOF){
                if(ch >= 'a' && ch <= 'z'){
                    fputc(toupper(ch), fpw);
                }
                else if(ch >= 'A' && ch <= 'Z'){
                    fputc(tolower(ch), fpw);
                }
                else{
                    fputc(ch, fpw);
                }
            }
            fclose(fpw);
        }
        fclose(fpr);
    }

    return 0;
}/*将13-9以及13-10的要求一并做完了，不再写13-10了*/