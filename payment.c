//abc173_a payment.c
##############################
#include <stdio.h>
#define N_MAX (10)
#define BILL (1000)
int main(void){
  int N = 0;
  int change = 0;
  scanf("%d", &N);
  for(int i = 1; i <= N_MAX; i++){
    change = i * BILL - N;
    if(change >= 0){
      printf("%d\n", change);
      break;
    }
  }
  return 0;
}
##############################
#include<stdio.h>
int main()
{
    int N,X,C;
    scanf("%d",&N);
    if(N%1000==0)
    {
        printf("0");
    }
    else
    {
      X=N%1000;
      C=1000-X;
      printf("%d",C);
    }
}

##############################
#include<stdio.h>
int main(){
    int N;
    int a=0;
    scanf("%d",&N);
    a=N/1000;
    a=a*1000;
    if(a<N){
        a=a+1000;
    }
    printf("%d",a-N);
    return 0;
}
##############################
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int A = (1000 - N % 1000) % 1000;
    printf("%d\n", A);
    return 0;
}
##############################
