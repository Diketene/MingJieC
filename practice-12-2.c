#include <stdio.h>
#define NAME_LEN 64

typedef struct student{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
}Student;

void hiroko(Student *ptr){
    if(ptr -> height < 180){
        ptr -> height = 180;
    }
    if(ptr -> weight > 80){
        ptr -> weight = 80;
    }
}

int main(void){
    Student value;
    printf("请分别输入一个学生的姓名、身高、体重、奖学金：\n");
    printf("姓名：");   scanf("%s", value.name);
    printf("身高：");   scanf("%d", &value.height);
    printf("体重：");   scanf("%f", &value.weight);
    printf("奖学金："); scanf("%d", &value.schols);

    hiroko(&value);

    printf("hiroko的魔法将%s的身高、体重分别变成了%d, %f\n", value.name, value.height, value.weight);

    return 0;
}