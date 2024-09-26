//Program Name: Calculator using function
//Date: 26/09/2024
#include <stdio.h>

void addition() {
    int a, b;
    printf("Enter two numbers for addition: ");
    scanf("%d %d", &a, &b);
    printf("Result of addition: %d\n", a + b);
}


void subtraction(int a, int b) {
    printf("Result of subtraction: %d\n", a - b);
}

int multiplication() {
    int a, b;
    printf("Enter two numbers for multiplication: ");
    scanf("%d %d", &a, &b);
    return a * b;

}

float division(int a, int b) {
    if (b != 0)
        return (float)a / b;
    else {
        printf("Error! Division by zero.\n");

        return 0;
    }
}

int main() {
    int choice, num1, num2, result;
    float div_result;

    printf("Simple Calculator Menu:\n");
    printf("1. Addition\n");

    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            addition();
            break;

        case 2:
            
            printf("Enter two numbers for subtraction: ");

            scanf("%d %d", &num1, &num2);
            subtraction(num1, num2);
            break;

        case 3:
            
            result = multiplication();
            printf("Result of multiplication: %d\n", result);
            break;

        case 4:
            
            printf("Enter two numbers for division: ");

            scanf("%d %d", &num1, &num2);
            div_result = division(num1, num2);
            if (num2 != 0)
                printf("Result of division: %.2f\n", div_result);
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

}

