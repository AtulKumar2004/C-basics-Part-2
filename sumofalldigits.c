#include <stdio.h>
int main()
{
int n,fd,sd,ld,sum=0;
printf("Enter a three digit number: ");
scanf("%d",&n);
ld=n%10;
sd=(n/10)%10;
fd=n/100;
sum=fd+sd+ld;
printf("Sum of all digits of %d is = %d\n",n,sum);
}
