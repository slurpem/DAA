#include <stdio.h>

// GCD using Euclid Algorithm
int gcd_euclid(int a, int b) {
    if (b == 0)
        return a;
    return gcd_euclid(b, a % b);
}

// GCD using Consecutive Integer Checking method
int gcd_consecutive(int a, int b) {
    int smaller = (a < b) ? a : b;  
    for (int i = smaller; i >= 1; i--) {
        if (a % i == 0 && b % i == 0)
            return i; 
    }
    return 1;
}

// GCD using Prime Factorization
int gcd_prime_factorization(int a, int b) {
    int gcd = 1;
    int i = 2;

    while (a > 1 && b > 1) {
        if (a % i == 0 && b % i == 0) {
            gcd *= i;
            a /= i;
            b /= i;
        } else if (a % i == 0) {
            a /= i;
        } else if (b % i == 0) {
            b /= i;
        } else {
            i++;
        }
    }
    return gcd;
}

int main() {
    int num1, num2, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose GCD method:\n");
    printf("1. Euclid's Algorithm\n");
    printf("2. Consecutive Integer Checking\n");
    printf("3. Prime Factorization\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    int result;
    switch (choice) {
        case 1:
            result = gcd_euclid(num1, num2);
            printf("GCD by Euclid's Algorithm: %d\n", result);
            break;
        case 2:
            result = gcd_consecutive(num1, num2);
            printf("GCD by Consecutive Integer Checking: %d\n", result);
            break;
        case 3:
            result = gcd_prime_factorization(num1, num2);
            printf("GCD by Prime Factorization: %d\n", result);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    return 0;
}
