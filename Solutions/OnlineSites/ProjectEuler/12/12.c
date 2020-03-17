/*
 *  Brute Force.
 *  Total time: 1h 6m
 */

#include <stdio.h>

int TriangularNumber(int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += i;
    }
    return sum;
}

int main(){
   
    unsigned long sum = 0; 
    for(int i = 1; ; i++){
        sum += i;
        
        int count = 0;
        for(int j = 1; j <= sum; j++){
            if(sum % j == 0){
                count++;
            }
            if(count > 500){
                printf("TriNum: %lu --  Factors: %d\n", sum, count);
                return 0; 
            }
        }

    }

    return 0;
}
