abc077_b.c
##############################################
##############################################
##############################################
#include<stdio.h>
#include<math.h>
int main()
{
	long long int n,i;int j;
	scanf("%lld",&n);
	j=sqrt(n);
	printf("%lld",j*j);
}
##############################################
#include <stdio.h>
#include <math.h>
int main ()
{
    int n;
    scanf ("%d", &n);
    int s = sqrt(n);
    printf ("%d\n", s*s);
}
##############################################
#include<stdio.h>
#include<math.h>
double n;
int main(void){
	scanf("%lf",&n);
	printf("%.0lf\n",pow(floor(sqrt(n)),2.0));
	return 0;
}
##############################################
#include <stdio.h>
#include <math.h>
int main() {
    int n, m;
    scanf("%d", &n);
    m = (int)sqrt(n);
    printf("%d\n", m * m);
    return 0;
}
##############################################
[python]
import math
n=int(input())
m=int(math.sqrt(n))
print(m**2)
##############################################
