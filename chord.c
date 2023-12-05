
Certainly! Here is the equivalent code in C:

c
Copy code
#include <stdio.h>
#include <string.h>

int main() {
    char s[256];
    scanf("%s", s);

    char *name[] = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    int size = sizeof(name) / sizeof(name[0]);

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(s, name[i]) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
