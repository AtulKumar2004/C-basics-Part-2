#include <stdio.h>
int main()
{
int n,i,sum=0;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements: \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int *p=a;
for(i=0;i<n;i++)
{
sum+=*(p+i);
}
printf("The sum of the array elements = %d\n",sum);
return 0;
}
