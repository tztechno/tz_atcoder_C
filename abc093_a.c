//abc093_a.c
####################################
####################################
####################################
####################################
####################################
####################################
####################################
#include <stdio.h>

int main() {
  char list[3];
  scanf("%s",list);
  if((list[0] == list[1]) || (list[0] == list[2]) || (list[1] == list[2])){
    printf("No");
  } else printf("Yes");
  return 0;
}
####################################
#include <stdio.h>
#include <string.h>

int main()
{
    char s[4];
    scanf("%s", s);
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a')
        {
            a++;
        } else if (s[i] == 'b')
        {
            b++;
        } else if (s[i] == 'c')
        {
            c++;
        }
    }
    if (a == 1 && b == 1 && c == 1)
    {
        printf("Yes\n");
    } else
    {
        printf("No\n");
    }
    return 0;
}
####################################
#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int length = strlen(str);
    char temp;

    // Bubble sort
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                // Swap characters
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char s[4];
    scanf("%s", s);
    
    sortString(s);

    // Check if sorted string matches "abc"
    if (strcmp(s, "abc") == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
####################################
