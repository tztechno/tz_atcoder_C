#include <stdio.h>

int main() {
    
    char input[100];
    fgets(input, sizeof(input), stdin);
    
    int N;
    if (sscanf(input, "%d", &N) != 1) {
        N = 0;
    }

    int m = N / 5;
    int diff = N % 5;

    int result = (diff <= 2) ? m * 5 : (m + 1) * 5;

    printf("%d\n", result);

    return 0;
}
