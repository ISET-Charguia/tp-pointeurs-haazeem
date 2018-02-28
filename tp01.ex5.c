#include   <stdio.h>
#include   <stdlib.h>
#include <string.h>
int main(void)  {
    char s[100];
    int i=0;
    printf("Saisir une chaine de caractère :");
    scanf("%s", &s);
    char *p=NULL;
    p=s;
    while (*p!='\0'){
        i++;
        p++;}
    printf("%d\n",i);
return 0;
    }
