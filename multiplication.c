//abc169_a multiplication.c
################################
################################
#include<stdio.h>
void main(){
  int A, B;
  scanf("%d %d",&A, &B);
  printf("%d",A*B);
}
################################
#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d %d",&a,&b);
c=a*b;
printf("%d",c);
return 0;
}
################################
#include<stdio.h>
int main(){
    int A,B;
    scanf("%d %d",&A,&B) ;
    int mul=A*B;
    printf("%d",mul) ;
    return 0;
}
################################
#include <stdio.h>
int main() {
    int X[2];
    for (int i=0; i<2; ++i) {
        scanf("%d", &X[i]);
    }
    printf("%d",X[0]*X[1]);           
    return 0;
}
################################
#include <stdlib.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[] = {a, b};
    printf("%d", a*b);
}
################################
