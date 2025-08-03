#include <stdio.h>

int main() {

    float num1 = 0;
    float num2 = 0;
    char opterator = '\0';
    int valid = 0;
    float result = 0;

    printf("=== Calculator ===\n");
    do {
        valid = 0;
        printf("Enter your first Number: ");
        if(scanf("%f", &num1) != 1) {
            printf("invalid Input.\n");
            valid = 1;
            while(getchar() != '\n');
        }
    } while (valid != 0);
    while(getchar() != '\n');

    do {
        printf("Choose an opterator(+, -, *, /): ");
        scanf("%c", &opterator);
        while(getchar() != '\n');
    }while (opterator != '+' && opterator != '-' && opterator != '*' && opterator != '/');

    do {
        valid = 0;
        printf("Enter your Second Number: ");
        if(scanf("%f", &num2) != 1) {
            printf("invalid Input.\n");
            valid = 1;
            while(getchar() != '\n');
        }
    } while (valid != 0);

    switch(opterator) {

        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if (num2 == 0) {
            printf("Can't be divided by 0.\n");
            return 0;
        }
        result = num1 / num2;
        break;
    }

    printf("RESULT: %.2f", result);

    return 0;
}