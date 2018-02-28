#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int A[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
 int *p;
 p = A; 
printf("A==> %d\n",*p+2);
printf("B==> %d\n",*(p+2));
printf("C==> %d\n",&p+1);
printf("D==> %d\n",*(&A[4]-3));
printf("E==> %d\n",*(A+3));
printf("F==> %d\n",&A[7]-p);
printf("G==> %d\n",p+(*p-10));
printf("H==> %d\n",*(p+*(p+8)-A[7]));
	return 0 ;
}
