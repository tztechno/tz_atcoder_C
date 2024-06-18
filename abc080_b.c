abc080_b.c
##########################################
len(list(str(X0)) in C
char str[20];
snprintf(str, sizeof(str), "%d", X0);
int length = strlen(str);    
##########################################
int(X/10) in C
C言語では整数同士の割り算は自動的に整数結果を返します    
##########################################
##########################################
##########################################
##########################################
##########################################
#include <stdio.h>
int digit(int b)
{
    int sum=0;
    while (b > 0)
    {
        sum=sum+(b%10);
        b=(b/10);

    }
    return sum;
}
int main()
{
    int a,sum;
    scanf("%d",&a);
    sum=digit(a);
    if(a%sum==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}

##########################################
#include <stdio.h>

int main() {
    int X0;
    scanf("%d", &X0);
    int M=0;
    int X=X0;
    char str[20];
    snprintf(str, sizeof(str), "%d", X0);
    int length = strlen(str);      
    for (int i=0; i<length; ++i) {
        M+=X%10;
        X=X/10;
    }
    if (X0%M==0){
      printf("Yes");            
    } else {
      printf("No");            
    }
    return 0;
}

##########################################
[python]
X0=int(input())
M=0
X=X0
for i in range(len(list(str(X0)))):
  M+=X%10
  X=X//10
if X0%M==0:
  print('Yes')
else:
  print('No')
##########################################
