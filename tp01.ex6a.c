#include <stdio.h>
int main(void)
{
 char CH[50]; 
 int I,J;      
 int PALI;                  
 printf("Saisir une chaine :\n");
 gets(CH);

 for(J=0; CH[J]; J++)
     ;
 J--;

 PALI=1;
 for (I=0 ; PALI && I<J ; I++,J--)
      if (CH[I] != CH[J])
          PALI=0;
 
 if (PALI)
    printf("La chaine %s est  palindrome.\n", CH);
 else
    printf("La chaine %s n'est pas palindrome.\n", CH);
 return 0;
}
