#include <stdio.h>
#include <string.h>

#define NUMBER 128    
#define NAME_LEN 64

typedef struct{
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void swap_Student(Student *x, Student *y){
    Student tmp = *x;
    *x = *y;
    *y = tmp;
}

void sort_by_height(Student a[], int n){
    int i, j;
    for (i = 0; i < n -1; i++){
        for(j = n-1; j > i; j--){
            if (a[j-1].height < a[j].height){
                swap_Student(&a[j-1], &a[j]);
            }
        }
    }
}

void sort_by_name(Student a[], int n){
    int i, j;
    for (i = 0; i < n -1; i++){
        for(j = n-1; j > i; j--){
            if(*(a[j-1].name) < *(a[j].name)){
                swap_Student(&a[j-1], &a[j]);
            }
        }
    }
}

/*两个函数都是降序排列*/

int main(void){
    int i,j;
    Student std[128];

    int n;

    printf("请输入人数：");  scanf("%d", &n);
    printf("下面，请分别输入每人的名字，身高，体重，奖学金：\n");
    for (i = 0; i < n; i++){
        printf("第%d个学生的\n", i+1);
        printf("姓名：");   scanf("%s",std[i].name);
        printf("身高：");   scanf("%d", &std[i].height);
        printf("体重：");   scanf("%f", &std[i].weight);
        printf("奖学金："); scanf("%ld",&std[i].schols);
    }

    for (i = 0; i <n; i++){
        printf("%-8s %6d%6.1f%7ld\n",
        std[i].name,std[i].height,std[i].weight,std[i].schols);
    }

    sort_by_name(std, n);

    puts("\n按姓名降序排列：");

    for (i = 0; i <n; i++){
        printf("%-8s %6d%6.1f%7ld\n",
        std[i].name,std[i].height,std[i].weight,std[i].schols);
    }

    return 0;

}
/*笔者没有做两种功能的全部在main函数中实现*/