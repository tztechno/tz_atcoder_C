#include <stdio.h>

int main() {

    char input_str[100];
    fgets(input_str, sizeof(input_str), stdin);

    int input_vals[2];
    sscanf(input_str, "%d %d", &input_vals[0], &input_vals[1]);

    if (sizeof(input_vals) / sizeof(input_vals[0]) == 2) {

        int A = input_vals[0];
        int B = input_vals[1];

        char ADigits[12]; // assuming int can be at most 10 digits
        sprintf(ADigits, "%d", A);
        char BDigits[12];
        sprintf(BDigits, "%d", B);

        int sumADigits = 0;
        for (int i = 0; ADigits[i] != '\0'; i++) {
            sumADigits += ADigits[i] - '0';
        }

        int sumBDigits = 0;
        for (int i = 0; BDigits[i] != '\0'; i++) {
            sumBDigits += BDigits[i] - '0';
        }

        int ansValue = sumADigits > sumBDigits ? sumADigits : sumBDigits;

        printf("%d\n", ansValue);
    } else {
        printf("Invalid input. Please enter two space-separated numbers.\n");
    }

    return 0;
}
