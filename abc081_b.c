abc081_b.c
##########################################
    void copyArray(int dest[], int src[], int size) {
        for (int i = 0; i < size; i++) {
            dest[i] = src[i];
        }
    }
##########################################
##########################################
##########################################
##########################################
##########################################
##########################################
#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  int A[200];
  for (int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }

  int count = 0;
  while (1) {
    int flag = 1;
    for (int i = 0; i < N; i++) {
      if (A[i] % 2 != 0) {
        flag = 0;
        break;
      }
    }
    if (flag == 0) {
      break;
    }
    for (int i = 0; i < N; i++) {
      A[i] /= 2;
    }
    count++;
  }

  printf("%d\n", count);

  return 0;
}
##########################################
[MY AC]
#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    int B[N];
    
    void copyArray(int dest[], int src[], int size) {
        for (int i = 0; i < size; i++) {
            dest[i] = src[i];
        }
    }
    
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }
    
    copyArray(B, A, N);
    int flag=1;
    
    for (int i=0; i<N*10; ++i) {
      for (int j=0; j<N; ++j) {
        int bj=B[j];
        if (bj%2==0){
          B[j]=bj/2;        
        } else {
          printf("%d\n",i);
          flag=0;
          break;      
          }
        }
        if (flag==0){
          break;    
        }
     }
    return 0;
}

##########################################
[python]
N=int(input())
A=list(map(int,input().split()))
B=A
for i in range(N*10):
  for j in range(N):
    bj=B[j]
    if bj%2==0:
        B[j]=bj//2
    else:
        print(i)
        exit()
##########################################
