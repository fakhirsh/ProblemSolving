/*
 * Time: 0.34 sec
 */


#include <stdio.h>

unsigned int CountSteps(unsigned int n){
    unsigned int count = 1;
    while(n > 1){
        if(n % 2 == 0)
            n = n / 2;
        else
            n = 3*n + 1;
        count++;
    }
    return count;
}

int main(){
   
    unsigned int max = 0, steps = 0, num;
    
    for(unsigned int i = 3; i < 1000000; i++){
        steps = CountSteps(i);
        if(steps > max){
            max = steps;
            num = i;
        }
    }
    printf("num: %u steps: %u\n", num, max);
    return 0;
}
