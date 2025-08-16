#include <stdio.h>
float add(float a, float b){
    return a+b;
}
float subtract(float a, float b){
    return a-b;
}
float multiply(float a, float b){
    return a*b;
}
float divide(float a, float b){
    if(b != 0){
        return a/b;
    } else {
        printf("Error: Division by zero is not allowed");
        return 0;
    }
    }
int main() {
    float num1,num2,result;
    char operator;
    char choice;
    do{
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator);

        switch(operator) {
            case '+':
                result = add(num1, num2);
                break;
            case '-':
                result = subtract(num1, num2);
                break;
            case '*':
                result = multiply(num1, num2);
                break;
            case '/':
                result = divide(num1, num2);
                break;
            default:
                printf("Invalid operator\n");
                continue;
        }
        printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator!\n");
    return 0;
}