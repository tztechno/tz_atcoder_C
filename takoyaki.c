#include <stdio.h>

int main() {
    int N, X, T;
    scanf("%d %d %d", &N, &X, &T);
    int t = N / X ; 
    if (N % X == 0) {
        printf("%d\n", t * T);
    } else {
        printf("%d\n", (t + 1) * T);
    }
    return 0;
}
