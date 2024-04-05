abc069_b.c
#########################################
#########################################
#########################################
#########################################
#########################################
#include <stdio.h>
#include <string.h>

int main() {
    char s[101]; // 文字列の配列を長さ101で宣言（終端のヌル文字を考慮）
    scanf("%s", s);

    int length = strlen(s); //文字の長さを取得する
    if (length <= 2) {
        printf("%s", s);
    } else {
        printf("%c%d%c", s[0], length - 2, s[length - 1]);
    }

    return 0;
}

#########################################
#include<stdio.h>

void main(){
  char s[101];
  scanf("%s",s);
  
  int i=1,c=0;
  for(i;s[i+1]!='\0';i++,c++);
  printf("%c%d%c",s[0],c,s[i]);
}
#########################################
#include <stdio.h>
#include <string.h>

char s[101];

int main() {
	scanf("%s", s);

	int n = strlen(s);

	printf("%c%d%c", s[0], n-2, s[n-1]);
	return 0;
}
	

#########################################
#include <stdio.h>
#include <string.h>

int main() {
    char S[256];
    scanf("%s", S);
    int n = strlen(S);
    printf("%c%d%c\n",S[0],n-2,S[n-1]); // Using %c for characters
    return 0;
}
#########################################
