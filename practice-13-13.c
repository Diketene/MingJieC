#include <stdio.h>

int main(void){
    FILE *fpr;
    FILE *fpw;
    char str1[128];
    char str2[128];
    char buffer[1024];
    size_t bytesRead;

    printf("输入要复制的文件：");  scanf("%s", str1);
    printf("请输入要复制到的文件：");  scanf("%s", str2);

    if ((fpr = fopen(str1, "rb")) == NULL){
        printf("无法打开文件%s\n", str1);
        return 1;
    }
    else{
        if ((fpw = fopen(str2, "wb") ) == NULL){
            printf("无法打开文件%s\n", str2);
            return 1;
        }
        else{
            while((bytesRead = fread(buffer, 1, sizeof(buffer), fpr) )> 0){
                fwrite(buffer, 1, sizeof(buffer), fpw);
                fwrite(buffer, 1, sizeof(buffer), stdout);
            }
            fclose(fpw);
        }
        fclose(fpr);
    }


    return 3;

}