abc072_b.c
######################################
######################################
######################################
######################################
######################################
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char string[100005] = {};
    fgets(string, 100002, stdin);
    int i = 0;
    string[strlen(string)-1] = '\0';
    while(i < strlen(string))
    {
        printf("%c", string[i]);
        i += 2;
    }
    printf("\n");
    return(0);
}
######################################
#include <stdio.h>
#include <string.h>

char s[100001];
int main() {
	scanf("%s", s);
	for (int i=0; i<strlen(s); i+=2) {
		printf("%c", s[i]);
	}
	return 0;
}

######################################
#include <math.h>
#include <stdio.h>
#include <string.h>
int main() {
  long int x, y, z, sum, i = 0, k;
  char a[100000000];
  gets(a);
  printf("%c", a[0]);
  for (i = 1; i < strlen(a); i++) {
    if (i % 2 == 0) {
      printf("%c", a[i]);
    }
  }
  return 0;
}
######################################
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int snum(char s[]){
	int i;for (i = 0;i < 2000000001;i++)if (s[i] == 0)break;return i;
}
int main()
{
	char s[100001];
	scanf("%s", s);
	for (int i = 0;i < snum(s);i+=2)
		printf("%c", s[i]);
}
######################################
#include <stdio.h>
#include <string.h>

int main() {
    char s[100000];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        s[strcspn(s, "\n")] = '\0';
        int n = strlen(s);
        char ans[50000]; // Changed to an array to store multiple characters
        int j = 0; // Counter for the characters in the 'ans' array
        for (int i = 0; i < n; i += 2) {
            ans[j] = s[i]; // Store the character at index 'i' of 's' into 'ans'
            j++; // Increment the counter
        }
        ans[j] = '\0'; // Null-terminate the 'ans' array
        printf("%s\n", ans);
    }
    return 0;
}
######################################
