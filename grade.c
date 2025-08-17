#include <stdio.h>
int main() {
    int marks;
    char grade;
    printf("Enter the marks ranging from 0 to 100:");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80 && marks < 90) {
        grade = 'B';
    } else if (marks >= 70 && marks < 80) {
        grade = 'C'; // Changed to uppercase
    } else if (marks >= 60 && marks < 70) {
        grade = 'D';
    } else if (marks >= 0 && marks < 60) {
        grade = 'F';
    } else {
        printf("Invalid marks entered\n");
        return 0;
    }
    printf("Grade: %c\n", grade); 
    return 0; 
}    
    
    
