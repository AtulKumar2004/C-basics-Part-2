#include <stdio.h>
int main()
{
int i,n,search,ind,c=0;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
printf("Enter %d numbers: \n",n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number to be searched: ");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(a[i]==search)
{
ind=i;
c=1;
break;
}
}
if(c==1)
{
printf("Number found at location = %d\n",ind+1);
}
else
{
printf("Number not found\n");
}
}


