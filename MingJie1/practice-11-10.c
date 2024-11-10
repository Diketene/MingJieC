#include <stdio.h>

int strtoi(const char *nptr){
    int sum = 0.0;
    int sign = 1;

    if(*nptr == '-'){
        sign = -1;
        nptr++;
    }

    while(*nptr){
        if(*nptr >= '0' && *nptr <= '9'){
            sum = sum*10 + (*nptr - '0');
            nptr++;
        }
        else{
            return 0;
        }
    }
    return sum*sign;
    
} /*long型转换和int型转换相似*/

double strtof(const char *nptr){
    double integer = 0.0;
    double decimal = 0.0;
    int sign = 1;
    int len = 0;

    if(*nptr == '-'){
        sign = -1;
        nptr++;
    }
    while(*nptr){
        if(*nptr >= '0' && *nptr <= '9'){
            integer = integer*10 + (*nptr - '0');
            nptr++;
        }
        else if(*nptr == '.'){
            nptr++;
            break;
        }
        else{
            return 0;
        }
    }
    while(*nptr){
         if(*nptr >= '0' && *nptr <= '9'){
            decimal = decimal*10 + (*nptr - '0');
            nptr++;
            len++;
        }
        else{
            return 0;
        }
    }
    for(int i = 0; i < len; i++){
        decimal /= 10;
    }
    return sign*(integer + decimal);
}

int main(void){
    char p[] = "-67";
    char str[] = "-123.4567";
    printf("%d\n", strtoi(p));
    printf("%lf\n", strtof(str));
    return 0;
}