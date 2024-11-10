#include <stdio.h>

int main(void){
    char str[128];
    char ch;
    int n = 0;
    FILE *fp;
    printf("请输入文件名：");  scanf("%s", str);

    if((fp = fopen(str, "r")) == NULL){
        printf("打开文件失败\n");
    }
    else{
        while((ch = fgetc(fp))!= EOF){
            if(ch == '\n'){
                n++;
            }
        }

        fclose(fp);
    }

    printf("文件一共有%d行\n", n+1);

    return 0;
}