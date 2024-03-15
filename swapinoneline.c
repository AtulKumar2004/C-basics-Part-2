#include <stdio.h>
int main()
{
int a,b;
printf("Enter Number 1 = ");
scanf("%d",&a);
printf("Enter Number 2 = ");
scanf("%d",&b);
printf("Before swapping,Number 1 = %d and Number 2 = %d\n",a,b);
(a ^= b), (b ^= a), (a ^= b);
printf("After swapping,Number 1 = %d and Number 2 = %d\n",a,b);
}
