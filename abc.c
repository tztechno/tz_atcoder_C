#include <stdio.h>

int main() {
    int N;
    int result; 

    if (N <= 125) {
        result = 4;
    } else if (N <= 211) {
        result = 6;
    } else {
        result = 8;
    }

    printf("%d\n", result);  
    return 0;
}
