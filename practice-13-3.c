#include <stdio.h>
#define NUMBER 128

typedef struct{
    char *name[NUMBER];
    double height;
    double weight;
}People;

void sort(People *pe, int n){
    int i,j;
    for(i = 0; i < n -1; i++){
        for(j = n-1; j > i; j--){
            if(pe[j].height < pe[j-1].height){
                People tmp = pe[j];
                pe[j] = pe[j - 1];
                pe[j - 1] = tmp;
            }
        }
    }
}

int main(void){
    People s[10];
    FILE *fp;
    int i = 0;

    if ((fp = fopen("hw.dat", "r")) == NULL){
        printf("无法打开文件\n");
    }
    else{
        while((fscanf(fp, "%s%lf%lf", s[i].name, &s[i].height, &s[i].weight)) == 3){
            printf("%-10s %5.1lf %5.1lf\n", s[i].name, s[i].height, s[i].weight);
            i++;
        }
        fclose(fp);
    }

    int numPeople = i;

    sort(s, numPeople);

    printf("-------------\n");

    for(i = 0; i < numPeople; i++){
         printf("%-10s %5.1lf %5.1lf\n", s[i].name, s[i].height, s[i].weight);
    }

    return 0;
}