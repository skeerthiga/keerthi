#include <stdio.h>
#include <stdlib.h>
void main()
{
int n, j, flag;
printf("Enter a n \n");
scanf("%d", &n);
if(n<=1)
{
printf("%d is not a prime numbers \n", n);
exit(1);
}
flag = 0;
for (j = 2; j <= n/2; j++)
{
if ((n%j) == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
printf("%d is a prime number \n", n);
else
printf("%d is not a prime number \n", n);
}
