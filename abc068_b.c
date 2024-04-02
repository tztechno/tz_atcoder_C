abc068_b.c
#########################################
#########################################
#########################################
#########################################
#########################################
#include<stdio.h>
int main(void){
  int n;
  scanf("%d",&n);

  int maxcnt=-1;
  int ans=-1;

  for(int i=1;i<=n;i++){
    int cnt=0;
    int y=i;

    for(;;){
      if(y%2!=0){
        break;
      }
      y/=2;
      cnt++;
    }
    
    if(maxcnt<cnt){
      maxcnt=cnt;
      ans=i;
    }
  }

  printf("%d\n",ans);
}
#########################################
#include<stdio.h>

int main(){
	int n;
	int m=1;
	scanf("%d",&n);
	if(n==1){
		printf("%d\n",n);
		return 0;
	}
	while(m*2<=n){
		m=m*2;
	}
	printf("%d\n",m);
	return 0;
}
#########################################
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=0;i<100;i++)
    {
    	if(pow(2,i)<=n)
    	a=pow(2,i);
    	else
    	break;
	}
	printf("%d",a);
    return 0;
}
#########################################
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int ans = 0;
    for (int i = 0; i < n + 1; i++) {
        if (pow(2, i) <= n) {
            ans = pow(2, i);
        } else {
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
#########################################
