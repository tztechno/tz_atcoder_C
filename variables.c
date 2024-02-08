//abc170_a variables.c
#####################################
#include<stdio.h>
int main(){
	int x[5];
	for(int i=1;i<=5;i++){
		scanf("%d",&x[i]);
		if(x[i]==0)
		printf("%d",i);
	}
}
#####################################
#include<stdio.h>
int main()
{
int x[5];
for(int i=1;i<=5;i++){
scanf("%d",&x[i]);
}
for(int i=1;i<=5;i++){
if(x[i]==0){
printf("%d\n",i);
}
}
}
#####################################
#include<stdio.h>
int main()
{
    int x[5];
    int a;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &x[i]);
        if(x[i]==0) a=i+1;
    }
    printf("%d", a);
}
#####################################
#include <stdlib.h>
int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d%d", &a, &b, &c, &d, &e);
    int arr[] = {a, b,c,d,e};
    for(int i = 0; i <= 4; i++)
    {
        if(arr[i] == 0) printf("%d", ++i);
    }
}
#####################################
#include <stdio.h>
int main() {
    int X[5];
    for (int i=0; i<5; ++i) {
        scanf("%d", &X[i]);
    }
    for (int i=0; i<5; ++i) {
     if (X[i]==0) {
         printf("%d",i+1);           
         }
    }
    return 0;
}
#####################################
