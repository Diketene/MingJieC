#include <stdio.h>
#include <time.h>

#define NUMBER 128

char data_file[] = "jkc.bin";

void get_data(void){
    FILE *fp;
    struct tm timer;

    if ((fp = fopen(data_file, "rb")) == NULL){
        printf("本程序第一次运行。\n");
    }
    else{
        char str[NUMBER];
        int year, month, day, h, m, s;

        fread(&timer, sizeof(timer), 1, fp);
        printf("上一次运行是在%d年%d月%d日%d时%d分%d秒。\n",  timer.tm_year +1900, timer.tm_mon + 1, timer.tm_mday, 
        timer.tm_hour,  timer.tm_min, timer.tm_sec);

        fclose(fp);
    }
}

void put_data(void){
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if ((fp = fopen(data_file, "wb")) == NULL){
        printf("无法打开这个文件.\n");
    }
    else{
        fwrite(timer, sizeof(*timer), 1, fp);
        fclose(fp);
    }
}

int main(void){
    get_data();
    put_data();

    return 0;
}