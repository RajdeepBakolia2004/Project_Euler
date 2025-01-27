#include <stdio.h>
#include <stdlib.h>

void main(){
    long long result = 0;
    int first = 1, second = 2;
    while(second < 4000000){
        if(second % 2 == 0){
            result += second;
        }
        int temp = first + second;
        first = second;
        second = temp;
    }
    printf("the sum of all even indicies number is %llu\n",result);
}