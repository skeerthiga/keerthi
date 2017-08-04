#include <stdio.h>
int main()
{
int k1=0,k2=1,nextTerm=0,n;
printf("Enter a positive number");
scanf("%d",&n);
printf("Fibonacci Series: %d, %d",k1,k2);
nextTerm=k1+k2;
while(nextTerm<=n)
{
printf("%d",nextTerm);
k1=k2;
k2=nextTerm;
nextTerm=k1+k2;
}
return 0;
}
