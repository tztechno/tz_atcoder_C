#include <stdio.h>

int main() {
    char A[100];  // Assuming a buffer size of 100 characters
    scanf("%s", A);

    if (strcmp(A, "Hello,World!") == 0) {
        printf("AC\n");
    } else {
        printf("WA\n");
    }

    return 0;
}
