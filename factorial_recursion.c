#include <stdio.h>

int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Get the number for which factorial is to be calculated from the user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Calculate and print the factorial
    printf("Factorial of %d = %d\n", num, factorial(num));

    return 0;
}

