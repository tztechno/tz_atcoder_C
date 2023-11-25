#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    for (int i = 0; i < 256; ++i) {
        if ((A ^ i) == B) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
