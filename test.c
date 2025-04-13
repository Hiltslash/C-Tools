#include <stdio.h>
#include <string.h>
#include <math.h>

void calc() {
    int runcalc = 1;
    while (runcalc == 1) {
        int num1, num2;
        char op;

        printf("(0 to exit)Enter first number: ");
        scanf("%d", &num1);
        if (num1 == 0) {
            runcalc = 0;
            continue;
        }

        printf("Enter operator (+ - * / ^): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        scanf("%d", &num2);

        switch (op) {
            case '+':
                printf("RESULT: %d\n", num1 + num2);
                break;
            case '-':
                printf("RESULT: %d\n", num1 - num2);
                break;
            case '*':
                printf("RESULT: %d\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("RESULT: %d\n", num1 / num2);
                else
                    printf("Cannot divide by zero!\n");
                break;
            case '^':
                printf("RESULT: %.0f\n", pow(num1, num2));
                break;
            default:
                printf("INVALID OPERATOR\n");
        }
    }
}

int main() {
    int choice;
    printf("C TOOLS\n1. Calculator\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            calc();
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
