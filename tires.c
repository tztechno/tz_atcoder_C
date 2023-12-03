#include <stdio.h>
#include <string.h>

int main() {
    char S[20];
    //printf("Enter a value for S: ");
    scanf("%s", S);

    if (strlen(S) >= 2 && strcmp(S + strlen(S) - 2, "er") == 0) {
        printf("er\n");
    } else {
        printf("ist\n");
    }

    return 0;
}
