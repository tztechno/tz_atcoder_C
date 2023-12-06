#include <stdio.h>

int main() {
    int N;
    
    if (scanf("%d", &N) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;  // Exit with an error code
    }
    
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
