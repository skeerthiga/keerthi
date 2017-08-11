#include <stdio.h>
int main()
{
int l1,l2;
printf("Enter two positive integers: ");
scanf("%d %d",&l1,&l2);
while(l1!=l2)
{
if(l1 > l2)
l1-=l2;
else
l2-=l1;
}
printf("GCD = %d",l1);
return 0;
}
