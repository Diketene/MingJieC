#include <stdio.h>

int main(void){
    FILE *fp;
    int i;
    double a[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    printf("从数组a得到的数组元素为{");

    for(i = 0; i < 10 ;i++){
        printf("%.2lf", a[i]);
        if(i < 9){
            putchar(',');
        }
    }

    printf("}.\n");

    if((fp = fopen("jkc.bin", "w")) == NULL){
        printf("无法打开此文件\n");
    }
    else{
        fwrite(a, sizeof(double), 10, fp);
        fclose(fp);
    }

    if((fp = fopen("jkc.bin", "r")) == NULL){
        printf("无法打开此文件\n");
    }
    else{
        fread(a, sizeof(double), 10 ,fp);

        printf("从读取结果中得到的数组a是{");

        for(i = 0; i < 10; i++){
            printf("%2.2f", a[i]);
            if(i < 9){
                putchar(',');
            }
        }

        printf("}.\n");

        fclose(fp);
    }

    return 0;
}