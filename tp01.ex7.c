#include <stdio.h>
#include<stdlib.h>
#include<string.h>


void moins_dernier(char *S)
{

int i;
i=strlen(S);
printf("%d\n",i);
(S[i-1])='\0';
printf("le nouveau chaine est : %s\n",S);

}

/*
void efface( char *ch)
{
int i;
i=strlen(*ch);
printf("%d\n",i);
*ch[i-1]='\0';
printf("le nouveau chaine est : %s\n",*ch);
}
*/
int main(void)
{
char *S="";
do{
puts("saisir une chaine");
gets(&S);
}while(strlen(S)>50);
/*face(&ch);*/
moins_dernier(S);
return 0;
}
