#include <stdio.h>

int main() {
    // Write C code here
    printf("Welcome. This is a simple calculator software that can perform addition, subtraction, multiplication and division.\n");
    int userInput;
    printf("\n1. Addition (+)"
    "\n2. Subtraction (-)"
    "\n3. Multiplication (*)"
    "\n4. Division (/)"
    "\nPlease choose an operator option from above (number 1 - 4):\n");
    scanf("%d", &userInput);
    
    double firstNum, secondNum;
    printf("\nPlease enter the 1st number: \n");
    scanf("%lf", &firstNum);
    printf("\nPlease enter the 2nd number: \n");
    scanf("%lf", &secondNum);
    
    switch(userInput){
        case 1:
        printf("%.1lf + %.1lf = %.1lf", firstNum, secondNum, firstNum + secondNum);
        break;
        
        case 2:
        printf("%.1lf - %.1lf = %.1lf", firstNum, secondNum, firstNum - secondNum);
        break;
        
        case 3:
        printf("%.1lf * %.1lf = %.1lf", firstNum, secondNum, firstNum * secondNum);
        break;
        
        case 4:
        while (secondNum == 0) {
            printf("Error: Dividing by zero is not allowed.\n"
            "Please enter a different number!\n");
            scanf("%lf", &secondNum);
        }
        printf("%.1lf / %.1lf = %.1lf", firstNum, secondNum, firstNum / secondNum);
        break;
        
        default:
        printf("The entered input does not match the listed operator! Please choose again.");
    }
    
    return 0;
}