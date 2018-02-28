#include <stdio.h>
int main(void)
{
 char CH[50];  
 char *P1,*P2;  
  int PALI; 
 
 printf("Saisir une chaine :\n");
 gets(CH);

 for (P2=CH; *P2; P2++)
      ;
 P2--;

 PALI=1;
 for (P1=CH ; PALI && P1<P2 ; P1++,P2--)
      if (*P1 != *P2) PALI=0;
 if (PALI)
    printf("La chaîne %s est palindrome.\n", CH);
 else
    printf("La chaîne %s n'est pas palindrome.\n", CH);
 return 0;
}
