#include <stdio.h>
#include <string.h>

int main() {
    char S[1000];

    if (scanf("%s", S) != 1) {
        fprintf(stderr, "Error reading input\n");
        return 1;
    }

    int count[26] = {0}; // Assuming only lowercase letters, adjust the size accordingly

    for (int i = 0; i < strlen(S); i++) {
        if ('a' <= S[i] && S[i] <= 'z') {
            count[S[i] - 'a']++;
        }
    }

    for (int i = 0; i < strlen(S); i++) {
        if ('a' <= S[i] && S[i] <= 'z' && count[S[i] - 'a'] == 1) {
            printf("%c\n", S[i]);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
