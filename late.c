//ABC177_A late

#include <stdio.h>

int main() {
    int D,T,S;
    scanf("%d %d %d", &D, &T, &S);

    if (D<=T*S) {
        printf("Yes");
    } else {
        printf("No");        
    }
    return 0;
}
