#include <stdio.h>
int main() {
    float a, b;
    printf("Enter a number:");
    scanf("%f", &a);
    printf("Enter another number:");
    scanf("%f", &b);
    if (a > b) {
        printf("The maximum number is: %f", a);
    } else if (b > a) {
        printf("The maximum number is %f", b);
    } else {
        printf("Both numbers are equal: %f", b);
    }
    return 0;
}
    