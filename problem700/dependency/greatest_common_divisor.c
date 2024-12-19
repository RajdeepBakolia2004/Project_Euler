#include "header.h"


/**
 * @brief Computes the greatest common divisor (GCD) of two unsigned long long integers.
 *
 * This function uses the Euclidean algorithm to compute the GCD of two numbers.
 * The GCD of two numbers is the largest positive integer that divides both numbers without leaving a remainder.
 *
 * @param a The first unsigned long long integer.
 * @param b The second unsigned long long integer.
 * @return The greatest common divisor of the two input numbers.
 *
 * @note If both a and b are zero, the result is undefined.
 */
unsigned long long greatest_common_divisor(unsigned long long a,unsigned long long b){
    if(b == 0){
        return a;
    }
    else{
        return greatest_common_divisor(b, a % b);
    }
}