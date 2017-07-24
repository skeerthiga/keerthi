#include <stdio.h>
int main()
{
int j,l;
unsigned long long factorial = 1;
printf("Enter an integer");
scanf("%d",&j);
if (j<0)
printf("Factorial of a negative number doesn't exist");
else
{
for(l=1;l<=j;++l)
{
factorial*=l;             
}
printf("Factorial of %d = %llu",j,factorial);
}
return 0;
}
