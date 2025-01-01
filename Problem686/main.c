#include <math.h>
#include <stdio.h>

// Define the lower and upper bounds for the logarithmic range
#define LOWER 1.23
#define UPPER 1.24

// Define the target count N
#define N 678910

void main() {
    // Initialize variables
    unsigned long long m = 1; // Counter for the power of 2
    int current = 0; // Counter for the number of valid results found
    double l = log10(LOWER); // Logarithm base 10 of the lower bound
    double u = log10(UPPER); // Logarithm base 10 of the upper bound
    unsigned long long result; // Variable to store the result

    // Loop until we find the Nth valid result
    for (m; current != N; m++) {
        // Calculate the fractional part of m * log10(2)
        double temp = m * log10(2) - floor(m * log10(2));
        
        // Check if the fractional part is within the specified range
        if ((l <= temp) && (temp < u)) {
            result = m; // Store the current value of m as the result
            current++; // Increment the count of valid results found
        }
    }

    // Print the final result
    printf("The Result is %llu\n", result);
}