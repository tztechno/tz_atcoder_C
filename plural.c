//ABC179_A
//plural

///////////////////////////////////

#include<stdio.h>
int main()
{
    char a[10000];
    scanf("%s",a);
    if(a[strlen(a)-1]!='s')
        printf("%ss",a);
    else
        printf("%ses",a);
}

///////////////////////////////////

#include<stdio.h>
int main(void)
{
char s[1000];
int i;
scanf("%s",s);
for(i=0;s[i]!='\0';i++);{
  if(s[i-1]=='s'){
    printf("%s",s);
    printf("es");}
  else{
    printf("%s",s);
    printf("s");}}
return 0;
}


