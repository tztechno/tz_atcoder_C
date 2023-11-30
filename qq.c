#include <stdio.h>

int main() {
    char S[10]; // Assuming a maximum length of 10 characters
    //printf("Enter a string: ");
    scanf("%s", S);

    int ans = (S[0] - '0') * (S[2] - '0');
    printf("%d\n", ans);

    return 0;
}
