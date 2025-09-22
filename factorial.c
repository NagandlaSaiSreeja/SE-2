#include <stdio.h>

int factorial(int n);

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the input is a non-negative integer
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }

    return 0;
}

// Function to calculate factorial
int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}
