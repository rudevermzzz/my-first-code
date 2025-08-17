#include <stdio.h>
int main() {
    float num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the last number: ");
    scanf("%f", &num3);

    if (num1 == num2 && num2 == num3) {
        printf("All numbers are equal: %f\n", num1);
    } else if (num1 >= num2 && num1 >= num3) {
        printf("The maximum number is %f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The maximum number is %f\n", num2);
    } else {
        printf("The maximum number is %f\n", num3);
    }
    return 0;
}
