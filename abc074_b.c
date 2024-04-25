abc074_b.c
#######################################
#include <math.h>
        S += fmin(x, K - x) * 2;
#######################################
#######################################
#######################################
#######################################
#include<stdio.h>
int main(){
	int n,k,a,sum=0;
	scanf("%d%d",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%d",&a);
		if (a>k-a) sum+=2*(k-a);
		else sum+=2*a;
	}
	printf("%d",sum);
}
#######################################
#include<stdio.h>
int main(){
	int n,k,x[100],sum=0;
	scanf("%d%d",&n,&k);
	for(int i=0; i<n; i++) {
		scanf("%d",&x[i]);
		if(x[i]<=k/2)
			sum+=x[i]*2;
		else
			sum+=(k-x[i])*2;
	}
	printf("%d",sum);
	return 0;
}
#######################################
#include <stdio.h>
#include <math.h>

int main() {
    int N, K, S = 0;
    scanf("%d", &N);
    scanf("%d", &K);
    for (int i = 0; i < N; ++i) {
        int x;
        scanf("%d", &x);
        S += fmin(x, K - x) * 2;
    }
    printf("%d\n", S);
    return 0;
}
#######################################
