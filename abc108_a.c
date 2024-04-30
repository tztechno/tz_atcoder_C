abc108_a.c
##############################################
##############################################
##############################################
##############################################
#include <stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    printf("%d\n", k/2 * (k - k/2));
}
##############################################
#include <stdio.h>
int main() {
    int K;
    scanf("%d", &K);
    int even_count = K / 2;
    int odd_count = (K % 2 == 0) ? K / 2 : (K / 2) + 1;
    int ways_to_choose_pair = even_count * odd_count;
    printf("%d\n", ways_to_choose_pair);
    return 0;
}
##############################################
#include <stdio.h>
#include <math.h>
int main() {
    int n, ans;
    scanf("%d", &n);
    ans = floor(n/2) * floor((n+1)/2);
    printf("%d", ans);
    return 0;
}
##############################################
[python]
N=int(input())
print((N//2)*((N+1)//2))
##############################################
