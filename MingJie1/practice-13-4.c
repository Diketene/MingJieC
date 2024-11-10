#include <stdio.h>
#define NUMBER 128

typedef struct{
    char name[NUMBER];
    double height;
    double weight;
}People;

int main(void){
    int numPeople;
    int i;
    FILE *fp;
    People pe;
    printf("请输入人数：");
    scanf("%d", &numPeople);

    if ((fp = fopen("hw.dat", "w")) == NULL){
        printf("打开文件失败\n");
    }
    else{
        printf("请分别输入这些人的姓名、身高和体重：\n");
        for(i = 0; i < numPeople; i++){
            printf("第%d个人的", i+1);
            printf("姓名：");   scanf("%s", pe.name);      fprintf(fp, "%-10s", pe.name);
            printf("身高：");   scanf("%lf", &pe.height);  fprintf(fp, "%5.1lf", pe.height);
            printf("体重：");   scanf("%lf", &pe.weight);  fprintf(fp, "%5.1lf\n", pe.weight);
        }
        fclose(fp);
    }

    return 0;
}
