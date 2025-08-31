#include <stdio.h>

int main() {
    int m;
    char g;

    printf("Enter the marks (0-100): ");
    scanf("%d", &m);

    if (m > 100 || m < 0) {
        printf("Invalid marks! Please enter between 0 and 100.\n");
    }
    else if (m >= 90) {
        g = 'A';
        printf("Grade: %c\n", g);
    }
    else if (m >= 80) {
        g = 'B';
        printf("Grade: %c\n", g);
    }
    else if (m >= 70) {
        g = 'C';
        printf("Grade: %c\n", g);
    }
    else if (m >= 60) {
        g = 'D';
        printf("Grade: %c\n", g);
    }
    else {
        printf("Fail\n");
    }

    return 0;
}
