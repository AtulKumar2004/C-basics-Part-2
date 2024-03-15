/*
#include <stdio.h>
int main()
{
int i,j,ld,n,sum=0,fact;
printf("Enter a number: ");
scanf("%d",&n);
for(i=n;i>0;i/=10)
{
ld=i%10;
fact=1;
for(j=1;j<=ld;j++)
{
fact*=j;
}
sum+=fact;
}
if(sum==n)
{
printf("The given number is Strong\n");
}
else
{
printf("The given number is not Strong\n");
}
}
*/

/*
#include <stdio.h>
int main()
{
int i,j,ld,n,num,sum=0,fact=1;
printf("Enter a number: ");
scanf("%d",&n);
num=n;
while(n>0)
{
ld=n%10;
j=1;
fact=1;
while(j<=ld)
{
fact*=j;
j++;
}
sum+=fact;
n/=10;
}
if(sum==num)
{
printf("The given number is Strong\n");
}
else
{
printf("The given number is not Strong\n");
}
}
*/

#include <stdio.h>
int main()
{
int j,ld,n,num,sum=0,fact=1;
printf("Enter a number: ");
scanf("%d",&n);
num=n;
do
{
ld=n%10;
j=1;
fact=1;
do
{
fact*=j;
j++;
}
while(j<=ld);
sum+=fact;
n/=10;
}
while(n>0);
if(sum==num)
{
printf("The given number is Strong\n");
}
else
{
printf("The given number is not Strong\n");
}
}
