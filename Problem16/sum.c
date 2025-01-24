#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 302
#define POWER 1000


/*as the power of 2 raised to 1000 contain 302 digit we need an array of 301 element to store 
every single digit and update it in each iteration multiplying by 2.*/
void main(){
    int array[N];
    for(int i = 0;i < N;i++){
        array[i] = 0;
    }
    array[0] = 1;
    for(int j = 0;j < POWER;j++){
        int carry = 0;
        for(int i = 0;i < N;i++){
            int temp = (array[i]*2 + carry) / 10;
            array[i] = (array[i]*2 + carry) % 10;
            carry = temp;
        }
    }
    int result = 0;
    for(int i = 0;i < N;i++){
        result += array[i];
    }
    printf("The result of adding digits of 2 to the power 1000 is = %d\n",result);


}