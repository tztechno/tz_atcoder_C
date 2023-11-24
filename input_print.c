#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }

    printf("%d\n", N);
    for (int i = 0; i < N; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
