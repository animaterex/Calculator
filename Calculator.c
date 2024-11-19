#include <stdio.h>

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b) {
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b) {
    if (b == 0) {
        printf("Error! Division by zero.\n");
        return 0;  // Return 0 for division by zero.
    }
    return a / b;
}

int main() {
    float num1, num2;
    int choice;

    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    // Ask user to choose an operation
    printf("Enter choice (1/2/3/4): ");
    scanf("%d", &choice);

    // Ask user for input numbers
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Perform the selected operation
    switch (choice) {
        case 1:
            printf("Result: %.2f\n", add(num1, num2));
            break;
        case 2:
            printf("Result: %.2f\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result: %.2f\n", multiply(num1, num2));
            break;
        case 4:
            printf("Result: %.2f\n", divide(num1, num2));
            break;
        default:
            printf("Invalid input! Please enter a valid choice.\n");
            break;
    }

    return 0;
}