#include <stdlib.h>

/*This file contains finbonacci numbers generator 
It can only generate number till the index for which the number is 
less than or equal to max limit for unsigned long long
for 8 byte in long long you can give n = 93 p1 = 1 and p2 = 1 after which overflow will occur.*/

/*Function declaration takes p1 the value of first fibonnaci number
p2 the value of second fibonnaci number and n
the index till you want the fibonnci numbers*/
unsigned long long* sequence_generator(unsigned long long p1,unsigned long long b,int n);
/*function definition*/
unsigned long long* sequence_generator(unsigned long long p1, unsigned long long p2,int n){
    unsigned long long* heap = (unsigned long long*)malloc(n * sizeof(long long));
    heap[0] = p1;
    heap[1] = p2;

    for(int i = 2;i < n;i++){
        heap[i] += heap[i-1] + heap[i-2];
    }
    return heap;
}


