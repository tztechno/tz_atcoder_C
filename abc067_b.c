abc067_b.c
#########################################
#########################################
#########################################
#########################################
#########################################
#include <stdio.h>
#include <stdlib.h>

int N, K, l[51], sm = 0, i;

int cmp(const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

int main() {
	scanf("%d%d", &N, &K);

	for (i = 0; i < N; i++) scanf("%d", &l[i]);

	qsort(l, N, sizeof(int), cmp);

	for (i = 0; i < K; i++) {
		sm += l[i];
	}

	printf("%d", sm);
	return 0;
}

#########################################
#include<stdio.h>
int main(void){
  int N,K;
  scanf("%d%d",&N,&K);
  int temp = 0;
  int sum = 0;
  int x[50];
  for(int i = 0;i < N;i++){
    scanf("%d",&x[i]);
  }
  for(int j = 0;j < N ;j++){
    for(int k = j + 1;k < N;k++){
      if(x[j] < x[k]){
        temp = x[j];
        x[j] = x[k];
        x[k] = temp;
      }
    }
  }
  for(int n = 0;n < K;n++){
    sum += x[n];
  }
  printf("%d",sum);
}
#########################################
#include <stdio.h>

int n;
int k;
int l[50];

int x;
int y;

int L;

int main(void){
    scanf("%d", &n);
    scanf("%d", &k);
    for(int i=0; i<n; i++) {
        scanf("%d", &l[i]);
        for(int j=0; j<i; j++) {
            if(l[i] > l[j] ) {
                x = l[i];
                y = l[j];
                l[i] = y;
                l[j] = x;
            }
        }
    }

    for(int m=0; m<k; m++){
        L += l[m];
    }
    printf("%d", L);

    return 0;
}
#########################################
#include <stdio.h>

#define N 64

void select(int *arr, int n) {
    int i, j, p, t;
    for (i = 0; i < n - 1; i++) {
        p = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[p]) {
                p = j;
            }
        }
        if (i != p) {
            t = arr[i];
            arr[i] = arr[p];
            arr[p] = t;
        }
    }
}

int main() {
    int arr[N], i, n, k, sum = 0;
    scanf("%d%d", &n, &k);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    select(arr, n);
    for (i = 0; i < k; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}
#########################################
#include <stdio.h>

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform descending bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    int A[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &A[i]);
    }
    
    // Sorting the array in descending order
    bubbleSort(A, n);
    
    // Calculating the sum of the first k elements
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += A[i];
    }
 
    printf("%d\n", sum);
    return 0;
}
#########################################
