abc070_b.c
##############################
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
##############################
##############################
##############################
##############################
#include <stdio.h>
int A, B, C, D;
int MAX(int a, int b) {
	return a < b ? b : a;
}
int MIN(int a, int b) {
	return a < b ? a : b;
}
int main() {
	scanf("%d%d%d%d", &A, &B, &C, &D);
	int diff = MIN(B, D) - MAX(A, C);
	if (diff < 0) printf("%d", 0);
	else printf("%d", diff);
	return 0;
}
##############################
#include<stdio.h>
#define MAX(x, y) ((x) > (y) ? (x) : (y))
// #define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
// #define MIN(x, y) ((x) < (y) ? (x) : (y))
int main()
{
	unsigned int A,B,C,D,i,sec;
	scanf(" %d",&A);
	scanf(" %d",&B);
	scanf(" %d",&C);
	scanf(" %d",&D);
	if(B>C && D>A)
	{
		sec=MIN(B, D)-MAX(C, A);
	}
	else
		sec=0;
	printf("%d",sec);
	return 0;
}
##############################
// LUOGU_RID: 106543550
#include<stdio.h>
int a,b,c,d;
int main(){
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d\n",0>(b<d?b:d)-(a>c?a:c)?0:(b<d?b:d)-(a>c?a:c));
	return 0;
}
##############################
#include<stdio.h>
#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))
int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int t = max(min(b, d) - max(a, c), 0);
    printf("%d\n", t);
    return 0;
}
##############################
