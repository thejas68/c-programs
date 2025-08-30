#include <stdio.h>

int main() {
    int x, original, reversed = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &x);

    // Negative numbers are not palindromes
    if (x < 0) {
        printf("false\n");
        return 0;
    }

    original = x;  // Save the original number

    // Reverse the number
    while (x != 0) {
        remainder = x % 10;               // Get last digit
        reversed = reversed * 10 + remainder; // Add to reversed number
        x = x / 10;                       // Remove last digit
    }

    // Check if original and reversed are equal
    if (original == reversed) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

