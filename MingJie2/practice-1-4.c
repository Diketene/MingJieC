#include <stdio.h>
#include <stdlib.h>
#include <time.h>    /*只处理了范围以外以及非数字类输入的检查，对于小数的检测，要稍微复杂些，放在之后处理*/

void put_in_number(int *s, int i, int max_stage){
    printf("还有%d次机会，输入什么呢：", max_stage - i);
    int result;
    int temp;
    do{
        result = scanf("%d", &temp);
        if(result != 1){
            printf("输入无效，请重新输入一个整数：\n");
            while(getchar() != '\n'){
                ;
            }
            continue;
        }
        if(temp < 3 || temp > 999){
            printf("输入的数不在要求范围内！请重新输入：");
        }
        else{
            *(s + i) = temp;
        }
    }while(temp < 3 || temp > 999);
}

void compare(int *p, int i, int n){
    if(*(p + i) > n){
        printf("再小一点。\n");
    }
    else if(*(p + i) < n){
        printf("再大一点。\n");
    }
    else{
        printf("猜对了！共用了%d次\n", ++i);
    }
}

void regretful(int ans, int i, int max_stage){
    if(i == max_stage){
        printf("很遗憾，没有猜中！正确答案是%d\n", ans);
    }
}

void print_result(int j, int i, int *num){

}

int main(void){
    srand(time(NULL));
    int ans = 3*(1+ rand()%333);
    const int max_stage = 8;
    int i = 0;
    int num[max_stage];
    int select;

    printf("欢迎来到猜3和3的倍数的小游戏！\n在这个游戏中，你只被允许输入在3-99的范围内输入3和3的倍数，对于你所输入的数不为3的倍数的情况，你可以选择两种方式来进行处置：\n");
    printf("0----在输入的数不为3的倍数时，直接关闭程序 | 1----在输入的数不为3的倍数时，继续输入。\n请选择：");

    do{
        scanf("%d", &select);
        if(select != 0 && select != 1){
            printf("\n只允许输入0或者1！请重新输入：");
        }
    }while(select != 0 && select != 1);

    printf("你有%d次输入机会\n", max_stage);

    if(select){
        do{
            put_in_number(num, i, max_stage);

            if(num[i] % 3 != 0){
                do{
                    printf("输入的值不是3的倍数，请重新输入。\n");
                    put_in_number(num, i, max_stage);

                }while(num[i] % 3 != 0);

                compare(num, i, ans);
            }
            else{
                compare(num, i, ans);
            }
            i++;
        }while( i < max_stage);

        regretful(ans, i, max_stage);
    }
    else{
        do{
            put_in_number(num, i, max_stage);
            
            if(num[i] % 3 != 0){
                printf("程序已结束\n");
                break;
            }
            else{
                compare(num, i, ans);
            }
            i++;
        }while(i < max_stage);
        regretful(ans, i, max_stage);
    }

    printf("------输入记录---------\n");

    for(int j = 0; j < i; j++){
        printf("%2d： %4d %+4d\n",j+1, *(num + j), (*(num + j) - ans) );
    }

    return 0;
}