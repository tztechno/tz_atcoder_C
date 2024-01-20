//abc174_a conditioner.c

####################################
####################################
#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    if (X >= 30)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

####################################
#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);
    int judge = (X >= 30);
    const char *ANS[] = {"No", "Yes"};
    printf("%s\n", ANS[judge]);
    return 0;
}
####################################
