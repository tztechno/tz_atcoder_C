#include <stdio.h>
int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    int length = 0;
    while (input[length] != '\0' && input[length] != '\n') {
        length++;
    }
    int n = length / 2;
    char ans = input[n];
    printf("%c\n", ans);
    return 0;
}
