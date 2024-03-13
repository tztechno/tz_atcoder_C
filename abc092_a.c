//abc092_a.c
################################
################################
################################
################################
################################
################################
#include <stdio.h>

int main() 
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    int minTrainFare, minBusFare;

    if (A < B) {
        minTrainFare = A;
    } 
    else {
        minTrainFare = B;
    }
    if (C < D) {
        minBusFare = C;
    } 
    else {
        minBusFare = D;
    }
    int totalFare;

    if (minTrainFare + minBusFare < A + C) {
        totalFare = minTrainFare + minBusFare;
    } 
    else {
        totalFare = A + C;
    }
    printf("%d\n", totalFare);

    return 0;
}

################################
#include<stdio.h>
int main(){
	int a,b,c,d;
	int qaq=0;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>=b)
		qaq+=b;
	else
		qaq+=a;
	if(c>=d)
		qaq+=d;
	else
		qaq+=c;
	printf("%d",qaq);
}

################################
[available both vertically and horizontally]
#include<stdio.h>
int a[11];
int main(){
    //char s[20];
    int min1=0,min2,n=0,a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b) min1=a;
    else min1=b;
    if(c<d) min2=c;
    else min2=d;

    printf("%d\n",min1+min2);
}
################################
#include <stdio.h>

int main() {
    int n[4];

    for (int i = 0; i < 4; i++) {
        scanf("%d", &n[i]);
    }

    int a = n[0];
    int b = n[1];
    int c = n[2];
    int d = n[3];

    int m1 = (a < b) ? a : b;
    int m2 = (c < d) ? c : d;

    printf("%d\n", m1 + m2);

    return 0;
}
################################
