/*This file contains the function that takes two UNSIGNED LONG as input and it returns
the greatest common divisor of those two Number in O(log(max(a,b))) Time complexity */

// Function Declaration 
unsigned long long greatest_common_divisor(unsigned long long a,unsigned long long b);

/*Function definition
It works using the fact that HCF of (a,b) is equal to HCF of (b,b%a) 
This function recursively calls itself on smaller argument untill
The second argument is zero in which case it return the first argument
Here it is assumed that both operands are positive and that a > b
note that it can work for negative numbers too just pass the absolute value of the number*/
unsigned long long greatest_common_divisor(unsigned long long a,unsigned long long b){
    if(b == 0){
        return a;
    }
    else{
        return greatest_common_divisor(b, a % b);
    }
}