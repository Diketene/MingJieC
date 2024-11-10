#include <stdio.h>

void decrement_date(int *y, int *m, int *d){
    if (*y % 4 == 0){
        if (*m == 2){
            if (*d >= 2 && *d <= 29){
                *d -= 1;
            }
            else if (*d == 1){
                *m -= 1;
                *d = 31;
            }
        }
        else if (*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m ==12){
            if (*d >= 2 && *d <=31){
                *d -= 1;
            }
            else if (*m != 1 && *m != 3 && *d == 1){
                *m -= 1;
                *d = 30;
            }
            else if (*m == 3 && *d == 1){
                *m -= 1;
                *d = 29;
            }
            else if (*m == 1 && *d == 1){
                *y -= 1;
                *m = 12;
                *d = 31;
            }
        }
        else if (*m == 4 || *m == 6 || *m == 9 || *m == 11 ){
            if (*d >= 2 && *d <= 30){
                *d -= 1;
            }
            else if (*d == 1){
                *m -= 1;
                *d = 31;
            }
        }
    }
    else if (*y % 4 != 0){
        if (*m == 2){
            if (*d >= 2 && *d <= 28){
                *d -= 1;
            }
            else if (*d == 1){
                *m -= 1;
                *d = 31;
            }
        }
        else if (*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m ==12){
            if (*d >= 2 && *d <=31){
                *d -= 1;
            }
            else if (*m != 1 && *m != 3 && *d == 1){
                *m -= 1;
                *d = 30;
            }
            else if (*m == 3 && *d == 1){
                *m -= 1;
                *d = 28;
            }
            else if (*m == 1 && *d == 1){
                *y -= 1;
                *m = 12;
                *d = 31;
            }
        }
        else if (*m == 4 || *m == 6 || *m == 9 || *m == 11 ){
            if (*d >= 2 && *d <= 30){
                *d -= 1;
            }
            else if (*d == 1){
                *m -= 1;
                *d = 31;
            }
        }
    }
}

void increment_date(int *y, int *m, int *d){
    if (*y % 4 == 0){
        if (*m == 2){
            if (*d >= 1 && *d <= 28){
                *d += 1;
            }
            else if (*d == 29){
                *m += 1;
                *d = 1;
            }
        }
        else if (*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m ==12){
            if (*d >= 1 && *d <=30){
                *d += 1;
            }
            else if (*m != 12 && *d == 31){
                *m += 1;
                *d = 1;
            }
            else if (*m == 12 && *d == 31){
                *y += 1;
                *m = 1;
                *d = 1;
            }
        }
        else if (*m == 4 || *m == 6 || *m == 9 || *m == 11 ){
            if (*d >= 1 && *d <= 29){
                *d += 1;
            }
            else if (*d == 30){
                *m += 1;
                *d = 1;
            }
        }
    }
    else if (*y % 4 != 0){
        if (*m == 2){
            if (*d >= 1 && *d <= 27){
                *d += 1;
            }
            else if (*d == 28){
                *m += 1;
                *d = 1;
            }
        }
        else if (*m == 1 || *m == 3 || *m == 5 || *m == 7 || *m == 8 || *m == 10 || *m ==12){
            if (*d >= 1 && *d <=30){
                *d += 1;
            }
            else if (*m != 12 && *d == 31){
                *m += 1;
                *d = 1;
            }
            else if (*m == 12 && *d == 31){
                *y += 1;
                *m = 1;
                *d = 1;
            }
        }
        else if (*m == 4 || *m == 6 || *m == 9 || *m == 11 ){
            if (*d >= 1 && *d <= 29){
                *d += 1;
            }
            else if (*d == 30){
                *m += 1;
                *d = 1;
            }
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