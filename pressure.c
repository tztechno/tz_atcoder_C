
#include <stdio.h>

int main() {
    int D;

    //printf("Enter an integer: ");
    if (scanf("%d", &D) == 1) {
        double ans = (double)D / 100.0;
        printf("%f\n", ans);
    } else {
        fprintf(stderr, "Invalid input. Please enter an integer.\n");
        return 1;
    }

    return 0;
}
