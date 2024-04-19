abc073_b.c
#######################################
#######################################
#######################################
#######################################
#include <stdio.h>

int main() {
	int n, ans;

	scanf("%d", &n);
	ans = 0;
	while (n--) {
		int l, r;

		scanf("%d%d", &l, &r);
		ans += r - l + 1;
	}
	printf("%d\n", ans);
	return 0;
}
#######################################
#include <stdio.h>
int main(){
  int n,l,r,i,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;++i){
    scanf("%d %d",&l,&r);
    sum+=r-l+1;
  }
  printf("%d",sum);
}
#######################################
#include<stdio.h>
int main(void){
  int N,l,r,sum,a=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&l);
    scanf("%d",&r);
    sum=r-l+1;
    a=a+sum;
  }
  printf("%d",a);
}
#######################################
[My AC]

#include <stdio.h>

int main() {
    int n,l,r;
    scanf("%d", &n);
    int t = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &l, &r);
        t+=r-l+1;
    }
    printf("%d ", t);
    return 0;
}
#######################################
