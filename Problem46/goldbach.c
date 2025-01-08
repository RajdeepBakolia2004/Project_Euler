/*including all the library needed for this code*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//defining till what limit we want prime number
#define PRIMENUMBER 10001

//creating a global array to store thos primes
unsigned long long primes[PRIMENUMBER];


//Binary search to check if the  given number is prime or not it assumes the number is larger than 1
// and smaller than primes[PRIMENUMBER - 1]
bool is_prime(int key){
    //left and right index
    int left = 0,right = PRIMENUMBER -1;

    //loop runs untill entire array is done or it found the number
    while(left <= right){
        int mid = (right - left )/2 + left;
        if(primes[mid] > key){
            right = mid - 1;
        }
        else{
            if(primes[mid] == key){
                //return true if found
                return true;
            }
            left = mid + 1;
        }

    }
    //return false otherwise
    return false;
}
void prime_generator() {
    /*Initialise the elements of array to zero*/
    for (int index = 0; index < PRIMENUMBER; index++) {
        primes[index] = 0;
    }

    //pointer tells us the ith prime which we are searching
    int pointer = 0;

    /*main for loop that start from 2 as 1 is not a prime
    It goes through each number and check if it is a prime or not
    This goes on untill the pointer value hits the PRIMENUMBER limit.
    */
    for (unsigned long long number = 2; pointer < PRIMENUMBER; number++) {
        //initially assume number is prime
        bool isPrime = true;

        for (unsigned long long checker = 2; checker * checker <= number; checker++) {
            if (number % checker == 0) {
                isPrime = false;
                break;
            }
        }
    

        //if it is prime add it to the prime and incrment pointer
        if (isPrime) {
            primes[pointer++] = number;
        }
    }
}
void main(){
    //generate primes
    prime_generator();
    //runs for loop untill number till last prime are checked pr we found a number which 
    //doesn't satisfies goldbach cojecture
    for(int i = 35; i - 2 < primes[PRIMENUMBER - 1]; i += 2){
        bool condition = true;  


        //if i is prime remove this case
        if(is_prime(i)){
            continue;
        }


        for(int j = 1; j < ceil(sqrt((double) i/2.0)); j++){
            //for all 2*J^2 possible value check if it is prime or not
            if(is_prime(i - 2*j*j)){
                condition = false;
                break;
            }
        }
        if(condition){
            //condition still true we found the minimu value and now printing it
            printf("The result is %d\n",i);
            break;
        }

    }
}