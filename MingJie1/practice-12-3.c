#include <stdio.h>

struct xyz
{
    int x;
    long y;
    double z;
};

struct xyz scan_xyz(void){
    struct xyz result;
    printf("请分别输入x、y和z的值：\n");
    printf("x:");  scanf("%d", &result.x);
    printf("y:");  scanf("%d", &result.y);
    printf("z:");  scanf("%lf", &result.z);

    return result;
}

int main(void){
    struct xyz a;
    a = scan_xyz();

    printf("a.x = %d\n", a.x);
    printf("a.y = %d\n", a.y);
    printf("a.z = %lf\n", a.z);

    return 0;
}
