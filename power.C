#include <stdio.h>
#include <math.h>

int main()
{
double base, exponent, res;
printf("Enter a base number: ");
scanf("%lf", &base);
printf("Enter an exponent: ");
scanf("%lf", &exponent);
result = pow(base, exponent);
printf("%.1lf^%.1lf = %.2lf", base, exponent, res);
return 0;
}
