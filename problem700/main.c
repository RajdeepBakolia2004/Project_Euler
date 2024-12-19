#include "dependency/header.h"
#define euler 1504170715041707
#define mod 4503599627370517


int main(){
    printf("Checking the hcf of the numbers %lu %lu\n",mod,euler);
    unsigned long long gcd = greatest_common_divisor(mod,euler);
    printf("GCD of the two number is %llu\n",gcd);
    unsigned long long first_zero = (mod / gcd);
    printf("we have to check till %llu\n",first_zero);


    return 0;
}