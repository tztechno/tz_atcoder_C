//abc168_a.c
################################
switchの使い方
################################
################################
################################
#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
int f=x%10;
if(f==2||f==4||f==5||f==7||f==9){
   printf("hon");
}
else if (f==0||f==1||f==6||f==8){
   printf("pon");
}
else{
   printf("bon");
}
return 0;
}
################################
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 10 == 3) {
        printf("bon\n");
    } else if (n % 10 == 0 || n % 10 == 1 || n % 10 == 6 || n % 10 == 8) {
        printf("pon\n");
    } else {
        printf("hon\n");
    }
    return 0;
}
################################
#include <stdio.h>
int main(void){
    int n = 0;
    scanf("%d", &n);
    n = n % 10;
    switch (n){
    case 0: case 1: case 6: case 8:
        printf("pon"); 
        break;   
    case 3:
        printf("bon");
        break;
    default:
        printf("hon");
        break;
    }
}
################################
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    char*pronounciation;
    switch(N%10)
    {
    case 0:
    case 1:
    case 6:
    case 8:
        pronounciation="pon";
        break;
    case 2:
    case 4:
    case 5:
    case 7:
    case 9:
        pronounciation="hon";
        break ;
    case 3:
        pronounciation="bon";
        break ;
    }
    printf("%s",pronounciation);
    return 0;
}

################################
#include <stdio.h>
#include <string.h>
int main() {
    char s[256];
    scanf("%s", s);
    int n = strlen(s);
    int a = s[n - 1] - '0';
    if (a == 2 || a == 4 || a == 5 || a == 7 || a == 9) {
        printf("hon\n");
    } else if (a == 0 || a == 1 || a == 6 || a == 8) {
        printf("pon\n");
    } else {
        printf("bon\n");
    }
    return 0;
}
################################
