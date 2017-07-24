#include<stdio.h>
int main()
{
int j,l=1,num;
printf("Enter a number: ");
scanf("%d",&num);
for(j=1;j<=num;j++)
l=l*j;
printf("Factorial of %d is: %d",num,l);
return 0;
}


