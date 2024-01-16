//abc175_a rainy.c

############################################

#include <stdio.h>

int main() {
    char A[3];
    scanf("%s", A);
    int DP[4] = {0, 0, 0, 0}; 
    int ans = 0;    

    for (int i = 0; i < 3; i++) {
        if (A[i] == 'R') {
            DP[i + 1] = DP[i] + 1;
            if (DP[i + 1] > ans) {
                ans = DP[i + 1];
            }
        }
    }
    printf("%d\n", ans); // Corrected the printf statement
    return 0; // Added a return statement
}

############################################

#include<stdio.h>
int main(void){
    int ans=-1,c=0,f=0,i;
    char S[5];
    scanf("%s",S);
    for(i=0;S[i]!='\0';i++){
        if(S[i]=='R'){
            f=1;
            c++;
        }else{
            f=0;
            c=0;
        }
        if(ans<c){
            ans=c;
        }
    }
    printf("%d",ans);
    return 0;
}

############################################
