#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        s[strcspn(s, "\n")] = '\0';
        int n = strlen(s);
        if (n < 4) {
            printf("%*s%s\n", 4 - n, "0", s);
        } else {
            printf("%s\n", s);
        }
    }
    return 0;
}
