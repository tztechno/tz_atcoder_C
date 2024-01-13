//ABC192_B lowerupper

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char S[1000];
    scanf("%s", S);
    int n = strlen(S);
    for (int i = 0; i < n; ++i) {
        if ((i % 2 == 0 && S[i] != tolower(S[i])) || (i % 2 == 1 && S[i] != toupper(S[i]))) {
            printf("No\n");
            exit(0);
        }
    }
    printf("Yes\n");
    return 0;
}
