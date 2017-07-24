#include<stdio.h>
int check_palindrome(int j){
static int reverse_j=0,rem;
if(j!=0){
rem=j%10;
reverse_j=reverse_j*10+rem;
check_palindrome(j/10);
}
return reverse_j;
}
int main(){
int j, reverse_j;printf("Enter a number: ");
scanf("%d",&j);
reverse_j = check_palindrome(j;
if(j==reverse_j)
printf("%d is a palindrome number",j);
else
printf("%d is not a palindrome number",j);
return 0;
}
