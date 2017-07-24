#include <stdio.h>
int main()
{
int n1,n2,l,p,num,rem;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &n1, &n2);
printf("Armstrong numbers between %d an %d are",n1,n2);
for(l=n1+1;l<n2;++l)
{
p=l;
num=0;
while(p!=0)
{
rem=(p%10);
num+=rem*rem*rem;
p/=10;
}
if(l==num)
{
printf("%d ",l);
}
}
return 0;
}
