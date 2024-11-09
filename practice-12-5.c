#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))

typedef struct{
    double x;
    double y;
}Point;

double dist(Point pa, Point pb){
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

typedef struct{
    Point carPos;
    double fuel;
}Car;

void put_info(Car c){
    printf("当前位置：(%.2f, %.2f)\n", c.carPos.x, c.carPos.y);
    printf("当前燃料：%.2lf\n", c.fuel);
}

int move_dest(Car *c, Point dest){      /*输入目的地坐标的移动方法*/
    double d = dist(c -> carPos, dest);
    if (d > (c -> fuel)){
        printf("行驶距离超过了燃料.\n");
        return 0;
    }
    c -> carPos = dest;
    c -> fuel -= d;
    return 1;
}

int move_coordinate(Car *c, Point move){  /*move是移动向量，x坐标为x方向移动的距离，y方向同理*/
    if(sqrt(sqr(move.x) + sqr(move.y)) > c -> fuel){
        printf("行驶距离超过了燃料.\n");
        return 0;
    }
    c -> carPos.x += move.x;
    c -> carPos.y += move.y;
    c -> fuel -= sqrt(sqr(move.x) + sqr(move.y));
    return 1;
}

int main(void){
    int select,choose;
    Car mycar = {{0.0, 0.0}, 90.0};

    while(1){
        put_info(mycar);
        printf("开动汽车吗？Yes --- 1/No --- 0：");  scanf("%d", &select);
        if(select == 0){
            break;
        }

        printf("请输入以目的地坐标形式移动还是以输入x、y移动距离的形式移动  前者----1; 后者----2：");
        scanf("%d", &choose);
        if(choose == 1){
            Point dest;

            printf("请输入目的地的坐标：\n");
            printf("x坐标：");  scanf("%lf", &dest.x);
            printf("y坐标：");  scanf("%lf", &dest.y);

            move_dest(&mycar, dest);
        }
        else if(choose == 2){
            Point move;

            printf("请输入移动的距离：\n");
            printf("x方向：");  scanf("%lf", &move.x);
            printf("y方向：");  scanf("%lf", &move.y);

            move_coordinate(&mycar, move);
        }
    }

    return 0;
}