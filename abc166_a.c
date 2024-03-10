//abc166_a.c
################################
	char s[4];
	scanf("%s", s);
    if (strcmp(input, "ABC") == 0) {
################################
################################
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	char s[4];
	scanf("%s", s);
	if (s[1] == 'B')
		printf("ARC");
	else
		printf("ABC");
}
################################
#include <stdio.h>
#include <string.h>
int main() {
    char s[4];
    scanf("%s", s);
    if (strcmp(s, "ARC") == 0) {
        printf("ABC\n");
    } else {
      printf("ARC\n");
    }
}
################################
#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[20];
    scanf ("%s", str);   
    if(strcmp(str,"ABC")==0)
    {
        printf("ARC");
    }
    else if(strcmp(str,"ARC")==0)
    {
        printf("ABC");
    }
    return 0;  
}  
################################
#include <stdio.h>
#include <string.h>

int main() {
    char last_contest[4];
    scanf("%s", last_contest);
    char this_contest[4];
    if (strcmp(last_contest, "ABC") == 0) {
        strcpy(this_contest, "ARC");
    } else {
        strcpy(this_contest, "ABC");
    }
    printf("%s", this_contest);
    return 0;
}
################################
#include <stdio.h>
#include <string.h> 
int main() {
    char input[100];
    char output[100];
    fgets(input, sizeof(input), stdin);
    if (strchr(input, '\n') != NULL) {
        input[strcspn(input, "\n")] = '\0';
    }
    if (strcmp(input, "ABC") == 0) {
        strcpy(output, "ARC");
    } else {
        strcpy(output, "ABC");
    }
    printf("%s\n", output); 
    return 0;
}

################################
