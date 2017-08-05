#include <stdio.h>
int main()
{
int j,t,k1=0,k2=1,nextTerm;
printf("Enter the number of terms: ");
scanf("%d", &t);
printf("Fibonacci Series: ");
for (j=1;j<=t;++j)
{
printf("%d, ", k1);
nextTerm=k1+k2;
k1=k2;
k2=nextTerm;
}
return 0;
}
