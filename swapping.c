#include <stdio.h>
int main()
{
int a,b,temp;
printf("Enter Number 1: ");
scanf("%d",&a);
printf("Enter Number 2: ");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("Number 1 after swapping = %d\n",a);
printf("Number 2 after swapping = %d\n",b);
}
