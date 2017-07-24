#include<stdio.h>
int main()
{
int n,num,num2,k,remark;
printf("\n Enter any two Numbers : ");
scanf("%d %d",&num1,&num2);
printf("\n\n The Prime Numbers between the given Two Intervals are . . . \n ");
for(n=num1;n<=num2;++n)
{
remark=0;
for(k=2;k<=n/2;k++){
if((n % k) == 0){
remark++;
break;
}
}
if(remark==0)
printf("\n %d ", n);
}
getch();
return 0;
}
