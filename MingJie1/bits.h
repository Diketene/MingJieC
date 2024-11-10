#ifndef FOUNCTIONS
#define FOUNCTIONS 

int count_bits(unsigned x){
    int bits = 0;
    while(x){
        if (x & 1U){
            bits++;
        }
        x >>= 1;
    }
    return bits;
}

int int_bits(void){

    return count_bits(~0U);
}

#endif

