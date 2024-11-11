#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    const int max_stage = 25;
    int num[max_stage];
    int i = 0;
    int j;
    srand(time(NULL));
    int ans = -999 + rand()%1999;

    printf("请输入一个-999~999的整数，你只有%d次机会。\n", max_stage);

    do{
        printf("还有%d次机会。是多少呢：", max_stage-i);
        scanf("%d", &num[i]);
        if((*(num + i)) > ans ){
            printf("再小一点。\n");
        }
        else if((*(num + i)) < ans ){
            printf("再大一点。\n");
        }
        else {
            printf("猜对了！你用了%d次猜对。\n", ++i);
            break;
        }
        i++;            
    }while(i < max_stage);

    if(i == max_stage){
        printf("很遗憾，没有猜中！正确答案是%d。\n", ans);
    }

    puts("------输入记录------");

    for(j = 0; j < i; j++){
        printf("%2d : %4d %+4d\n", j+1, num[j], num[j] -ans);
    }

    return 0;
}

