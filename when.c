#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);

    int h = 21 + K / 60;
    int m = K % 60;

    printf("%02d:%02d\n", h, m);

    return 0;
}
