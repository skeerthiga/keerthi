#include <stdio.h>
int main()
{
int j,k,sum=0;
printf("Enter upper limit: ");
scanf("%d",&k);
for(i=1; i<=k; i+=2)
{
sum+=i;
}
printf("Sum of odd numbers = %d",sum);
return 0;
}
