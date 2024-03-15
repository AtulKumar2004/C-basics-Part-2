#include <stdio.h>
int main()
{
int i,j,n,d,temp;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
printf("Enter %d numbers: \n",n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position you want to shift array from: ");
scanf("%d",&d);
for(i=0;i<d;i++)
{
temp=a[0];
for(j=0;j<n-1;j++)
{
a[j]=a[j+1];
}
a[n-1]=temp;
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
