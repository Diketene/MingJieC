#include <stdio.h>
#include <string.h>
#define NUMBER 80

int main(void){
    int i;
    int quit;
    char s[NUMBER][128];

    for(i = 0; i < NUMBER; i++){
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        
        if(strcmp(s[i], "$$$$$") == 0){
            quit = i;
            break;
        }
    }

    for(i = 0; i < quit; i++){
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }

    return 0;
}