
#include <stdio.h>

int main() {
    float a, b, sum;
    printf("enter a number:\n ");
    scanf("%f", &a);
    printf("Enter another number:\n ");
    scanf("%f", &b);
    sum = a + b; // Calculate sum before printing
    printf("The sum of the two numbers is: %.1f\n", sum);
    return 0;
}
