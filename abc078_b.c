abc078_b.c
#################################
#################################
#################################
#include<stdio.h>
int main(){
	int x,y,z,ans;
	scanf("%d%d%d",&x,&y,&z);
  ans=(x-z)/(y+z);
  printf("%d", ans);
}
#################################
#include <stdio.h>
int X, Y, Z;
int main() {
	scanf("%d%d%d", &X, &Y, &Z);
	printf("%d", (X - Z) / (Y + Z));
	return 0;
}
#################################
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,ans;
    scanf("%d%d%d",&x,&y,&z);
    ans=floor((x-z)/(y+z));
    printf("%d",ans);
}
#################################
[python]
X,Y,Z=map(int,input().split())
print((X-Z)//(Y+Z))
#################################
