#include<stdio.h>

int main() {
    int choice;
    int num1, num2;
    float result; // Use float to handle potential division by zero

	printf("--------------MENU-------------- ");
	printf("\n 1.Addition");
	printf("\n 2.Subtracion ");
	printf("\n 3.Multiplication ");
	printf("\n 4.Division");

	
    printf("\nEnter your choice (1, 2, 3, 4): ");
    scanf(" %d", &choice); // Capture only the first character

    // Validate user input (optional but recommended)
    if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
        printf("\nInvalid choice. Please enter 1, 2, 3, or 4.\n");
       
        return 1; // Indicate error
    }
    

   
    printf("Enter First numbers: ");
    scanf("%d", &num1);
    printf("\nEnter Second numbers: ");
    scanf("%d",  &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("%d + %d = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%d - %d = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%d * %d = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero.\n");
            } else {
                result = (float)num1 / num2; // Cast to float for division
                printf("%d / %d = %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("Unexpected error.\n"); // Should never be reached due to validation
    }

    return 0;
}

