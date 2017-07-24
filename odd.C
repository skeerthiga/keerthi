#include <stdio.h>

void main()
{
int number,j=20,k=40;
clrscr();
printf("Print Odd Numbers in a given range m to n:\n");
for (number=j;number<=k;number++)
{
if (number%2==1)
printf("%d",number);
}
getch();
} 
