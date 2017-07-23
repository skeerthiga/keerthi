#include <stdio.h>
int main()
{
char j;
printf("Enter a character: ")
scanf("%c",&j);
if( (j>='a' && j<='z') || (j>='A' && j<='Z'))
printf("%c is an alphabet.",j);else
printf("%c is not an alphabet.",j);
return 0;
}
