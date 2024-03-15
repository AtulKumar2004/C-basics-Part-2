#include <stdio.h>
int main()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
int *p1=&a;
int *p2=&b;
printf("Before Swapping a and b: %d %d\n",*p1,*p2);
int temp=*p1;
*p1=*p2;
*p2=temp;
printf("After Swapping a and b: %d %d\n",*p1,*p2);
return 0;
}

