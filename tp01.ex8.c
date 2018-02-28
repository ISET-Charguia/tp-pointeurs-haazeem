#include<stdio.h>
#include<stdlib.h>

void lecture_tab(int *T,int N)
{
int i;
for(i=0;i<N;i++)
{
puts("saisir une enrier");
scanf("%d",&T[i]);
}
}
void permute ( int *A,int *B)
{
int C;
C=*A;
*A=*B;
*B=C;
return;
}
void Inverse_tab (int *T,int N)
{
int i,j;
for (i=0, j=N-1; i<j; i++,j--)
{
permute(&T[i],&T[j]);
}
}

void affichage(int *T,int N)
{
int i;
for(i=0;i<N;i++)
printf("%d\t",T[i]);

}


int main (void)
{
int T[50],N;
do{
puts("saisir la taille de tab");
scanf("%d",&N);
}while(N>50);
lecture_tab(T,N);
Inverse_tab(T,N);
affichage(T,N);
return 0;

}
