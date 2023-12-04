#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove trailing newline
    int n = strlen(s);
    if (n < 4) {
        printf("%04s\n", s);
    } else {
        printf("%s\n", s);
    }
    return 0;
}
