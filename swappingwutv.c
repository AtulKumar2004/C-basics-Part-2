#include <stdio.h>
int main()
{
int a,b;
printf("Enter number 1: ");
scanf("%d",&a);
printf("Enter number 2: ");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("Number 1 after swapping = %d\n",a);
printf("Number 2 after swapping = %d\n",b);
} 

