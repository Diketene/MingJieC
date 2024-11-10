#include <stdio.h>  /*仅实现了最基本的功能，并未限制月份、日期的输入取值范围*/

const int days_in_month[2][12] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

void decrement_date(int *y, int *m, int *d){
    if (*d >= 2){
        *d -= 1;
    }
    else{
        *d = days_in_month[*y % 4 == 0][*m];  /*注意数组的索引从0开始*/
        if (*m > 1){
            *m -= 1;
        } 
        else{
            *y -= 1;
            *m = 12;
        }
    }
}

void increment_date(int *y, int *m, int *d){
    if (*d < days_in_month[*y % 4 == 0][*m -1]){
        *d += 1;
    }else{
        *d = 1;
        if (*m < 12){
            *m += 1;
        }
        else{
            *y += 1;
            *m = 1;
        }
    }
}

int main(void){
    int year1, month1, day1, year2, month2, day2;

    printf("请输入年份：");  scanf("%d", &year1);
    printf("请输入月份：");  scanf("%d", &month1);
    printf("请输入日期：");  scanf("%d", &day1);

    year2 = year1;
    month2 = month1;
    day2 = day1;

    putchar('\n');
    printf("%d年%d月%d日的前一天日期为",year1, month1, day1);

    decrement_date(&year1, &month1, &day1);

    printf("%d年%d月%d日.\n", year1, month1, day1);

    printf("%d年%d月%d日的后一天日期为", year2, month2, day2);

    increment_date(&year2, &month2, &day2);

    printf("%d年%d月%d日.\n", year2, month2, day2);

    return 0;
}