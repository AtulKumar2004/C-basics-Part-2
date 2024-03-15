#include <stdio.h>
int main()
{
int n,fd,ld,sum=0;
printf("Enter a six digit number: ");
scanf("%d",&n);
fd=n/100000;
ld=n%10;
sum=fd+ld;
printf("Sum = %d\n",sum);
}
