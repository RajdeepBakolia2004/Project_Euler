#include <stdio.h>
#include <stdbool.h>

/*WARNING !!!
This program can only find primes till the limit of
unsigned long long if the prime you are searching is larger 
than this limit then it will fail*/

// Defines the nth prime which we want
#define PRIMENUMBER 10001

//create an array to store n primes
unsigned long long primes[PRIMENUMBER];

void main() {
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

        /*we have two different methods to check if the number
        is prime or not first check for any divisor till square root 
        of the number other one check for all the primes searched till now
        you can comment one and check which one is better.*/

        //approach 1
        /*
        for (unsigned long long checker = 2; checker * checker <= number; checker++) {
            if (number % checker == 0) {
                isPrime = false;
                break;
            }
        }*/
        //approach2
        
       int checker = 0;
       while (checker < pointer){
        if (number % primes[checker] == 0){
            isPrime = false;
        }
        checker++;
       }

        //if it is prime add it to the prime and incrment pointer
        if (isPrime) {
            primes[pointer++] = number;
        }
    }
    //prints the PRIMENUMBER prime
    printf("The %u st prime number is %llu\n", PRIMENUMBER, primes[PRIMENUMBER - 1]);

}